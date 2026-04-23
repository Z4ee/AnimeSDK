#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MQuaternion.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

class Class_2_BF927CBEA754F6BE;
namespace RPG::GameCore { class DarkTeamFightFormationConfig; }
namespace RPG::GameCore { class TeamFormationComponent_RowFormationLocationData; }
namespace RPG::GameCore { class TeamFormationComponent_RowFormationRefreshGroup; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_TEAMFORMATIONCOMPONENT_MULTIROWLOCATIONCONTEXT_GETFORMATIONBYINDEX_OFFSET UNITYSDK_OFFSET(0xB768130)
#define RPG_GAMECORE_TEAMFORMATIONCOMPONENT_MULTIROWLOCATIONCONTEXT_GETFORMATIONLENGTH_OFFSET UNITYSDK_OFFSET(0xB768090)
#define RPG_GAMECORE_TEAMFORMATIONCOMPONENT_MULTIROWLOCATIONCONTEXT_GETINDEXBYFORMATION_OFFSET UNITYSDK_OFFSET(0xB769490)
#define RPG_GAMECORE_TEAMFORMATIONCOMPONENT_MULTIROWLOCATIONCONTEXT_GET_ISACTIVEMULTIROW_OFFSET UNITYSDK_OFFSET(0xB76A320)
#define RPG_GAMECORE_TEAMFORMATIONCOMPONENT_MULTIROWLOCATIONCONTEXT_GET_ISDATAMULTIROW_OFFSET UNITYSDK_OFFSET(0xB76A5B0)
#define RPG_GAMECORE_TEAMFORMATIONCOMPONENT_MULTIROWLOCATIONCONTEXT_GET_MAXROWMEMBER_OFFSET UNITYSDK_OFFSET(0xB780D50)
#define RPG_GAMECORE_TEAMFORMATIONCOMPONENT_MULTIROWLOCATIONCONTEXT_PREPARE_OFFSET UNITYSDK_OFFSET(0xB77FC60)
#define RPG_GAMECORE_TEAMFORMATIONCOMPONENT_MULTIROWLOCATIONCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xB76AA40)
#define RPG_GAMECORE_TEAMFORMATIONCOMPONENT_MULTIROWLOCATIONCONTEXT__INSERTROWSCOPETOTARGETBOUNARY_OFFSET UNITYSDK_OFFSET(0xB780F00)
#define RPG_GAMECORE_TEAMFORMATIONCOMPONENT_MULTIROWLOCATIONCONTEXT__POSTINIT_OFFSET UNITYSDK_OFFSET(0xB781120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamFormationComponent_MultiRowLocationContext_TypeDefinitionIndex = 53203;

	class TeamFormationComponent_MultiRowLocationContext : public ::System::Object
	{
	public:
		::RPG::GameCore::TeamFormationComponent_RowFormationRefreshGroup* _Row1; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::TeamFormationComponent_RowFormationLocationData*>* _TargetFormationList; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::TeamFormationComponent_RowFormationLocationData*>* _MergeLogicFormationList; // 0x20
		::RPG::GameCore::TeamFormationComponent_RowFormationRefreshGroup* _Row0; // 0x28
		::System::Single MultiRowZOffsetApplyRaido; // 0x30
		::System::Single DiffRowWidthGlobalRatio; // 0x34
		::RPG::MQuaternion Quaternion; // 0x38
		::System::Int32 _TargetFormationLength; // 0x48
		::System::Single RowXOffset; // 0x4C
		::System::Single RowZOffset; // 0x50
		::RPG::MVector3 MultiRowApplyOffset; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONCOMPONENT_MULTIROWLOCATIONCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MaxRowMember()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONCOMPONENT_MULTIROWLOCATIONCONTEXT_GET_MAXROWMEMBER_OFFSET))(this);
		}

		::System::Boolean get_IsDataMultiRow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONCOMPONENT_MULTIROWLOCATIONCONTEXT_GET_ISDATAMULTIROW_OFFSET))(this);
		}

		::System::Boolean get_IsActiveMultiRow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONCOMPONENT_MULTIROWLOCATIONCONTEXT_GET_ISACTIVEMULTIROW_OFFSET))(this);
		}

		::System::Int32 GetFormationLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONCOMPONENT_MULTIROWLOCATIONCONTEXT_GETFORMATIONLENGTH_OFFSET))(this);
		}

		::RPG::GameCore::TeamFormationComponent_RowFormationLocationData* GetFormationByIndex(::System::Int32 index)
		{
			return ((::RPG::GameCore::TeamFormationComponent_RowFormationLocationData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONCOMPONENT_MULTIROWLOCATIONCONTEXT_GETFORMATIONBYINDEX_OFFSET))(this, index);
		}

		::System::Int32 GetIndexByFormation(::Class_2_BF927CBEA754F6BE* defaultFormationCenter)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_BF927CBEA754F6BE*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONCOMPONENT_MULTIROWLOCATIONCONTEXT_GETINDEXBYFORMATION_OFFSET))(this, defaultFormationCenter);
		}

		::System::Void Prepare(::System::Collections::Generic::List_1<::Class_2_BF927CBEA754F6BE*>* targetList, ::RPG::MQuaternion quaternion, ::RPG::GameCore::DarkTeamFightFormationConfig* formationConfig)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_BF927CBEA754F6BE*>*, ::RPG::MQuaternion, ::RPG::GameCore::DarkTeamFightFormationConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONCOMPONENT_MULTIROWLOCATIONCONTEXT_PREPARE_OFFSET))(this, targetList, quaternion, formationConfig);
		}

		::System::Boolean _InsertRowScopeToTargetBounary(::System::Collections::Generic::List_1<::RPG::GameCore::TeamFormationComponent_RowFormationLocationData*>* target, ::RPG::GameCore::TeamFormationComponent_RowFormationRefreshGroup* row, ::System::Tuple_2<::System::Int32, ::System::Int32>* rowScopeIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::TeamFormationComponent_RowFormationLocationData*>*, ::RPG::GameCore::TeamFormationComponent_RowFormationRefreshGroup*, ::System::Tuple_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONCOMPONENT_MULTIROWLOCATIONCONTEXT__INSERTROWSCOPETOTARGETBOUNARY_OFFSET))(this, target, row, rowScopeIndex);
		}

		::System::Void _PostInit(::System::Int32 rowIndex, ::RPG::GameCore::DarkTeamFightFormationConfig* darkConfig)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::DarkTeamFightFormationConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONCOMPONENT_MULTIROWLOCATIONCONTEXT__POSTINIT_OFFSET))(this, rowIndex, darkConfig);
		}
	};
}
