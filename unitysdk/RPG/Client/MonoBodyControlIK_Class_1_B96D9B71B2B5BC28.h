#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_MONOBODYCONTROLIK_CLASS_1_B96D9B71B2B5BC28_METHOD_1_5E5FAAAE21B44BAE_OFFSET UNITYSDK_OFFSET(0xD732440)
#define RPG_CLIENT_MONOBODYCONTROLIK_CLASS_1_B96D9B71B2B5BC28_METHOD_1_847A0B25BEBE505C_OFFSET UNITYSDK_OFFSET(0xD732A10)
#define RPG_CLIENT_MONOBODYCONTROLIK_CLASS_1_B96D9B71B2B5BC28_METHOD_1_AAE74561848EA037_OFFSET UNITYSDK_OFFSET(0xD7325A0)
#define RPG_CLIENT_MONOBODYCONTROLIK_CLASS_1_B96D9B71B2B5BC28_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD732E30)
#define RPG_CLIENT_MONOBODYCONTROLIK_CLASS_1_B96D9B71B2B5BC28_METHOD_1_FEA241CA014F8043_OFFSET UNITYSDK_OFFSET(0xD7324D0)
#define RPG_CLIENT_MONOBODYCONTROLIK_CLASS_1_B96D9B71B2B5BC28__CTOR_OFFSET UNITYSDK_OFFSET(0xD732F50)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoBodyControlIK_Class_1_B96D9B71B2B5BC28_TypeDefinitionIndex = 68533;

	class MonoBodyControlIK_Class_1_B96D9B71B2B5BC28 : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* JGHAOCCGGPD; // 0x10
		::UnityEngine::Vector3 COBDKOEFAOC; // 0x18
		::System::Single MINCCILIJNN; // 0x24
		::UnityEngine::Quaternion HCNDNPHHMCO; // 0x28
		::System::Single IEHPFADHJFD; // 0x38
		::System::Single GAFENHHEBPG; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBODYCONTROLIK_CLASS_1_B96D9B71B2B5BC28__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_1_FEA241CA014F8043(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBODYCONTROLIK_CLASS_1_B96D9B71B2B5BC28_METHOD_1_FEA241CA014F8043_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion Method_1_AAE74561848EA037(::UnityEngine::Quaternion a1)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBODYCONTROLIK_CLASS_1_B96D9B71B2B5BC28_METHOD_1_AAE74561848EA037_OFFSET))(this, a1);
		}

		::System::Void Method_1_847A0B25BEBE505C(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::System::Single a3, ::UnityEngine::AnimationCurve* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBODYCONTROLIK_CLASS_1_B96D9B71B2B5BC28_METHOD_1_847A0B25BEBE505C_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBODYCONTROLIK_CLASS_1_B96D9B71B2B5BC28_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_1_5E5FAAAE21B44BAE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBODYCONTROLIK_CLASS_1_B96D9B71B2B5BC28_METHOD_1_5E5FAAAE21B44BAE_OFFSET))(this, a1);
		}
	};
}
