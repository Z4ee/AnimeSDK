#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoEffectPluginBase; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_6E7864BF06C083B9_6_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD36AAA0)
#define CLASS_2_6E7864BF06C083B9_6_METHOD_2_27310CD35353339B_OFFSET UNITYSDK_OFFSET(0xD36AB10)
#define CLASS_2_6E7864BF06C083B9_6_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0xD36AB70)
#define CLASS_2_6E7864BF06C083B9_6_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0xD36AA30)
#define CLASS_2_6E7864BF06C083B9_6__CTOR_OFFSET UNITYSDK_OFFSET(0xD36AB60)
#define CLASS_2_6E7864BF06C083B9_6___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD36ABE0)

inline static constexpr unsigned int Class_2_6E7864BF06C083B9_6_TypeDefinitionIndex = 64437;

class Class_2_6E7864BF06C083B9_6 : public ::RPG::Client::BehaviorBase
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E7864BF06C083B9_6__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_6E7864BF06C083B9_6_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E7864BF06C083B9_6_DISPOSE_OFFSET))(this);
	}

	::RPG::Client::MonoEffectPluginBase* Method_2_27310CD35353339B()
	{
		return ((::RPG::Client::MonoEffectPluginBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E7864BF06C083B9_6_METHOD_2_27310CD35353339B_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_6E7864BF06C083B9_6_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E7864BF06C083B9_6___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
