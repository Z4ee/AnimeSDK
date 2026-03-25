#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoEffectPluginDelayEnableChildren; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_7C5FD983F74AC195_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8829F00)
#define CLASS_2_7C5FD983F74AC195_METHOD_2_2D3AC211CE406316_OFFSET UNITYSDK_OFFSET(0x882A090)
#define CLASS_2_7C5FD983F74AC195_METHOD_2_60A8497E9F4D23B5_OFFSET UNITYSDK_OFFSET(0x882A0E0)
#define CLASS_2_7C5FD983F74AC195_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0x882A240)
#define CLASS_2_7C5FD983F74AC195_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x8829E90)
#define CLASS_2_7C5FD983F74AC195_METHOD_2_D155D4917B3D2C6A_OFFSET UNITYSDK_OFFSET(0x8829F70)
#define CLASS_2_7C5FD983F74AC195__CTOR_OFFSET UNITYSDK_OFFSET(0x882A230)
#define CLASS_2_7C5FD983F74AC195___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x882A2B0)

inline static constexpr unsigned int Class_2_7C5FD983F74AC195_TypeDefinitionIndex = 57154;

class Class_2_7C5FD983F74AC195 : public ::RPG::Client::BehaviorBase
{
public:
	::System::Single Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C5FD983F74AC195__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_7C5FD983F74AC195_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C5FD983F74AC195_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_D155D4917B3D2C6A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C5FD983F74AC195_METHOD_2_D155D4917B3D2C6A_OFFSET))(this);
	}

	::System::Void Method_2_60A8497E9F4D23B5(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7C5FD983F74AC195_METHOD_2_60A8497E9F4D23B5_OFFSET))(this, a1);
	}

	::RPG::Client::MonoEffectPluginDelayEnableChildren* Method_2_2D3AC211CE406316()
	{
		return ((::RPG::Client::MonoEffectPluginDelayEnableChildren*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C5FD983F74AC195_METHOD_2_2D3AC211CE406316_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_7C5FD983F74AC195_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C5FD983F74AC195___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
