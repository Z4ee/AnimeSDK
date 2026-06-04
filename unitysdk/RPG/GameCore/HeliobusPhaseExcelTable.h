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

#define RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19827CC0)
#define RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19827B90)
#define RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x19827880)
#define RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19827B30)
#define RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19827E50)
#define RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19827900)
#define RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19827E90)
#define RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19828060)
#define RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19828510)
#define RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19828830)
#define RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19827FC0)
#define RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19827F20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusPhaseExcelTable_TypeDefinitionIndex = 13094;

	class HeliobusPhaseExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusPhaseExcelTable_TypeDefinitionIndex)->GetStaticField(0x24670);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusPhaseRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusPhaseRow*>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusPhaseExcelTable_TypeDefinitionIndex)->GetStaticField(0x24678);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusPhaseExcelTable_TypeDefinitionIndex)->GetStaticField(0x24680);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(HeliobusPhaseExcelTable_TypeDefinitionIndex)->GetStaticField(0x9220);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HeliobusPhaseExcelTable_TypeDefinitionIndex)->GetStaticField(0x9221);
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

		static ::RPG::GameCore::HeliobusPhaseRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::HeliobusPhaseRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE_GETDATA_OFFSET))(a1);
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

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::HeliobusPhaseRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::HeliobusPhaseRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPHASEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
