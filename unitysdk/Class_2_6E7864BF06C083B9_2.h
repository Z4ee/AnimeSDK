#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoEffectPluginFollowVisibility; }
namespace System { class Object; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_6E7864BF06C083B9_2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12473650)
#define CLASS_2_6E7864BF06C083B9_2_METHOD_2_0C5741F2769F4888_OFFSET UNITYSDK_OFFSET(0x124737E0)
#define CLASS_2_6E7864BF06C083B9_2_METHOD_2_51DEC44B986280C0_OFFSET UNITYSDK_OFFSET(0x12473850)
#define CLASS_2_6E7864BF06C083B9_2_METHOD_2_60EAED3317E083D3_OFFSET UNITYSDK_OFFSET(0x124736C0)
#define CLASS_2_6E7864BF06C083B9_2_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0x12473B80)
#define CLASS_2_6E7864BF06C083B9_2_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x124735E0)
#define CLASS_2_6E7864BF06C083B9_2_METHOD_2_BFB7535D462E0EB4_OFFSET UNITYSDK_OFFSET(0x12473970)
#define CLASS_2_6E7864BF06C083B9_2__CTOR_OFFSET UNITYSDK_OFFSET(0x12473B70)
#define CLASS_2_6E7864BF06C083B9_2___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12473BF0)

inline static constexpr unsigned int Class_2_6E7864BF06C083B9_2_TypeDefinitionIndex = 64411;

class Class_2_6E7864BF06C083B9_2 : public ::RPG::Client::BehaviorBase
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E7864BF06C083B9_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_6E7864BF06C083B9_2_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E7864BF06C083B9_2_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_60EAED3317E083D3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E7864BF06C083B9_2_METHOD_2_60EAED3317E083D3_OFFSET))(this);
	}

	::System::Void Method_2_51DEC44B986280C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E7864BF06C083B9_2_METHOD_2_51DEC44B986280C0_OFFSET))(this);
	}

	::System::Void Method_2_BFB7535D462E0EB4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6E7864BF06C083B9_2_METHOD_2_BFB7535D462E0EB4_OFFSET))(this, a1);
	}

	::RPG::Client::MonoEffectPluginFollowVisibility* Method_2_0C5741F2769F4888()
	{
		return ((::RPG::Client::MonoEffectPluginFollowVisibility*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E7864BF06C083B9_2_METHOD_2_0C5741F2769F4888_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_6E7864BF06C083B9_2_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E7864BF06C083B9_2___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
