#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HeliobusPhaseRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x189F5250)
#define RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x189F50D0)
#define RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x189F4DA0)
#define RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x189F5070)
#define RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x189F5420)
#define RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x189F4E20)
#define RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x189F5460)
#define RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x189F5640)
#define RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x189F5AF0)
#define RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x189F5E00)
#define RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x189F55A0)
#define RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x189F5500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusPhaseExcelTable_TypeDefinitionIndex = 13011;

	class HeliobusPhaseExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusPhaseRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusPhaseRow*>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusPhaseExcelTable_TypeDefinitionIndex)->GetStaticField(0x3D170);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusPhaseExcelTable_TypeDefinitionIndex)->GetStaticField(0x3D178);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusPhaseExcelTable_TypeDefinitionIndex)->GetStaticField(0x3D180);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HeliobusPhaseExcelTable_TypeDefinitionIndex)->GetStaticField(0xD910);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(HeliobusPhaseExcelTable_TypeDefinitionIndex)->GetStaticField(0xD911);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusPhaseRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusPhaseRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusPhaseRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusPhaseRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::HeliobusPhaseRow* GetData(::System::UInt32 HeliobusPhaseID)
		{
			return ((::RPG::GameCore::HeliobusPhaseRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE_GETDATA_OFFSET))(HeliobusPhaseID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::HeliobusPhaseRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::HeliobusPhaseRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
