#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class UIController; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOUICONTROLLERGETTER_GET_CONTROLLER_OFFSET UNITYSDK_OFFSET(0xD87AC20)
#define RPG_CLIENT_MONOUICONTROLLERGETTER_GET_OFFSET UNITYSDK_OFFSET(0xD87AC90)
#define RPG_CLIENT_MONOUICONTROLLERGETTER_SETCONTROLLER_OFFSET UNITYSDK_OFFSET(0xD87AC40)
#define RPG_CLIENT_MONOUICONTROLLERGETTER_SET_CONTROLLER_OFFSET UNITYSDK_OFFSET(0xD87AC30)
#define RPG_CLIENT_MONOUICONTROLLERGETTER__CTOR_OFFSET UNITYSDK_OFFSET(0xD87AD80)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoUIControllerGetter_TypeDefinitionIndex = 71305;

	class MonoUIControllerGetter : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::UIController* _Controller_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUICONTROLLERGETTER__CTOR_OFFSET))(this);
		}

		::RPG::Client::UIController* get_Controller()
		{
			return ((::RPG::Client::UIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUICONTROLLERGETTER_GET_CONTROLLER_OFFSET))(this);
		}

		::System::Void set_Controller(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUICONTROLLERGETTER_SET_CONTROLLER_OFFSET))(this, a1);
		}

		::System::Void SetController(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUICONTROLLERGETTER_SETCONTROLLER_OFFSET))(this, a1);
		}

		static ::RPG::Client::MonoUIControllerGetter* Get(::UnityEngine::Transform* a1)
		{
			return ((::RPG::Client::MonoUIControllerGetter*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUICONTROLLERGETTER_GET_OFFSET))(a1);
		}
	};
}
