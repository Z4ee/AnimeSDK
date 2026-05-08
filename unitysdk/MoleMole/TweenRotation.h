#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Tween_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_TWEENROTATION_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x11E07E30)
#define MOLEMOLE_TWEENROTATION_METHOD_7_CCD232FEDFF62067_OFFSET UNITYSDK_OFFSET(0x11E07EE0)
#define MOLEMOLE_TWEENROTATION_METHOD_7_D3E17EE162EAD52F_OFFSET UNITYSDK_OFFSET(0x11E08020)
#define MOLEMOLE_TWEENROTATION_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x11E07E50)
#define MOLEMOLE_TWEENROTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x11E08120)
#define MOLEMOLE_TWEENROTATION___BASE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x11E08130)

namespace MoleMole
{
	inline static constexpr unsigned int TweenRotation_TypeDefinitionIndex = 64772;

	class TweenRotation : public ::MoleMole::Tween_1<::UnityEngine::Vector3>
	{
	public:
		::System::Boolean isLocal; // 0xA0
		::UnityEngine::Vector3 Field_7_1; // 0xA4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENROTATION__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_value()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENROTATION_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENROTATION_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Void Method_7_D3E17EE162EAD52F(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENROTATION_METHOD_7_D3E17EE162EAD52F_OFFSET))(this, a1, a2);
		}

		::System::Void __base_set_value(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENROTATION___BASE_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Void Method_7_CCD232FEDFF62067(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENROTATION_METHOD_7_CCD232FEDFF62067_OFFSET))(this, a1);
		}
	};
}
