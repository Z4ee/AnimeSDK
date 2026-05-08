#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Tween_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"

#define MOLEMOLE_TWEENQUATERNION_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x15E62100)
#define MOLEMOLE_TWEENQUATERNION_METHOD_7_CE8B195E1AAB80E3_OFFSET UNITYSDK_OFFSET(0x15E62180)
#define MOLEMOLE_TWEENQUATERNION_METHOD_7_D3E17EE162EAD52F_OFFSET UNITYSDK_OFFSET(0x15E62230)
#define MOLEMOLE_TWEENQUATERNION_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x15E62110)
#define MOLEMOLE_TWEENQUATERNION__CTOR_OFFSET UNITYSDK_OFFSET(0x15E62330)
#define MOLEMOLE_TWEENQUATERNION___BASE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x15E62340)

namespace MoleMole
{
	inline static constexpr unsigned int TweenQuaternion_TypeDefinitionIndex = 56085;

	class TweenQuaternion : public ::MoleMole::Tween_1<::UnityEngine::Quaternion>
	{
	public:
		::System::Boolean isLocal; // 0xA8
		::UnityEngine::Quaternion Field_7_1; // 0xAC
		::UnityEngine::Quaternion Field_7_2; // 0xBC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENQUATERNION__CTOR_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_value()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENQUATERNION_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENQUATERNION_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Void Method_7_D3E17EE162EAD52F(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENQUATERNION_METHOD_7_D3E17EE162EAD52F_OFFSET))(this, a1, a2);
		}

		::System::Void __base_set_value(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENQUATERNION___BASE_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Void Method_7_CE8B195E1AAB80E3(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENQUATERNION_METHOD_7_CE8B195E1AAB80E3_OFFSET))(this, a1);
		}
	};
}
