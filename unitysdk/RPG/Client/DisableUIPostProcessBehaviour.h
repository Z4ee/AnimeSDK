#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class DisableUIPostProcessBehaviour_Class_1_52555BE5DD3DE9E2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Graphic; }

#define RPG_CLIENT_DISABLEUIPOSTPROCESSBEHAVIOUR_CHANGEUIRENDERQUEUE_OFFSET UNITYSDK_OFFSET(0xB7F6F00)
#define RPG_CLIENT_DISABLEUIPOSTPROCESSBEHAVIOUR_METHOD_5_4C088D38C1084C90_OFFSET UNITYSDK_OFFSET(0xB7F7500)
#define RPG_CLIENT_DISABLEUIPOSTPROCESSBEHAVIOUR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB7F71C0)
#define RPG_CLIENT_DISABLEUIPOSTPROCESSBEHAVIOUR_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB7F6EA0)
#define RPG_CLIENT_DISABLEUIPOSTPROCESSBEHAVIOUR_REVERTUIRENDERQUEUE_OFFSET UNITYSDK_OFFSET(0xB7F7210)
#define RPG_CLIENT_DISABLEUIPOSTPROCESSBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xB7F77E0)

namespace RPG::Client
{
	inline static constexpr unsigned int DisableUIPostProcessBehaviour_TypeDefinitionIndex = 67968;

	class DisableUIPostProcessBehaviour : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::Dictionary_2<::UnityEngine::UI::Graphic*, ::RPG::Client::DisableUIPostProcessBehaviour_Class_1_52555BE5DD3DE9E2*>* Field_5_0; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::DisableUIPostProcessBehaviour_Class_1_52555BE5DD3DE9E2*>* Field_5_1; // 0x20
		::System::Boolean Field_5_2; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DISABLEUIPOSTPROCESSBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DISABLEUIPOSTPROCESSBEHAVIOUR_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DISABLEUIPOSTPROCESSBEHAVIOUR_ONDESTROY_OFFSET))(this);
		}

		::System::Void ChangeUIRenderQueue(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DISABLEUIPOSTPROCESSBEHAVIOUR_CHANGEUIRENDERQUEUE_OFFSET))(this, a1);
		}

		::System::Void RevertUIRenderQueue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DISABLEUIPOSTPROCESSBEHAVIOUR_REVERTUIRENDERQUEUE_OFFSET))(this);
		}

		::RPG::Client::DisableUIPostProcessBehaviour_Class_1_52555BE5DD3DE9E2* Method_5_4C088D38C1084C90(::UnityEngine::Material* a1)
		{
			return ((::RPG::Client::DisableUIPostProcessBehaviour_Class_1_52555BE5DD3DE9E2*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DISABLEUIPOSTPROCESSBEHAVIOUR_METHOD_5_4C088D38C1084C90_OFFSET))(this, a1);
		}
	};
}
