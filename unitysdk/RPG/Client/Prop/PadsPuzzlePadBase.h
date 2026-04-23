#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PadType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client::Prop { class PadsPuzzleBoard; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_PROP_PADSPUZZLEPADBASE_DEACTIVATEINDELAY_OFFSET UNITYSDK_OFFSET(0xAE8AD40)
#define RPG_CLIENT_PROP_PADSPUZZLEPADBASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAE8C3B0)
#define RPG_CLIENT_PROP_PADSPUZZLEPADBASE_GET_HASSTEPPED_OFFSET UNITYSDK_OFFSET(0xAE8C740)
#define RPG_CLIENT_PROP_PADSPUZZLEPADBASE_INITSTATE_OFFSET UNITYSDK_OFFSET(0xAE8BC40)
#define RPG_CLIENT_PROP_PADSPUZZLEPADBASE_METHOD_5_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0xAE8C4B0)
#define RPG_CLIENT_PROP_PADSPUZZLEPADBASE_PUZZLEENTER_OFFSET UNITYSDK_OFFSET(0xAE8B160)
#define RPG_CLIENT_PROP_PADSPUZZLEPADBASE_PUZZLERESET_OFFSET UNITYSDK_OFFSET(0xAE8BE10)
#define RPG_CLIENT_PROP_PADSPUZZLEPADBASE_PUZZLESUCCEED_OFFSET UNITYSDK_OFFSET(0xAE8BD20)
#define RPG_CLIENT_PROP_PADSPUZZLEPADBASE_SET_HASSTEPPED_OFFSET UNITYSDK_OFFSET(0xAE8C750)
#define RPG_CLIENT_PROP_PADSPUZZLEPADBASE_TRIGGERSOUND_OFFSET UNITYSDK_OFFSET(0xAE8C530)
#define RPG_CLIENT_PROP_PADSPUZZLEPADBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xAE8BC20)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PadsPuzzlePadBase_TypeDefinitionIndex = 72253;

	class PadsPuzzlePadBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* gameObjectToHide; // 0x18
		::System::Boolean _hasStepped_k__BackingField; // 0x20
		::RPG::Client::Prop::PadsPuzzleBoard* board; // 0x28
		::RPG::Client::Prop::PadType type; // 0x30
		::UnityEngine::Animator* Field_5_4; // 0x38
		::UnityEngine::Material* Field_5_5; // 0x40
		::UnityEngine::Coroutine* Field_5_6; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEPADBASE__CTOR_OFFSET))(this);
		}

		::System::Void InitState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEPADBASE_INITSTATE_OFFSET))(this);
		}

		::System::Void PuzzleEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEPADBASE_PUZZLEENTER_OFFSET))(this);
		}

		::System::Void PuzzleSucceed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEPADBASE_PUZZLESUCCEED_OFFSET))(this);
		}

		::System::Void PuzzleReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEPADBASE_PUZZLERESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEPADBASE_DISPOSE_OFFSET))(this);
		}

		::System::Void DeactivateInDelay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEPADBASE_DEACTIVATEINDELAY_OFFSET))(this);
		}

		::System::Void TriggerSound(::System::String* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEPADBASE_TRIGGERSOUND_OFFSET))(this, a1, a2);
		}

		::System::Collections::IEnumerator* Method_5_627C7524E98F4AC5()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEPADBASE_METHOD_5_627C7524E98F4AC5_OFFSET))(this);
		}

		::System::Boolean get_hasStepped()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEPADBASE_GET_HASSTEPPED_OFFSET))(this);
		}

		::System::Void set_hasStepped(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEPADBASE_SET_HASSTEPPED_OFFSET))(this, value);
		}
	};
}
