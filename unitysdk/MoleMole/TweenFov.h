#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Tween_1.h"

namespace UnityEngine { class Camera; }

#define MOLEMOLE_TWEENFOV_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x18D275F0)
#define MOLEMOLE_TWEENFOV_METHOD_7_DAD3126FCF30E9B2_OFFSET UNITYSDK_OFFSET(0x18D27680)
#define MOLEMOLE_TWEENFOV_METHOD_7_FE1A1A30B3CE9C46_OFFSET UNITYSDK_OFFSET(0x18D27870)
#define MOLEMOLE_TWEENFOV_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x18D27600)
#define MOLEMOLE_TWEENFOV__CTOR_OFFSET UNITYSDK_OFFSET(0x18D27960)
#define MOLEMOLE_TWEENFOV___BASE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x18D27980)

namespace MoleMole
{
	inline static constexpr unsigned int TweenFov_TypeDefinitionIndex = 81631;

	class TweenFov : public ::MoleMole::Tween_1<::System::Single>
	{
	public:
		::System::Single Field_7_0; // 0x88
		::UnityEngine::Camera* Field_7_1; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENFOV__CTOR_OFFSET))(this);
		}

		::System::Single get_value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENFOV_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENFOV_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Void Method_7_FE1A1A30B3CE9C46(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENFOV_METHOD_7_FE1A1A30B3CE9C46_OFFSET))(this, a1, a2);
		}

		::System::Void __base_set_value(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENFOV___BASE_SET_VALUE_OFFSET))(this, a1);
		}

		::UnityEngine::Camera* Method_7_DAD3126FCF30E9B2()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENFOV_METHOD_7_DAD3126FCF30E9B2_OFFSET))(this);
		}
	};
}
