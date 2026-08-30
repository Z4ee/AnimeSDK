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

#define RPG_CLIENT_MONOCURVEAUDIOMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x19E362D0)
#define RPG_CLIENT_MONOCURVEAUDIOMANAGER_POSTEVENT_OFFSET UNITYSDK_OFFSET(0x19E35F40)
#define RPG_CLIENT_MONOCURVEAUDIOMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x19E36850)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoCurveAudioManager_TypeDefinitionIndex = 68504;

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
		::System::Collections::Generic::List_1<::System::String*>* FHMBLOMADBP; // 0x60
		::RPG::GameCore::TriggerSound* PGDIMEPKKHA; // 0x68
		::RPG::GameCore::TaskContext* GOCDAALEDMH; // 0x70
		::Class_1_5F51D4049EA87B7B* NNJOKEDIHHF; // 0x78

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
