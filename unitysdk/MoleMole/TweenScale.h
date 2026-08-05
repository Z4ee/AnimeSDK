#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Tween_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_TWEENSCALE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x19745DC0)
#define MOLEMOLE_TWEENSCALE_METHOD_7_08B7287B59325288_OFFSET UNITYSDK_OFFSET(0x19745F60)
#define MOLEMOLE_TWEENSCALE_METHOD_7_626C719A884DEF9A_OFFSET UNITYSDK_OFFSET(0x19745ED0)
#define MOLEMOLE_TWEENSCALE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x19745DE0)
#define MOLEMOLE_TWEENSCALE__CTOR_OFFSET UNITYSDK_OFFSET(0x19746010)
#define MOLEMOLE_TWEENSCALE___BASE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x19746030)

namespace MoleMole
{
	inline static constexpr unsigned int TweenScale_TypeDefinitionIndex = 87988;

	class TweenScale : public ::MoleMole::Tween_1<::UnityEngine::Vector3>
	{
	public:
		::UnityEngine::Vector3 Field_7_0; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENSCALE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_value()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENSCALE_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENSCALE_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Void Method_7_08B7287B59325288(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENSCALE_METHOD_7_08B7287B59325288_OFFSET))(this, a1, a2);
		}

		::System::Void __base_set_value(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENSCALE___BASE_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Void Method_7_626C719A884DEF9A(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENSCALE_METHOD_7_626C719A884DEF9A_OFFSET))(this, a1);
		}
	};
}
