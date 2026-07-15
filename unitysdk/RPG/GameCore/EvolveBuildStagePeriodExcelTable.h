#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class EvolveBuildStagePeriodRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_EVOLVEBUILDSTAGEPERIODEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1C064B30)
#define RPG_GAMECORE_EVOLVEBUILDSTAGEPERIODEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C0649C0)
#define RPG_GAMECORE_EVOLVEBUILDSTAGEPERIODEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1C0646B0)
#define RPG_GAMECORE_EVOLVEBUILDSTAGEPERIODEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1C064960)
#define RPG_GAMECORE_EVOLVEBUILDSTAGEPERIODEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1C064CC0)
#define RPG_GAMECORE_EVOLVEBUILDSTAGEPERIODEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1C064730)
#define RPG_GAMECORE_EVOLVEBUILDSTAGEPERIODEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1C064D00)
#define RPG_GAMECORE_EVOLVEBUILDSTAGEPERIODEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C064ED0)
#define RPG_GAMECORE_EVOLVEBUILDSTAGEPERIODEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1C0653F0)
#define RPG_GAMECORE_EVOLVEBUILDSTAGEPERIODEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C065760)
#define RPG_GAMECORE_EVOLVEBUILDSTAGEPERIODEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1C064E30)
#define RPG_GAMECORE_EVOLVEBUILDSTAGEPERIODEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1C064D90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildStagePeriodExcelTable_TypeDefinitionIndex = 11031;

	class EvolveBuildStagePeriodExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildStagePeriodExcelTable_TypeDefinitionIndex)->GetStaticField(0x312F0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildStagePeriodExcelTable_TypeDefinitionIndex)->GetStaticField(0x312F8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildStagePeriodRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildStagePeriodRow*>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildStagePeriodExcelTable_TypeDefinitionIndex)->GetStaticField(0x31300);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildStagePeriodExcelTable_TypeDefinitionIndex)->GetStaticField(0x8650);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildStagePeriodExcelTable_TypeDefinitionIndex)->GetStaticField(0x8651);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSTAGEPERIODEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildStagePeriodRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildStagePeriodRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSTAGEPERIODEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSTAGEPERIODEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildStagePeriodRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildStagePeriodRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSTAGEPERIODEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::EvolveBuildStagePeriodRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::EvolveBuildStagePeriodRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSTAGEPERIODEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSTAGEPERIODEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSTAGEPERIODEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSTAGEPERIODEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSTAGEPERIODEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSTAGEPERIODEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSTAGEPERIODEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::EvolveBuildStagePeriodRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::EvolveBuildStagePeriodRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSTAGEPERIODEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
