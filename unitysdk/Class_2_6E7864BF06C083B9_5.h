#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoEffectPluginSyncTargetShaderProperty; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_6E7864BF06C083B9_5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8AC8550)
#define CLASS_2_6E7864BF06C083B9_5_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0x8AC8970)
#define CLASS_2_6E7864BF06C083B9_5_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x8AC84E0)
#define CLASS_2_6E7864BF06C083B9_5_METHOD_2_BA4065A535424C51_OFFSET UNITYSDK_OFFSET(0x8AC88F0)
#define CLASS_2_6E7864BF06C083B9_5_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x8AC85C0)
#define CLASS_2_6E7864BF06C083B9_5__CTOR_OFFSET UNITYSDK_OFFSET(0x8AC8960)
#define CLASS_2_6E7864BF06C083B9_5___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8AC89E0)

inline static constexpr unsigned int Class_2_6E7864BF06C083B9_5_TypeDefinitionIndex = 57181;

class Class_2_6E7864BF06C083B9_5 : public ::RPG::Client::BehaviorBase
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E7864BF06C083B9_5__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_6E7864BF06C083B9_5_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E7864BF06C083B9_5_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E7864BF06C083B9_5_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::RPG::Client::MonoEffectPluginSyncTargetShaderProperty* Method_2_BA4065A535424C51()
	{
		return ((::RPG::Client::MonoEffectPluginSyncTargetShaderProperty*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E7864BF06C083B9_5_METHOD_2_BA4065A535424C51_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_6E7864BF06C083B9_5_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E7864BF06C083B9_5___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
