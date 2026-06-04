#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ECurveMoveDirection.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class CurveEdgeConnectionTriggerSetting; }
namespace RPG::Client { class CurveEdgePointTriggerSetting; }
namespace RPG::Client { class CurveMovementHandler; }
namespace RPG::Client { class CurveObjectLogicTriggerSetting; }
namespace RPG::Client { class MonoCurveAudioManager; }
namespace RPG::Client { class MonoCurveMovementManager; }
namespace RPG::Client { class MonoCurveUndirectedGraph; }
namespace RPG::Client { class MonoTriggerRegion; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_MONOCURVETRIGGERMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0xC06EEE0)
#define RPG_CLIENT_MONOCURVETRIGGERMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC06BE80)
#define RPG_CLIENT_MONOCURVETRIGGERMANAGER_GET_DELTATIME_OFFSET UNITYSDK_OFFSET(0xC069C20)
#define RPG_CLIENT_MONOCURVETRIGGERMANAGER_GET_ENTITYREF_OFFSET UNITYSDK_OFFSET(0xC06F180)
#define RPG_CLIENT_MONOCURVETRIGGERMANAGER_INITENTITY_OFFSET UNITYSDK_OFFSET(0xC06ED40)
#define RPG_CLIENT_MONOCURVETRIGGERMANAGER_ISALLOWSHOWTRIGGEROPTIONS_OFFSET UNITYSDK_OFFSET(0xC06DB40)
#define RPG_CLIENT_MONOCURVETRIGGERMANAGER_METHOD_5_00A07D2BC9ED66AD_OFFSET UNITYSDK_OFFSET(0xC06D8E0)
#define RPG_CLIENT_MONOCURVETRIGGERMANAGER_METHOD_5_01E8C1AB66F98285_OFFSET UNITYSDK_OFFSET(0xC06DDE0)
#define RPG_CLIENT_MONOCURVETRIGGERMANAGER_METHOD_5_28860F33089AB3D6_OFFSET UNITYSDK_OFFSET(0xC06EBB0)
#define RPG_CLIENT_MONOCURVETRIGGERMANAGER_METHOD_5_33199F5C1EFD6BB6_OFFSET UNITYSDK_OFFSET(0xC06D680)
#define RPG_CLIENT_MONOCURVETRIGGERMANAGER_METHOD_5_6DD4C078961FBA33_OFFSET UNITYSDK_OFFSET(0xC06E8E0)
#define RPG_CLIENT_MONOCURVETRIGGERMANAGER_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC06E440)
#define RPG_CLIENT_MONOCURVETRIGGERMANAGER_METHOD_5_EBF44BC910948FDA_OFFSET UNITYSDK_OFFSET(0xC06E840)
#define RPG_CLIENT_MONOCURVETRIGGERMANAGER_ONMOVABLEOBJECTMOVEENDED_OFFSET UNITYSDK_OFFSET(0xC0695F0)
#define RPG_CLIENT_MONOCURVETRIGGERMANAGER_SETUPCURVEEDGECONNECTIONTRIGGER_OFFSET UNITYSDK_OFFSET(0xC06C3F0)
#define RPG_CLIENT_MONOCURVETRIGGERMANAGER_SETUPMOVABLEOBJECTLOGICTRIGGER_OFFSET UNITYSDK_OFFSET(0xC06D360)
#define RPG_CLIENT_MONOCURVETRIGGERMANAGER_SETUPMOVABLEOBJECTTRIGGER_OFFSET UNITYSDK_OFFSET(0xC069130)
#define RPG_CLIENT_MONOCURVETRIGGERMANAGER_SET_ENTITYREF_OFFSET UNITYSDK_OFFSET(0xC06F190)
#define RPG_CLIENT_MONOCURVETRIGGERMANAGER_START_OFFSET UNITYSDK_OFFSET(0xC06F0F0)
#define RPG_CLIENT_MONOCURVETRIGGERMANAGER_TRIGGERDETECTCOLLIDEREVENT_OFFSET UNITYSDK_OFFSET(0xC067540)
#define RPG_CLIENT_MONOCURVETRIGGERMANAGER_TRIGGERRELOADCURVEMOVEMENTEVENT_OFFSET UNITYSDK_OFFSET(0xC069720)
#define RPG_CLIENT_MONOCURVETRIGGERMANAGER_TRIGGERTOUCHMOVABLEOBJECT_OFFSET UNITYSDK_OFFSET(0xC067130)
#define RPG_CLIENT_MONOCURVETRIGGERMANAGER_UPDATELOGICTRIGGERSTATE_OFFSET UNITYSDK_OFFSET(0xC06E330)
#define RPG_CLIENT_MONOCURVETRIGGERMANAGER_UPDATELOGICTRIGGER_OFFSET UNITYSDK_OFFSET(0xC06DCC0)
#define RPG_CLIENT_MONOCURVETRIGGERMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0xC06E490)
#define RPG_CLIENT_MONOCURVETRIGGERMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xC06F1A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoCurveTriggerManager_TypeDefinitionIndex = 64138;

	class MonoCurveTriggerManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::UInt32 ConnectionPropID = 0x18A90; // 0x0
		::System::Single OptionProtectTime; // 0x18
		::System::String* LevelGraphConfigPath; // 0x20
		::System::String* DetectColliderCustomString; // 0x28
		::System::String* DetectPlayerColliderCustomString; // 0x30
		::System::String* DetectColliderBeforeInteractiveCustomString; // 0x38
		::System::String* ReloadCurveMovementCustomString; // 0x40
		::System::Boolean EnableCurveEdgePointTrigger; // 0x48
		::Il2CppArray<::RPG::Client::CurveEdgePointTriggerSetting*>* CurveEdgePointSettings; // 0x50
		::System::Boolean EnableCurveConnectionTrigger; // 0x58
		::Il2CppArray<::RPG::Client::CurveEdgeConnectionTriggerSetting*>* CurveConnectionTriggerSettings; // 0x60
		::System::Boolean EnableMovableObjectLogicTrigger; // 0x68
		::Il2CppArray<::RPG::Client::CurveObjectLogicTriggerSetting*>* MovableObjectStateLogicTriggerSettings; // 0x70
		::RPG::GameCore::GameEntity* _EntityRef_k__BackingField; // 0x78
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_5_14; // 0x80
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_5_15; // 0x88
		::System::Boolean Field_5_16; // 0x90
		::RPG::Client::MonoCurveUndirectedGraph* Field_5_17; // 0x98
		::RPG::Client::MonoCurveMovementManager* Field_5_18; // 0xA0
		::RPG::Client::MonoCurveAudioManager* Field_5_19; // 0xA8
		::System::Collections::Generic::List_1<::RPG::Client::MonoTriggerRegion*>* Field_5_20; // 0xB0
		::System::Single Field_5_21; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVETRIGGERMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVETRIGGERMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void TriggerDetectColliderEvent(::RPG::Client::CurveMovementHandler* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CurveMovementHandler*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVETRIGGERMANAGER_TRIGGERDETECTCOLLIDEREVENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void TriggerReloadCurveMovementEvent(::RPG::Client::CurveMovementHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CurveMovementHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVETRIGGERMANAGER_TRIGGERRELOADCURVEMOVEMENTEVENT_OFFSET))(this, a1);
		}

		::System::Void SetupCurveEdgeConnectionTrigger(::RPG::Client::CurveEdgeConnectionTriggerSetting* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CurveEdgeConnectionTriggerSetting*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVETRIGGERMANAGER_SETUPCURVEEDGECONNECTIONTRIGGER_OFFSET))(this, a1);
		}

		::System::Void SetupMovableObjectLogicTrigger(::RPG::Client::CurveObjectLogicTriggerSetting* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CurveObjectLogicTriggerSetting*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVETRIGGERMANAGER_SETUPMOVABLEOBJECTLOGICTRIGGER_OFFSET))(this, a1);
		}

		::System::Void SetupMovableObjectTrigger(::RPG::Client::CurveMovementHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CurveMovementHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVETRIGGERMANAGER_SETUPMOVABLEOBJECTTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean IsAllowShowTriggerOptions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVETRIGGERMANAGER_ISALLOWSHOWTRIGGEROPTIONS_OFFSET))(this);
		}

		::System::Void UpdateLogicTrigger(::RPG::Client::CurveMovementHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CurveMovementHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVETRIGGERMANAGER_UPDATELOGICTRIGGER_OFFSET))(this, a1);
		}

		::System::Void UpdateLogicTriggerState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVETRIGGERMANAGER_UPDATELOGICTRIGGERSTATE_OFFSET))(this);
		}

		::System::Void TriggerTouchMovableObject(::RPG::Client::CurveMovementHandler* a1, ::RPG::Client::ECurveMoveDirection a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CurveMovementHandler*, ::RPG::Client::ECurveMoveDirection))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVETRIGGERMANAGER_TRIGGERTOUCHMOVABLEOBJECT_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MonoTriggerRegion* Method_5_00A07D2BC9ED66AD(::UnityEngine::Collider* a1)
		{
			return ((::RPG::Client::MonoTriggerRegion*(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVETRIGGERMANAGER_METHOD_5_00A07D2BC9ED66AD_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* Method_5_33199F5C1EFD6BB6()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVETRIGGERMANAGER_METHOD_5_33199F5C1EFD6BB6_OFFSET))(this);
		}

		::System::Void Method_5_01E8C1AB66F98285(::RPG::Client::CurveMovementHandler* a1, ::RPG::Client::CurveObjectLogicTriggerSetting* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CurveMovementHandler*, ::RPG::Client::CurveObjectLogicTriggerSetting*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVETRIGGERMANAGER_METHOD_5_01E8C1AB66F98285_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVETRIGGERMANAGER_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_EBF44BC910948FDA(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVETRIGGERMANAGER_METHOD_5_EBF44BC910948FDA_OFFSET))(this, a1);
		}

		::System::Void Method_5_6DD4C078961FBA33(::RPG::GameCore::GameEntity* a1, ::RPG::Client::CurveEdgeConnectionTriggerSetting* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::CurveEdgeConnectionTriggerSetting*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVETRIGGERMANAGER_METHOD_5_6DD4C078961FBA33_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_28860F33089AB3D6(::RPG::Client::CurveMovementHandler* a1, ::RPG::Client::ECurveMoveDirection a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CurveMovementHandler*, ::RPG::Client::ECurveMoveDirection))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVETRIGGERMANAGER_METHOD_5_28860F33089AB3D6_OFFSET))(this, a1, a2);
		}

		::System::Void OnMovableObjectMoveEnded(::RPG::Client::CurveMovementHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CurveMovementHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVETRIGGERMANAGER_ONMOVABLEOBJECTMOVEENDED_OFFSET))(this, a1);
		}

		::System::Void InitEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVETRIGGERMANAGER_INITENTITY_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVETRIGGERMANAGER_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVETRIGGERMANAGER_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVETRIGGERMANAGER_UPDATE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_EntityRef()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVETRIGGERMANAGER_GET_ENTITYREF_OFFSET))(this);
		}

		::System::Void set_EntityRef(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVETRIGGERMANAGER_SET_ENTITYREF_OFFSET))(this, a1);
		}

		::System::Single get_DeltaTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVETRIGGERMANAGER_GET_DELTATIME_OFFSET))(this);
		}
	};
}
