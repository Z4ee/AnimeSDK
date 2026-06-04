#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_EMOEYECTRL_EYELOOKATCURVEBLEND_GETBLEND_OFFSET UNITYSDK_OFFSET(0x13B010)
#define RPG_CLIENT_EMOEYECTRL_EYELOOKATCURVEBLEND_GET_INITIALIZED_OFFSET UNITYSDK_OFFSET(0x13AEB0)
#define RPG_CLIENT_EMOEYECTRL_EYELOOKATCURVEBLEND_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x13AED0)
#define RPG_CLIENT_EMOEYECTRL_EYELOOKATCURVEBLEND_SET_INITIALIZED_OFFSET UNITYSDK_OFFSET(0x13AEC0)
#define RPG_CLIENT_EMOEYECTRL_EYELOOKATCURVEBLEND_UNINITIALIZE_OFFSET UNITYSDK_OFFSET(0x13AFC0)
#define RPG_CLIENT_EMOEYECTRL_EYELOOKATCURVEBLEND_UPDATEBLEND_OFFSET UNITYSDK_OFFSET(0x13B090)

namespace RPG::Client
{
	inline static constexpr unsigned int EmoEyeCtrl_EyeLookAtCurveBlend_TypeDefinitionIndex = 66487;

	struct alignas(8) EmoEyeCtrl_EyeLookAtCurveBlend
	{
		::System::Single _timer; // 0x10
		::System::Single _duration; // 0x14
		::UnityEngine::AnimationCurve* _curve; // 0x18
		::UnityEngine::Vector3 _fromLeftValue; // 0x20
		::UnityEngine::Vector3 _fromRightValue; // 0x2C
		::System::Boolean _Initialized_k__BackingField; // 0x38

		::System::Boolean get_Initialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL_EYELOOKATCURVEBLEND_GET_INITIALIZED_OFFSET))(this);
		}

		::System::Void set_Initialized(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL_EYELOOKATCURVEBLEND_SET_INITIALIZED_OFFSET))(this, a1);
		}

		::System::Void Initialize(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::AnimationCurve* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL_EYELOOKATCURVEBLEND_INITIALIZE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Uninitialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL_EYELOOKATCURVEBLEND_UNINITIALIZE_OFFSET))(this);
		}

		::System::Single GetBlend()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL_EYELOOKATCURVEBLEND_GETBLEND_OFFSET))(this);
		}

		::System::Void UpdateBlend(::System::Single a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL_EYELOOKATCURVEBLEND_UPDATEBLEND_OFFSET))(this, a1, a2, a3);
		}
	};
}
