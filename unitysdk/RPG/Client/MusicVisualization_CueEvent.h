#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MusicVisualization_CueEvent_CueEventControlType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MusicVisualization_CueEvent_CueEventNameLookUp; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MUSICVISUALIZATION_CUEEVENT_METHOD_1_07CF4C96952991E8_OFFSET UNITYSDK_OFFSET(0xC23B4D0)
#define RPG_CLIENT_MUSICVISUALIZATION_CUEEVENT_METHOD_1_6DF8E2E2BDB874D5_OFFSET UNITYSDK_OFFSET(0xC23B1C0)
#define RPG_CLIENT_MUSICVISUALIZATION_CUEEVENT_METHOD_1_A12A2C1EE464D54F_OFFSET UNITYSDK_OFFSET(0xC23B260)
#define RPG_CLIENT_MUSICVISUALIZATION_CUEEVENT_METHOD_1_A15EF7939F75CCED_OFFSET UNITYSDK_OFFSET(0xC23B160)
#define RPG_CLIENT_MUSICVISUALIZATION_CUEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xC23B780)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicVisualization_CueEvent_TypeDefinitionIndex = 66219;

	class MusicVisualization_CueEvent : public ::System::Object
	{
	public:
		::RPG::Client::MusicVisualization_CueEvent_CueEventControlType CueEventControl; // 0x10
		::System::String* AnimatorIntegerParamName; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::MusicVisualization_CueEvent_CueEventNameLookUp*>* CueEventNameLookUps; // 0x20
		::UnityEngine::GameObject* _OwnerGO; // 0x28
		::UnityEngine::Animator* _Animator; // 0x30
		::System::Int32 _TargetStateID; // 0x38
		::System::Int32 _TargetElementID; // 0x3C
		::System::Int32 _AnimatorStateID; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_CUEEVENT__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_A15EF7939F75CCED(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_CUEEVENT_METHOD_1_A15EF7939F75CCED_OFFSET))(this, a1);
		}

		::System::Void Method_1_6DF8E2E2BDB874D5(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_CUEEVENT_METHOD_1_6DF8E2E2BDB874D5_OFFSET))(this, a1);
		}

		::System::Void Method_1_07CF4C96952991E8(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_CUEEVENT_METHOD_1_07CF4C96952991E8_OFFSET))(this, a1);
		}

		::System::Void Method_1_A12A2C1EE464D54F(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_CUEEVENT_METHOD_1_A12A2C1EE464D54F_OFFSET))(this, a1);
		}
	};
}
