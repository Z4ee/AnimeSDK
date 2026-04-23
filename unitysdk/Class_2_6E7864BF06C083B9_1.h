#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoEffectPluginBase; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_6E7864BF06C083B9_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF93BA50)
#define CLASS_2_6E7864BF06C083B9_1_METHOD_2_27310CD35353339B_OFFSET UNITYSDK_OFFSET(0xF93BAC0)
#define CLASS_2_6E7864BF06C083B9_1_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0xF93BB20)
#define CLASS_2_6E7864BF06C083B9_1_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0xF93B9E0)
#define CLASS_2_6E7864BF06C083B9_1__CTOR_OFFSET UNITYSDK_OFFSET(0xF93BB10)
#define CLASS_2_6E7864BF06C083B9_1___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF93BB90)

inline static constexpr unsigned int Class_2_6E7864BF06C083B9_1_TypeDefinitionIndex = 64397;

class Class_2_6E7864BF06C083B9_1 : public ::RPG::Client::BehaviorBase
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E7864BF06C083B9_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_6E7864BF06C083B9_1_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E7864BF06C083B9_1_DISPOSE_OFFSET))(this);
	}

	::RPG::Client::MonoEffectPluginBase* Method_2_27310CD35353339B()
	{
		return ((::RPG::Client::MonoEffectPluginBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E7864BF06C083B9_1_METHOD_2_27310CD35353339B_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_6E7864BF06C083B9_1_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E7864BF06C083B9_1___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
