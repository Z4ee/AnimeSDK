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

#define RPG_CLIENT_PROP_PADSPUZZLEPADBASE_DEACTIVATEINDELAY_OFFSET UNITYSDK_OFFSET(0x16618CF0)
#define RPG_CLIENT_PROP_PADSPUZZLEPADBASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16619F70)
#define RPG_CLIENT_PROP_PADSPUZZLEPADBASE_GET_HASSTEPPED_OFFSET UNITYSDK_OFFSET(0x1661A300)
#define RPG_CLIENT_PROP_PADSPUZZLEPADBASE_INITSTATE_OFFSET UNITYSDK_OFFSET(0x16619B30)
#define RPG_CLIENT_PROP_PADSPUZZLEPADBASE_METHOD_5_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0x1661A070)
#define RPG_CLIENT_PROP_PADSPUZZLEPADBASE_PUZZLEENTER_OFFSET UNITYSDK_OFFSET(0x16619110)
#define RPG_CLIENT_PROP_PADSPUZZLEPADBASE_PUZZLERESET_OFFSET UNITYSDK_OFFSET(0x16619E10)
#define RPG_CLIENT_PROP_PADSPUZZLEPADBASE_PUZZLESUCCEED_OFFSET UNITYSDK_OFFSET(0x16619C70)
#define RPG_CLIENT_PROP_PADSPUZZLEPADBASE_SET_HASSTEPPED_OFFSET UNITYSDK_OFFSET(0x1661A310)
#define RPG_CLIENT_PROP_PADSPUZZLEPADBASE_TRIGGERSOUND_OFFSET UNITYSDK_OFFSET(0x1661A0F0)
#define RPG_CLIENT_PROP_PADSPUZZLEPADBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x16619960)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PadsPuzzlePadBase_TypeDefinitionIndex = 78285;

	class PadsPuzzlePadBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* gameObjectToHide; // 0x18
		::System::Boolean _hasStepped_k__BackingField; // 0x20
		::RPG::Client::Prop::PadsPuzzleBoard* board; // 0x28
		::RPG::Client::Prop::PadType type; // 0x30
		::UnityEngine::Animator* NAHOHKAHBPK; // 0x38
		::UnityEngine::Material* CEGKGKOKFOI; // 0x40
		::UnityEngine::Coroutine* OJCNPCJCJMA; // 0x48

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

		::System::Void set_hasStepped(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEPADBASE_SET_HASSTEPPED_OFFSET))(this, a1);
		}
	};
}
