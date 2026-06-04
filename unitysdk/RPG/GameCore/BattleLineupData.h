#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleExtraPropertyAddition.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_B37E32AE995F430C;
class Class_2_9D2DEA765AF5C2B0;
namespace RPG::GameCore { class LevelGraphConfig; }
namespace RPG::GameCore { class LineUpCharacter; }
namespace RPG::GameCore { class LineUpContext; }
namespace RPG::GameCore { class MazeBuffData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_BATTLELINEUPDATA_ADDNEWBATTLEEXTRAPROPERTYADDITION_OFFSET UNITYSDK_OFFSET(0xCD33CB0)
#define RPG_GAMECORE_BATTLELINEUPDATA_DEEPCOPY_OFFSET UNITYSDK_OFFSET(0xCD31050)
#define RPG_GAMECORE_BATTLELINEUPDATA_FILLALIVELIGHTTEAM_OFFSET UNITYSDK_OFFSET(0xCD34AA0)
#define RPG_GAMECORE_BATTLELINEUPDATA_FILLBATTLEEXTRAPROPERTYADDITION_OFFSET UNITYSDK_OFFSET(0xCD33DE0)
#define RPG_GAMECORE_BATTLELINEUPDATA_GETALLAVATARGLOBALMAZEBUFFDATALIST_OFFSET UNITYSDK_OFFSET(0xCD35390)
#define RPG_GAMECORE_BATTLELINEUPDATA_GETALLMAZEBUFFDATALIST_OFFSET UNITYSDK_OFFSET(0xCD34D30)
#define RPG_GAMECORE_BATTLELINEUPDATA_GETTEMPLATEVARIABLES_OFFSET UNITYSDK_OFFSET(0xCD347B0)
#define RPG_GAMECORE_BATTLELINEUPDATA_GETTOTALEXTRAAVATARRANK_OFFSET UNITYSDK_OFFSET(0xCD35260)
#define RPG_GAMECORE_BATTLELINEUPDATA_GET_BATTLEEXTRAPROPERTYADDITIONLIST_OFFSET UNITYSDK_OFFSET(0xCD354E0)
#define RPG_GAMECORE_BATTLELINEUPDATA_GET_LEVELCONFIG_OFFSET UNITYSDK_OFFSET(0xCD35500)
#define RPG_GAMECORE_BATTLELINEUPDATA_GET_LEVELPATH_OFFSET UNITYSDK_OFFSET(0xCD31C00)
#define RPG_GAMECORE_BATTLELINEUPDATA_LINEUPCONTAINSAVATARID_OFFSET UNITYSDK_OFFSET(0xCD34C10)
#define RPG_GAMECORE_BATTLELINEUPDATA_RESET_OFFSET UNITYSDK_OFFSET(0xCD33A80)
#define RPG_GAMECORE_BATTLELINEUPDATA_SETCUSTOMLEVELPATH_OFFSET UNITYSDK_OFFSET(0xCD33A30)
#define RPG_GAMECORE_BATTLELINEUPDATA_SET_BATTLEEXTRAPROPERTYADDITIONLIST_OFFSET UNITYSDK_OFFSET(0xCD354F0)
#define RPG_GAMECORE_BATTLELINEUPDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xCD35550)
#define RPG_GAMECORE_BATTLELINEUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCD336E0)
#define RPG_GAMECORE_BATTLELINEUPDATA__FILLTEMPLATEVARS_OFFSET UNITYSDK_OFFSET(0xCD34920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleLineupData_TypeDefinitionIndex = 52595;

