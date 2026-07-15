#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ECurveAudioType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerSound; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOCURVEAUDIOMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x180815C0)
#define RPG_CLIENT_MONOCURVEAUDIOMANAGER_POSTEVENT_OFFSET UNITYSDK_OFFSET(0x18081230)
#define RPG_CLIENT_MONOCURVEAUDIOMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x18081B40)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoCurveAudioManager_TypeDefinitionIndex = 65489;

	class MonoCurveAudioManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* idle; // 0x18
		::System::String* drivingStart; // 0x20
		::System::String* drivingLoop; // 0x28
		::System::String* drivingLoopStop; // 0x30
		::System::String* drivingStop; // 0x38
		::System::String* drivingArrived; // 0x40
		::System::String* triggerLoadLogic; // 0x48
		::System::String* triggerUnloadLogic; // 0x50
		::System::String* switchConnection; // 0x58
		::System::Collections::Generic::List_1<::System::String*>* Field_5_9; // 0x60
		::RPG::GameCore::TriggerSound* Field_5_10; // 0x68
		::RPG::GameCore::TaskContext* Field_5_11; // 0x70
		::Class_1_5F51D4049EA87B7B* Field_5_12; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEAUDIOMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void PostEvent(::RPG::Client::ECurveAudioType a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ECurveAudioType, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEAUDIOMANAGER_POSTEVENT_OFFSET))(this, a1, a2);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEAUDIOMANAGER_AWAKE_OFFSET))(this);
		}
	};
}
