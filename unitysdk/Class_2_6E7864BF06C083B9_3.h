#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoEffectPluginInitStateByTargetNormalizedTime; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_6E7864BF06C083B9_3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x96CB550)
#define CLASS_2_6E7864BF06C083B9_3_METHOD_2_4F133B3E25E323A0_OFFSET UNITYSDK_OFFSET(0x96CB8C0)
#define CLASS_2_6E7864BF06C083B9_3_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0x96CB980)
#define CLASS_2_6E7864BF06C083B9_3_METHOD_2_94C81405F83348DF_OFFSET UNITYSDK_OFFSET(0x96CB5C0)
#define CLASS_2_6E7864BF06C083B9_3_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x96CB4E0)
#define CLASS_2_6E7864BF06C083B9_3_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x96CB930)
#define CLASS_2_6E7864BF06C083B9_3__CTOR_OFFSET UNITYSDK_OFFSET(0x96CB970)
#define CLASS_2_6E7864BF06C083B9_3___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x96CB9F0)

inline static constexpr unsigned int Class_2_6E7864BF06C083B9_3_TypeDefinitionIndex = 64415;

class Class_2_6E7864BF06C083B9_3 : public ::RPG::Client::BehaviorBase
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E7864BF06C083B9_3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_6E7864BF06C083B9_3_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E7864BF06C083B9_3_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_94C81405F83348DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E7864BF06C083B9_3_METHOD_2_94C81405F83348DF_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E7864BF06C083B9_3_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::RPG::Client::MonoEffectPluginInitStateByTargetNormalizedTime* Method_2_4F133B3E25E323A0()
	{
		return ((::RPG::Client::MonoEffectPluginInitStateByTargetNormalizedTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E7864BF06C083B9_3_METHOD_2_4F133B3E25E323A0_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_6E7864BF06C083B9_3_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E7864BF06C083B9_3___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
