#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FormatString.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_185;
class Class_0_16E4307DCC419505_198;
class Class_0_16E4307DCC419505_255;
class Class_0_16E4307DCC419505_415;
class Class_0_16E4307DCC419505_417;
class Class_0_16E4307DCC419505_550;
class Class_0_16E4307DCC419505_551;
class Class_1_5469D397DAE62876;
class Class_1_93EC936D6B573DA2;
class Class_1_AC66714FF5876767;
class Class_1_B3122B2B681EA91E;
class Class_1_C46C370A60878B8C;
class Class_2_71ECD705C8627A9D;
class Class_2_97FEB4C9F3C63840;
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
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_TASKCONTEXT_CLEAR_OFFSET UNITYSDK_OFFSET(0x119CAB40)
#define RPG_GAMECORE_TASKCONTEXT_CLONEFROMSTANDALONEPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x119CAA90)
#define RPG_GAMECORE_TASKCONTEXT_CLONEWITHTASKTEMPLATE_OFFSET UNITYSDK_OFFSET(0x119CA8D0)
#define RPG_GAMECORE_TASKCONTEXT_CLONE_OFFSET UNITYSDK_OFFSET(0x119CA7A0)
#define RPG_GAMECORE_TASKCONTEXT_COPYTO_OFFSET UNITYSDK_OFFSET(0x119CA530)
#define RPG_GAMECORE_TASKCONTEXT_CREATECHILDCONTEXT_OFFSET UNITYSDK_OFFSET(0x119CAC90)
#define RPG_GAMECORE_TASKCONTEXT_EVALUATEORDEFAULT_1_OFFSET UNITYSDK_OFFSET(0x119CE4E0)
#define RPG_GAMECORE_TASKCONTEXT_EVALUATEORDEFAULT_2_OFFSET UNITYSDK_OFFSET(0x119CE540)
#define RPG_GAMECORE_TASKCONTEXT_EVALUATEORDEFAULT_3_OFFSET UNITYSDK_OFFSET(0x119CE5B0)
#define RPG_GAMECORE_TASKCONTEXT_EVALUATEORDEFAULT_OFFSET UNITYSDK_OFFSET(0x119CE480)
#define RPG_GAMECORE_TASKCONTEXT_EVALUATESINGLETARGET_OFFSET UNITYSDK_OFFSET(0x119B17F0)
#define RPG_GAMECORE_TASKCONTEXT_EVALUATETARGET_1_OFFSET UNITYSDK_OFFSET(0x119CDCB0)
#define RPG_GAMECORE_TASKCONTEXT_EVALUATETARGET_OFFSET UNITYSDK_OFFSET(0x119CD610)
#define RPG_GAMECORE_TASKCONTEXT_EVALUATE_1_OFFSET UNITYSDK_OFFSET(0x119CC560)
#define RPG_GAMECORE_TASKCONTEXT_EVALUATE_2_OFFSET UNITYSDK_OFFSET(0x119CCB40)
#define RPG_GAMECORE_TASKCONTEXT_EVALUATE_3_OFFSET UNITYSDK_OFFSET(0x119CCCA0)
#define RPG_GAMECORE_TASKCONTEXT_EVALUATE_4_OFFSET UNITYSDK_OFFSET(0x119CCE40)
#define RPG_GAMECORE_TASKCONTEXT_EVALUATE_5_OFFSET UNITYSDK_OFFSET(0x119CCFA0)
#define RPG_GAMECORE_TASKCONTEXT_EVALUATE_6_OFFSET UNITYSDK_OFFSET(0x119CD0F0)
#define RPG_GAMECORE_TASKCONTEXT_EVALUATE_OFFSET UNITYSDK_OFFSET(0x119CBBC0)
#define RPG_GAMECORE_TASKCONTEXT_GETBELONGEDCONFIGNAME_OFFSET UNITYSDK_OFFSET(0x119CB950)
#define RPG_GAMECORE_TASKCONTEXT_GETOWNERCUSTOMDATA_OFFSET UNITYSDK_OFFSET(0x119CC300)
#define RPG_GAMECORE_TASKCONTEXT_GET_CASTERENTITY_OFFSET UNITYSDK_OFFSET(0x119CAEE0)
#define RPG_GAMECORE_TASKCONTEXT_GET_CURRENTPARAMDATA_OFFSET UNITYSDK_OFFSET(0x119CB7F0)
#define RPG_GAMECORE_TASKCONTEXT_GET_GAMEWORLD_OFFSET UNITYSDK_OFFSET(0x119CAED0)
#define RPG_GAMECORE_TASKCONTEXT_GET_ISSUBLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0x119CDE30)
#define RPG_GAMECORE_TASKCONTEXT_GET_LITTLEGAMELEVELGRAPHENTITY_OFFSET UNITYSDK_OFFSET(0x119CE440)
#define RPG_GAMECORE_TASKCONTEXT_GET_LITTLEGAMESTATETREEENTITY_OFFSET UNITYSDK_OFFSET(0x119CE890)
#define RPG_GAMECORE_TASKCONTEXT_GET_OWNERABILITYINSTANCE_OFFSET UNITYSDK_OFFSET(0x119CB240)
#define RPG_GAMECORE_TASKCONTEXT_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x119CAE60)
#define RPG_GAMECORE_TASKCONTEXT_GET_OWNERGROUPENTITY_OFFSET UNITYSDK_OFFSET(0x119CDE90)
#define RPG_GAMECORE_TASKCONTEXT_GET_PARAMREGISTER_OFFSET UNITYSDK_OFFSET(0x119CB790)
#define RPG_GAMECORE_TASKCONTEXT_GET_SAFESOURCEENTITY_OFFSET UNITYSDK_OFFSET(0x119CB1B0)
#define RPG_GAMECORE_TASKCONTEXT_GET_SOURCEENTITY_OFFSET UNITYSDK_OFFSET(0x119CB0D0)
#define RPG_GAMECORE_TASKCONTEXT_GET_TASKACTIONTARGET_OFFSET UNITYSDK_OFFSET(0x119CB0B0)
#define RPG_GAMECORE_TASKCONTEXT_ISBELONGTOPERFORMANCEREPLAYENV_OFFSET UNITYSDK_OFFSET(0x119CB260)
#define RPG_GAMECORE_TASKCONTEXT_ISBELONGTOSTANDALONEPERFORMANCEENV_OFFSET UNITYSDK_OFFSET(0x119CB400)
#define RPG_GAMECORE_TASKCONTEXT_ISPERFORMANCELEVELGRAPH_OFFSET UNITYSDK_OFFSET(0x119CB5E0)
#define RPG_GAMECORE_TASKCONTEXT_MAPRESPATH_OFFSET UNITYSDK_OFFSET(0x119CE610)
#define RPG_GAMECORE_TASKCONTEXT_RPG_GAMECORE_IALIASEVALUATOR_EVALUATEALIAS_OFFSET UNITYSDK_OFFSET(0x119CDDB0)
#define RPG_GAMECORE_TASKCONTEXT_RPG_GAMECORE_IDYNAMICVALUEPROVIDER_EVALUATE_OFFSET UNITYSDK_OFFSET(0x119CDD40)
#define RPG_GAMECORE_TASKCONTEXT_SET_OWNERABILITYINSTANCE_OFFSET UNITYSDK_OFFSET(0x119CB250)
#define RPG_GAMECORE_TASKCONTEXT_SET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x119CAE70)
#define RPG_GAMECORE_TASKCONTEXT_SET_TASKACTIONTARGET_OFFSET UNITYSDK_OFFSET(0x119CB0C0)
#define RPG_GAMECORE_TASKCONTEXT_SHOULDBLOCKTASKBYPERFORMANCEREPLAY_OFFSET UNITYSDK_OFFSET(0x119CB570)
#define RPG_GAMECORE_TASKCONTEXT_SHOULDBLOCKTASKBYSTANDALONEPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x119CB720)
#define RPG_GAMECORE_TASKCONTEXT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x119CB8D0)
#define RPG_GAMECORE_TASKCONTEXT_TRYEVALUATE_1_OFFSET UNITYSDK_OFFSET(0x119CBD30)
#define RPG_GAMECORE_TASKCONTEXT_TRYEVALUATE_OFFSET UNITYSDK_OFFSET(0x119CBCD0)
#define RPG_GAMECORE_TASKCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x119AFA20)
#define RPG_GAMECORE_TASKCONTEXT__GETSELFINSTANCE_OFFSET UNITYSDK_OFFSET(0x119CADA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TaskContext_TypeDefinitionIndex = 54984;

	class TaskContext : public ::System::Object
	{
	public:
		::RPG::GameCore::LevelGraph* OwnerGraph; // 0x10
		::Class_2_E2910CE9CBBA0DE5* RootState; // 0x18
		::Class_0_16E4307DCC419505_255* LittleGameAbilityContext; // 0x20
		::Class_1_93EC936D6B573DA2* ExtraParamStack; // 0x28
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::JsonConfig*, ::Class_0_16E4307DCC419505_550*>* _EvaluatorInstanceDict; // 0x30
		::Class_0_16E4307DCC419505_417* SourceAbilityInst; // 0x38
		::Class_0_16E4307DCC419505_415* OwnerModifierInstance; // 0x40
		::RPG::GameCore::GameEntity* _TaskActionTarget_k__BackingField; // 0x48
		::Class_0_16E4307DCC419505_417* _OwnerAbilityInstance_k__BackingField; // 0x50
		::Class_1_B3122B2B681EA91E* AidDetail; // 0x58
		::Class_0_16E4307DCC419505_551* TaskTemplate; // 0x60
		::Entitas::IEntity* LittleGameEntity; // 0x68
		::Class_1_AC66714FF5876767* Knowledge; // 0x70
		::RPG::GameCore::GameEntity* _OwnerEntity; // 0x78
		::RPG::GameCore::GameEntity* Instigator; // 0x80
		::Class_2_E2910CE9CBBA0DE5* AIRoot; // 0x88
		::RPG::GameCore::GameWorld* _GameWorld; // 0x90
		::RPG::MVector3 StimulusPos; // 0x98
		::System::Boolean IsInAnimEvent; // 0xA4
		::System::Boolean StandalonePerformanceController; // 0xA5
		::System::Boolean FinishImmediatelyInPerformanceFlag; // 0xA6
		::System::Boolean PerformanceReplayController; // 0xA7

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void CopyTo(::RPG::GameCore::TaskContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_COPYTO_OFFSET))(this, a1);
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

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_CLEAR_OFFSET))(this);
		}

		::Class_2_97FEB4C9F3C63840* CreateChildContext()
		{
			return ((::Class_2_97FEB4C9F3C63840*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_CREATECHILDCONTEXT_OFFSET))(this);
		}

		::RPG::GameCore::TaskContext* _GetSelfInstance()
		{
			return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT__GETSELFINSTANCE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_OwnerEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_GET_OWNERENTITY_OFFSET))(this);
		}

		::System::Void set_OwnerEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_SET_OWNERENTITY_OFFSET))(this, a1);
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

		::System::Void set_TaskActionTarget(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_SET_TASKACTIONTARGET_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_SourceEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_GET_SOURCEENTITY_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_SafeSourceEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_GET_SAFESOURCEENTITY_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_417* get_OwnerAbilityInstance()
		{
			return ((::Class_0_16E4307DCC419505_417*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_GET_OWNERABILITYINSTANCE_OFFSET))(this);
		}

		::System::Void set_OwnerAbilityInstance(::Class_0_16E4307DCC419505_417* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_417*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_SET_OWNERABILITYINSTANCE_OFFSET))(this, a1);
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

		::Class_1_C46C370A60878B8C* get_ParamRegister()
		{
			return ((::Class_1_C46C370A60878B8C*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_GET_PARAMREGISTER_OFFSET))(this);
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

		::RPG::GameCore::FixPoint Evaluate(::RPG::GameCore::DynamicFloat* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_EVALUATE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint TryEvaluate(::RPG::GameCore::DynamicFloat* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_TRYEVALUATE_OFFSET))(this, a1);
		}

		::System::String* TryEvaluate_1(::RPG::GameCore::DynamicString* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::DynamicString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_TRYEVALUATE_1_OFFSET))(this, a1);
		}

		::System::String* Evaluate_1(::RPG::GameCore::DynamicString* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::DynamicString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_EVALUATE_1_OFFSET))(this, a1);
		}

		::System::Boolean Evaluate_2(::RPG::GameCore::DynamicBool* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::DynamicBool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_EVALUATE_2_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::String*>* Evaluate_3(::RPG::GameCore::DynamicStringList* a1)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::RPG::GameCore::DynamicStringList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_EVALUATE_3_OFFSET))(this, a1);
		}

		::RPG::GameCore::DynamicJsonConfig* Evaluate_4(::RPG::GameCore::DynamicJson* a1)
		{
			return ((::RPG::GameCore::DynamicJsonConfig*(*)(::PVOID, ::RPG::GameCore::DynamicJson*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_EVALUATE_4_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::DynamicJsonConfig*>* Evaluate_5(::RPG::GameCore::DynamicJsonList* a1)
		{
			return ((::Il2CppArray<::RPG::GameCore::DynamicJsonConfig*>*(*)(::PVOID, ::RPG::GameCore::DynamicJsonList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_EVALUATE_5_OFFSET))(this, a1);
		}

		::System::String* Evaluate_6(::RPG::GameCore::FormatString a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::FormatString))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_EVALUATE_6_OFFSET))(this, a1);
		}

		::System::Void EvaluateTarget(::RPG::GameCore::TargetEvaluator* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::RPG::GameCore::AliveStateMask a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetEvaluator*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::AliveStateMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_EVALUATETARGET_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EvaluateTarget_1(::RPG::GameCore::TargetEvaluator* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetEvaluator*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_EVALUATETARGET_1_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::GameEntity* EvaluateSingleTarget(::RPG::GameCore::TargetEvaluator* a1, ::RPG::GameCore::AliveStateMask a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::TargetEvaluator*, ::RPG::GameCore::AliveStateMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_EVALUATESINGLETARGET_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint RPG_GameCore_IDynamicValueProvider_Evaluate(::RPG::GameCore::StringHash a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_RPG_GAMECORE_IDYNAMICVALUEPROVIDER_EVALUATE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint RPG_GameCore_IAliasEvaluator_EvaluateAlias(::RPG::GameCore::TaskConfig* a1, ::RPG::GameCore::StringHash a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::TaskConfig*, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_RPG_GAMECORE_IALIASEVALUATOR_EVALUATEALIAS_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsSubLevelGraph()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_GET_ISSUBLEVELGRAPH_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_OwnerGroupEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_GET_OWNERGROUPENTITY_OFFSET))(this);
		}

		::Class_2_71ECD705C8627A9D* GetOwnerCustomData()
		{
			return ((::Class_2_71ECD705C8627A9D*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_GETOWNERCUSTOMDATA_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint EvaluateOrDefault(::RPG::GameCore::DynamicFloat* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_EVALUATEORDEFAULT_OFFSET))(this, a1);
		}

		::System::String* EvaluateOrDefault_1(::RPG::GameCore::DynamicString* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::DynamicString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_EVALUATEORDEFAULT_1_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::String*>* EvaluateOrDefault_2(::RPG::GameCore::DynamicStringList* a1)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::RPG::GameCore::DynamicStringList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_EVALUATEORDEFAULT_2_OFFSET))(this, a1);
		}

		::System::Boolean EvaluateOrDefault_3(::RPG::GameCore::DynamicBool* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::DynamicBool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_EVALUATEORDEFAULT_3_OFFSET))(this, a1);
		}

		::System::String* MapResPath(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_MAPRESPATH_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_198* get_LittleGameStateTreeEntity()
		{
			return ((::Class_0_16E4307DCC419505_198*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_GET_LITTLEGAMESTATETREEENTITY_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_185* get_LittleGameLevelGraphEntity()
		{
			return ((::Class_0_16E4307DCC419505_185*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_GET_LITTLEGAMELEVELGRAPHENTITY_OFFSET))(this);
		}
	};
}
