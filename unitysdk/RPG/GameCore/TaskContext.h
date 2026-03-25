#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FormatString.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_154;
class Class_0_16E4307DCC419505_167;
class Class_0_16E4307DCC419505_336;
class Class_0_16E4307DCC419505_338;
class Class_0_16E4307DCC419505_389;
class Class_0_16E4307DCC419505_390;
class Class_1_1D69C498887B554B;
class Class_1_5469D397DAE62876;
class Class_1_B3122B2B681EA91E;
class Class_1_BD800F5B29A08E1F;
class Class_2_671569319F3DFF18;
class Class_2_90C3FAB661E5C263;
class Class_2_E2910CE9CBBA0DE5;
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class DynamicBool; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicJson; }
namespace RPG::GameCore { class DynamicJsonConfig; }
namespace RPG::GameCore { class DynamicJsonList; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class DynamicStringList; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class JsonConfig; }
namespace RPG::GameCore { class LevelGraph; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_TASKCONTEXT_CLONEFROMSTANDALONEPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xAA55230)
#define RPG_GAMECORE_TASKCONTEXT_CLONEWITHTASKTEMPLATE_OFFSET UNITYSDK_OFFSET(0xAA55120)
#define RPG_GAMECORE_TASKCONTEXT_CLONE_OFFSET UNITYSDK_OFFSET(0xAA55050)
#define RPG_GAMECORE_TASKCONTEXT_CREATECHILDCONTEXT_OFFSET UNITYSDK_OFFSET(0xAA55280)
#define RPG_GAMECORE_TASKCONTEXT_EVALUATEORDEFAULT_1_OFFSET UNITYSDK_OFFSET(0xAA582D0)
#define RPG_GAMECORE_TASKCONTEXT_EVALUATEORDEFAULT_2_OFFSET UNITYSDK_OFFSET(0xAA58330)
#define RPG_GAMECORE_TASKCONTEXT_EVALUATEORDEFAULT_3_OFFSET UNITYSDK_OFFSET(0xAA583A0)
#define RPG_GAMECORE_TASKCONTEXT_EVALUATEORDEFAULT_OFFSET UNITYSDK_OFFSET(0xAA58270)
#define RPG_GAMECORE_TASKCONTEXT_EVALUATESINGLETARGET_OFFSET UNITYSDK_OFFSET(0xAA3E370)
#define RPG_GAMECORE_TASKCONTEXT_EVALUATETARGET_1_OFFSET UNITYSDK_OFFSET(0xAA57E90)
#define RPG_GAMECORE_TASKCONTEXT_EVALUATETARGET_OFFSET UNITYSDK_OFFSET(0xAA57820)
#define RPG_GAMECORE_TASKCONTEXT_EVALUATE_1_OFFSET UNITYSDK_OFFSET(0xAA567E0)
#define RPG_GAMECORE_TASKCONTEXT_EVALUATE_2_OFFSET UNITYSDK_OFFSET(0xAA56DC0)
#define RPG_GAMECORE_TASKCONTEXT_EVALUATE_3_OFFSET UNITYSDK_OFFSET(0xAA56F30)
#define RPG_GAMECORE_TASKCONTEXT_EVALUATE_4_OFFSET UNITYSDK_OFFSET(0xAA57120)
#define RPG_GAMECORE_TASKCONTEXT_EVALUATE_5_OFFSET UNITYSDK_OFFSET(0xAA572B0)
#define RPG_GAMECORE_TASKCONTEXT_EVALUATE_6_OFFSET UNITYSDK_OFFSET(0xAA57430)
#define RPG_GAMECORE_TASKCONTEXT_EVALUATE_OFFSET UNITYSDK_OFFSET(0xAA55E20)
#define RPG_GAMECORE_TASKCONTEXT_GETBELONGEDCONFIGNAME_OFFSET UNITYSDK_OFFSET(0xAA55D30)
#define RPG_GAMECORE_TASKCONTEXT_GETOWNERCUSTOMDATA_OFFSET UNITYSDK_OFFSET(0xAA56580)
#define RPG_GAMECORE_TASKCONTEXT_GET_CASTERENTITY_OFFSET UNITYSDK_OFFSET(0xAA554C0)
#define RPG_GAMECORE_TASKCONTEXT_GET_CURRENTPARAMDATA_OFFSET UNITYSDK_OFFSET(0xAA55BD0)
#define RPG_GAMECORE_TASKCONTEXT_GET_GAMEWORLD_OFFSET UNITYSDK_OFFSET(0xAA554B0)
#define RPG_GAMECORE_TASKCONTEXT_GET_ISSUBLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xAA57F90)
#define RPG_GAMECORE_TASKCONTEXT_GET_LITTLEGAMELEVELGRAPHENTITY_OFFSET UNITYSDK_OFFSET(0xAA58230)
#define RPG_GAMECORE_TASKCONTEXT_GET_LITTLEGAMESTATETREEENTITY_OFFSET UNITYSDK_OFFSET(0xAA58500)
#define RPG_GAMECORE_TASKCONTEXT_GET_OWNERABILITYINSTANCE_OFFSET UNITYSDK_OFFSET(0xAA55750)
#define RPG_GAMECORE_TASKCONTEXT_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0xAA55440)
#define RPG_GAMECORE_TASKCONTEXT_GET_OWNERGROUPENTITY_OFFSET UNITYSDK_OFFSET(0xAA57FD0)
#define RPG_GAMECORE_TASKCONTEXT_GET_PARAMREGISTER_OFFSET UNITYSDK_OFFSET(0xAA55B70)
#define RPG_GAMECORE_TASKCONTEXT_GET_SAFESOURCEENTITY_OFFSET UNITYSDK_OFFSET(0xAA55660)
#define RPG_GAMECORE_TASKCONTEXT_GET_SOURCEENTITY_OFFSET UNITYSDK_OFFSET(0xAA55570)
#define RPG_GAMECORE_TASKCONTEXT_GET_TASKACTIONTARGET_OFFSET UNITYSDK_OFFSET(0xAA55550)
#define RPG_GAMECORE_TASKCONTEXT_ISBELONGTOPERFORMANCEREPLAYENV_OFFSET UNITYSDK_OFFSET(0xAA55770)
#define RPG_GAMECORE_TASKCONTEXT_ISBELONGTOSTANDALONEPERFORMANCEENV_OFFSET UNITYSDK_OFFSET(0xAA55860)
#define RPG_GAMECORE_TASKCONTEXT_ISPERFORMANCELEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xAA55A20)
#define RPG_GAMECORE_TASKCONTEXT_MAPRESPATH_OFFSET UNITYSDK_OFFSET(0xAA58400)
#define RPG_GAMECORE_TASKCONTEXT_RPG_GAMECORE_IDYNAMICVALUEPROVIDER_EVALUATE_OFFSET UNITYSDK_OFFSET(0xAA57F20)
#define RPG_GAMECORE_TASKCONTEXT_SET_OWNERABILITYINSTANCE_OFFSET UNITYSDK_OFFSET(0xAA55760)
#define RPG_GAMECORE_TASKCONTEXT_SET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0xAA55450)
#define RPG_GAMECORE_TASKCONTEXT_SET_TASKACTIONTARGET_OFFSET UNITYSDK_OFFSET(0xAA55560)
#define RPG_GAMECORE_TASKCONTEXT_SHOULDBLOCKTASKBYPERFORMANCEREPLAY_OFFSET UNITYSDK_OFFSET(0xAA55950)
#define RPG_GAMECORE_TASKCONTEXT_SHOULDBLOCKTASKBYSTANDALONEPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xAA55AA0)
#define RPG_GAMECORE_TASKCONTEXT_TOSTRING_OFFSET UNITYSDK_OFFSET(0xAA55CB0)
#define RPG_GAMECORE_TASKCONTEXT_TRYEVALUATE_1_OFFSET UNITYSDK_OFFSET(0xAA55F90)
#define RPG_GAMECORE_TASKCONTEXT_TRYEVALUATE_OFFSET UNITYSDK_OFFSET(0xAA55F30)
#define RPG_GAMECORE_TASKCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xAA3BE00)
#define RPG_GAMECORE_TASKCONTEXT__GETSELFINSTANCE_OFFSET UNITYSDK_OFFSET(0xAA55380)
#define RPG_GAMECORE_TASKCONTEXT___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xAA58560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TaskContext_TypeDefinitionIndex = 43838;

	class TaskContext : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* _OwnerEntity; // 0x10
		::Class_2_E2910CE9CBBA0DE5* RootState; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::JsonConfig*, ::Class_0_16E4307DCC419505_389*>* _EvaluatorInstanceDict; // 0x20
		::Entitas::IEntity* LittleGameEntity; // 0x28
		::Class_0_16E4307DCC419505_336* OwnerModifierInstance; // 0x30
		::Class_1_BD800F5B29A08E1F* Knowledge; // 0x38
		::RPG::GameCore::GameWorld* _GameWorld; // 0x40
		::Class_1_B3122B2B681EA91E* AidDetail; // 0x48
		::RPG::GameCore::GameEntity* Instigator; // 0x50
		::RPG::GameCore::GameEntity* _TaskActionTarget_k__BackingField; // 0x58
		::Class_2_E2910CE9CBBA0DE5* AIRoot; // 0x60
		::Class_0_16E4307DCC419505_390* TaskTemplate; // 0x68
		::Class_0_16E4307DCC419505_338* _OwnerAbilityInstance_k__BackingField; // 0x70
		::RPG::GameCore::LevelGraph* OwnerGraph; // 0x78
		::Class_0_16E4307DCC419505_338* SourceAbilityInst; // 0x80
		::RPG::MVector3 StimulusPos; // 0x88
		::System::Boolean PerformanceReplayController; // 0x94
		::System::Boolean StandalonePerformanceController; // 0x95
		::System::Boolean IsInAnimEvent; // 0x96
		::System::Boolean FinishImmediatelyInPerformanceFlag; // 0x97

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::TaskContext* Clone()
		{
			return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_CLONE_OFFSET))(this);
		}

		::RPG::GameCore::TaskContext* CloneWithTaskTemplate()
		{
			return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_CLONEWITHTASKTEMPLATE_OFFSET))(this);
		}

		::RPG::GameCore::TaskContext* CloneFromStandalonePerformance()
		{
			return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_CLONEFROMSTANDALONEPERFORMANCE_OFFSET))(this);
		}

		::Class_2_671569319F3DFF18* CreateChildContext()
		{
			return ((::Class_2_671569319F3DFF18*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_CREATECHILDCONTEXT_OFFSET))(this);
		}

		::RPG::GameCore::TaskContext* _GetSelfInstance()
		{
			return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT__GETSELFINSTANCE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_OwnerEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_GET_OWNERENTITY_OFFSET))(this);
		}

		::System::Void set_OwnerEntity(::RPG::GameCore::GameEntity* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_SET_OWNERENTITY_OFFSET))(this, value);
		}

		::RPG::GameCore::GameWorld* get_GameWorld()
		{
			return ((::RPG::GameCore::GameWorld*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_GET_GAMEWORLD_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_CasterEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_GET_CASTERENTITY_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_TaskActionTarget()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_GET_TASKACTIONTARGET_OFFSET))(this);
		}

		::System::Void set_TaskActionTarget(::RPG::GameCore::GameEntity* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_SET_TASKACTIONTARGET_OFFSET))(this, value);
		}

		::RPG::GameCore::GameEntity* get_SourceEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_GET_SOURCEENTITY_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_SafeSourceEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_GET_SAFESOURCEENTITY_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_338* get_OwnerAbilityInstance()
		{
			return ((::Class_0_16E4307DCC419505_338*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_GET_OWNERABILITYINSTANCE_OFFSET))(this);
		}

		::System::Void set_OwnerAbilityInstance(::Class_0_16E4307DCC419505_338* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_338*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_SET_OWNERABILITYINSTANCE_OFFSET))(this, value);
		}

		::System::Boolean IsBelongToPerformanceReplayEnv()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_ISBELONGTOPERFORMANCEREPLAYENV_OFFSET))(this);
		}

		::System::Boolean IsBelongToStandalonePerformanceEnv()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_ISBELONGTOSTANDALONEPERFORMANCEENV_OFFSET))(this);
		}

		::System::Boolean ShouldBlockTaskByPerformanceReplay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_SHOULDBLOCKTASKBYPERFORMANCEREPLAY_OFFSET))(this);
		}

		::System::Boolean ShouldBlockTaskByStandalonePerformance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_SHOULDBLOCKTASKBYSTANDALONEPERFORMANCE_OFFSET))(this);
		}

		::System::Boolean IsPerformanceLevelGraph()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_ISPERFORMANCELEVELGRAPH_OFFSET))(this);
		}

		::Class_1_1D69C498887B554B* get_ParamRegister()
		{
			return ((::Class_1_1D69C498887B554B*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_GET_PARAMREGISTER_OFFSET))(this);
		}

		::Class_1_5469D397DAE62876* get_CurrentParamData()
		{
			return ((::Class_1_5469D397DAE62876*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_GET_CURRENTPARAMDATA_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_TOSTRING_OFFSET))(this);
		}

		::System::String* GetBelongedConfigName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_GETBELONGEDCONFIGNAME_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint Evaluate(::RPG::GameCore::DynamicFloat* pValue)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_EVALUATE_OFFSET))(this, pValue);
		}

		::RPG::GameCore::FixPoint TryEvaluate(::RPG::GameCore::DynamicFloat* value)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_TRYEVALUATE_OFFSET))(this, value);
		}

		::System::String* TryEvaluate_1(::RPG::GameCore::DynamicString* pValue)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::DynamicString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_TRYEVALUATE_1_OFFSET))(this, pValue);
		}

		::System::String* Evaluate_1(::RPG::GameCore::DynamicString* pValue)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::DynamicString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_EVALUATE_1_OFFSET))(this, pValue);
		}

		::System::Boolean Evaluate_2(::RPG::GameCore::DynamicBool* pValue)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::DynamicBool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_EVALUATE_2_OFFSET))(this, pValue);
		}

		::Il2CppArray<::System::String*>* Evaluate_3(::RPG::GameCore::DynamicStringList* pValue)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::RPG::GameCore::DynamicStringList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_EVALUATE_3_OFFSET))(this, pValue);
		}

		::RPG::GameCore::DynamicJsonConfig* Evaluate_4(::RPG::GameCore::DynamicJson* pValue)
		{
			return ((::RPG::GameCore::DynamicJsonConfig*(*)(::PVOID, ::RPG::GameCore::DynamicJson*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_EVALUATE_4_OFFSET))(this, pValue);
		}

		::Il2CppArray<::RPG::GameCore::DynamicJsonConfig*>* Evaluate_5(::RPG::GameCore::DynamicJsonList* pValue)
		{
			return ((::Il2CppArray<::RPG::GameCore::DynamicJsonConfig*>*(*)(::PVOID, ::RPG::GameCore::DynamicJsonList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_EVALUATE_5_OFFSET))(this, pValue);
		}

		::System::String* Evaluate_6(::RPG::GameCore::FormatString fmtString)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::FormatString))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_EVALUATE_6_OFFSET))(this, fmtString);
		}

		::System::Void EvaluateTarget(::RPG::GameCore::TargetEvaluator* pEvaluatorConfig, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* results, ::RPG::GameCore::AliveStateMask mask)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetEvaluator*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::AliveStateMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_EVALUATETARGET_OFFSET))(this, pEvaluatorConfig, results, mask);
		}

		::System::Void EvaluateTarget_1(::RPG::GameCore::TargetEvaluator* pEvaluatorConfig, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* results, ::System::Boolean bAliveOnly)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetEvaluator*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_EVALUATETARGET_1_OFFSET))(this, pEvaluatorConfig, results, bAliveOnly);
		}

		::RPG::GameCore::GameEntity* EvaluateSingleTarget(::RPG::GameCore::TargetEvaluator* pEvaluatorConfig, ::RPG::GameCore::AliveStateMask aliveStateMask)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::TargetEvaluator*, ::RPG::GameCore::AliveStateMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_EVALUATESINGLETARGET_OFFSET))(this, pEvaluatorConfig, aliveStateMask);
		}

		::RPG::GameCore::FixPoint RPG_GameCore_IDynamicValueProvider_Evaluate(::RPG::GameCore::StringHash nKeyHash)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_RPG_GAMECORE_IDYNAMICVALUEPROVIDER_EVALUATE_OFFSET))(this, nKeyHash);
		}

		::System::Boolean get_IsSubLevelGraph()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_GET_ISSUBLEVELGRAPH_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_OwnerGroupEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_GET_OWNERGROUPENTITY_OFFSET))(this);
		}

		::Class_2_90C3FAB661E5C263* GetOwnerCustomData()
		{
			return ((::Class_2_90C3FAB661E5C263*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_GETOWNERCUSTOMDATA_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint EvaluateOrDefault(::RPG::GameCore::DynamicFloat* value)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_EVALUATEORDEFAULT_OFFSET))(this, value);
		}

		::System::String* EvaluateOrDefault_1(::RPG::GameCore::DynamicString* value)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::DynamicString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_EVALUATEORDEFAULT_1_OFFSET))(this, value);
		}

		::Il2CppArray<::System::String*>* EvaluateOrDefault_2(::RPG::GameCore::DynamicStringList* value)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::RPG::GameCore::DynamicStringList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_EVALUATEORDEFAULT_2_OFFSET))(this, value);
		}

		::System::Boolean EvaluateOrDefault_3(::RPG::GameCore::DynamicBool* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::DynamicBool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_EVALUATEORDEFAULT_3_OFFSET))(this, value);
		}

		::System::String* MapResPath(::System::String* originPath)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_MAPRESPATH_OFFSET))(this, originPath);
		}

		::Class_0_16E4307DCC419505_167* get_LittleGameStateTreeEntity()
		{
			return ((::Class_0_16E4307DCC419505_167*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_GET_LITTLEGAMESTATETREEENTITY_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_154* get_LittleGameLevelGraphEntity()
		{
			return ((::Class_0_16E4307DCC419505_154*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_GET_LITTLEGAMELEVELGRAPHENTITY_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}
	};
}
