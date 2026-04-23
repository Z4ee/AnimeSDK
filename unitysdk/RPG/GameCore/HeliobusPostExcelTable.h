#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HeliobusPostRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_HELIOBUSPOSTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x189F6440)
#define RPG_GAMECORE_HELIOBUSPOSTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x189F62C0)
#define RPG_GAMECORE_HELIOBUSPOSTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x189F5F90)
#define RPG_GAMECORE_HELIOBUSPOSTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x189F6260)
#define RPG_GAMECORE_HELIOBUSPOSTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x189F65C0)
#define RPG_GAMECORE_HELIOBUSPOSTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x189F6010)
#define RPG_GAMECORE_HELIOBUSPOSTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x189F6600)
#define RPG_GAMECORE_HELIOBUSPOSTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x189F67E0)
#define RPG_GAMECORE_HELIOBUSPOSTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x189F6E70)
#define RPG_GAMECORE_HELIOBUSPOSTEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x189F7180)
#define RPG_GAMECORE_HELIOBUSPOSTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x189F6740)
#define RPG_GAMECORE_HELIOBUSPOSTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x189F66A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusPostExcelTable_TypeDefinitionIndex = 13015;

	class HeliobusPostExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusPostExcelTable_TypeDefinitionIndex)->GetStaticField(0x3D1F0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusPostExcelTable_TypeDefinitionIndex)->GetStaticField(0x3D1F8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusPostRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusPostRow*>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusPostExcelTable_TypeDefinitionIndex)->GetStaticField(0x3D200);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(HeliobusPostExcelTable_TypeDefinitionIndex)->GetStaticField(0xD920);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HeliobusPostExcelTable_TypeDefinitionIndex)->GetStaticField(0xD921);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusPostRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusPostRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusPostRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusPostRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::HeliobusPostRow* GetData(::System::UInt32 HeliobusPostID)
		{
			return ((::RPG::GameCore::HeliobusPostRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTEXCELTABLE_GETDATA_OFFSET))(HeliobusPostID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::HeliobusPostRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::HeliobusPostRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