	class BattleLineupData : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_s_IsSkipBattlePerformance()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BattleLineupData_TypeDefinitionIndex)->GetStaticField(0x13D60);
		}
		static ::System::Boolean* StaticGet_s_IsPlayerDontLoad()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BattleLineupData_TypeDefinitionIndex)->GetStaticField(0x13D61);
		}
		static ::System::Boolean* StaticGet_s_IsMonsterDontLoad()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BattleLineupData_TypeDefinitionIndex)->GetStaticField(0x13D62);
		}
		static ::System::Int32* StaticGet_s_TeamBoostSkillNumber()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BattleLineupData_TypeDefinitionIndex)->GetStaticField(0x13D64);
		}
		static ::System::Int32* StaticGet_s_TeamDefaultCharacterCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BattleLineupData_TypeDefinitionIndex)->GetStaticField(0x13D68);
		}
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* AdditionalTemplateVariables; // 0x10
		::System::Collections::Generic::List_1<::Class_1_B37E32AE995F430C*>* _BattleExtraPropertyAdditionList_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::MazeBuffData*>* MazeBuffAdded; // 0x20
		::Il2CppArray<::System::UInt32>* TeamBuffIDList; // 0x28
		::System::String* _LevelPath; // 0x30
		::Il2CppArray<::RPG::GameCore::LineUpCharacter*>* ExtraTeam; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* _TemplateVariables; // 0x40
		::RPG::GameCore::LineUpContext* Context; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* SpecialAvatarLevelAreaConfigs; // 0x50
		::Il2CppArray<::RPG::GameCore::LineUpCharacter*>* LightTeam; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* DeferCreateTrialPlayerDic; // 0x60
		::System::UInt32 WorldLevel; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPDATA__CCTOR_OFFSET))();
		}

		::System::Void SetCustomLevelPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPDATA_SETCUSTOMLEVELPATH_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPDATA_RESET_OFFSET))(this);
		}

		::RPG::GameCore::BattleLineupData* DeepCopy()
		{
			return ((::RPG::GameCore::BattleLineupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPDATA_DEEPCOPY_OFFSET))(this);
		}

		::Class_1_B37E32AE995F430C* AddNewBattleExtraPropertyAddition(::RPG::GameCore::BattleExtraPropertyAddition a1, ::RPG::GameCore::FixPoint a2, ::Il2CppArray<::System::UInt32>* a3)
		{
			return ((::Class_1_B37E32AE995F430C*(*)(::PVOID, ::RPG::GameCore::BattleExtraPropertyAddition, ::RPG::GameCore::FixPoint, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPDATA_ADDNEWBATTLEEXTRAPROPERTYADDITION_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FillBattleExtraPropertyAddition(::Class_2_9D2DEA765AF5C2B0*& a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_9D2DEA765AF5C2B0*&, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPDATA_FILLBATTLEEXTRAPROPERTYADDITION_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* GetTemplateVariables()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPDATA_GETTEMPLATEVARIABLES_OFFSET))(this);
		}

		::System::Void FillAliveLightTeam(::System::Collections::Generic::List_1<::RPG::GameCore::LineUpCharacter*>*& a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::LineUpCharacter*>*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPDATA_FILLALIVELIGHTTEAM_OFFSET))(this, a1);
		}

		::System::Boolean LineupContainsAvatarID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPDATA_LINEUPCONTAINSAVATARID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::MazeBuffData*>* GetAllMazeBuffDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::MazeBuffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPDATA_GETALLMAZEBUFFDATALIST_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetTotalExtraAvatarRank()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPDATA_GETTOTALEXTRAAVATARRANK_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::MazeBuffData*>* GetAllAvatarGlobalMazeBuffDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::MazeBuffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPDATA_GETALLAVATARGLOBALMAZEBUFFDATALIST_OFFSET))(this);
		}

		::System::Void _FillTemplateVars(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPDATA__FILLTEMPLATEVARS_OFFSET))(this, a1, a2);
		}

		::System::String* get_LevelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPDATA_GET_LEVELPATH_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_B37E32AE995F430C*>* get_BattleExtraPropertyAdditionList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_B37E32AE995F430C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPDATA_GET_BATTLEEXTRAPROPERTYADDITIONLIST_OFFSET))(this);
		}

		::System::Void set_BattleExtraPropertyAdditionList(::System::Collections::Generic::List_1<::Class_1_B37E32AE995F430C*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_B37E32AE995F430C*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPDATA_SET_BATTLEEXTRAPROPERTYADDITIONLIST_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelGraphConfig* get_LevelConfig()
		{
			return ((::RPG::GameCore::LevelGraphConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPDATA_GET_LEVELCONFIG_OFFSET))(this);
		}
	};
}
