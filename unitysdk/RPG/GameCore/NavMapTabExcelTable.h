#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class NavMapTabRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_NAVMAPTABEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18B7C850)
#define RPG_GAMECORE_NAVMAPTABEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18B7C6D0)
#define RPG_GAMECORE_NAVMAPTABEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18B7C3A0)
#define RPG_GAMECORE_NAVMAPTABEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18B7C670)
#define RPG_GAMECORE_NAVMAPTABEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18B7CA20)
#define RPG_GAMECORE_NAVMAPTABEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18B7C420)
#define RPG_GAMECORE_NAVMAPTABEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18B7CA60)
#define RPG_GAMECORE_NAVMAPTABEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18B7CC40)
#define RPG_GAMECORE_NAVMAPTABEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18B7CF90)
#define RPG_GAMECORE_NAVMAPTABEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B7D2A0)
#define RPG_GAMECORE_NAVMAPTABEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18B7CBA0)
#define RPG_GAMECORE_NAVMAPTABEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18B7CB00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NavMapTabExcelTable_TypeDefinitionIndex = 13257;

	class NavMapTabExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(NavMapTabExcelTable_TypeDefinitionIndex)->GetStaticField(0x407B0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NavMapTabRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NavMapTabRow*>**)Il2CppClass::FromTypeDefinitionIndex(NavMapTabExcelTable_TypeDefinitionIndex)->GetStaticField(0x407B8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(NavMapTabExcelTable_TypeDefinitionIndex)->GetStaticField(0x407C0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(NavMapTabExcelTable_TypeDefinitionIndex)->GetStaticField(0xE830);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NavMapTabExcelTable_TypeDefinitionIndex)->GetStaticField(0xE831);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPTABEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NavMapTabRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NavMapTabRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPTABEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPTABEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NavMapTabRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NavMapTabRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPTABEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::NavMapTabRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::NavMapTabRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPTABEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPTABEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPTABEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPTABEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPTABEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPTABEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPTABEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::NavMapTabRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::NavMapTabRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPTABEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
