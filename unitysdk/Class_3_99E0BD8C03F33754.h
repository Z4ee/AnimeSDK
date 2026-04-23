#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_38CB396D65CE8ADD.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace RPG::Client { class EnvironmentSystem; }
namespace RPGTools::Timeline { class ActiveVirtualCameraBehaviour; }
namespace RPGTools::Timeline { class CustomEventBehaviour; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define CLASS_3_99E0BD8C03F33754_METHOD_3_0D3D745EA1E73C74_OFFSET UNITYSDK_OFFSET(0x9032DD0)
#define CLASS_3_99E0BD8C03F33754_METHOD_3_33823A8218EEBE19_OFFSET UNITYSDK_OFFSET(0x90335F0)
#define CLASS_3_99E0BD8C03F33754_METHOD_3_455A0C30CAE9D1B9_OFFSET UNITYSDK_OFFSET(0x90332F0)
#define CLASS_3_99E0BD8C03F33754_METHOD_3_6035F1157C8EC9C3_OFFSET UNITYSDK_OFFSET(0x9032F10)
#define CLASS_3_99E0BD8C03F33754_METHOD_3_8BD8BEB30989812E_OFFSET UNITYSDK_OFFSET(0x90333D0)
#define CLASS_3_99E0BD8C03F33754_METHOD_3_9BD65F3FE8883794_OFFSET UNITYSDK_OFFSET(0x90337B0)
#define CLASS_3_99E0BD8C03F33754_METHOD_3_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0x90334D0)
#define CLASS_3_99E0BD8C03F33754_METHOD_3_A85D55A148DB6ACE_OFFSET UNITYSDK_OFFSET(0x9032E60)
#define CLASS_3_99E0BD8C03F33754_METHOD_3_A8F132B7D33EC9D3_OFFSET UNITYSDK_OFFSET(0x9033450)
#define CLASS_3_99E0BD8C03F33754_METHOD_3_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x9033160)
#define CLASS_3_99E0BD8C03F33754_METHOD_3_E3E9BFC5C547DD4A_OFFSET UNITYSDK_OFFSET(0x9033830)
#define CLASS_3_99E0BD8C03F33754_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x9033100)
#define CLASS_3_99E0BD8C03F33754__CTOR_OFFSET UNITYSDK_OFFSET(0x9033790)
#define CLASS_3_99E0BD8C03F33754___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x9033820)

inline static constexpr unsigned int Class_3_99E0BD8C03F33754_TypeDefinitionIndex = 44587;

class Class_3_99E0BD8C03F33754 : public ::Class_2_38CB396D65CE8ADD
{
public:
	::System::Double Field_3_0; // 0x20
	::System::Single Field_3_1; // 0x28
	::System::Single Field_3_2; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_99E0BD8C03F33754__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_0D3D745EA1E73C74(::RPGTools::Timeline::CustomEventBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::CustomEventBehaviour*))((::PBYTE)hIl2Cpp + CLASS_3_99E0BD8C03F33754_METHOD_3_0D3D745EA1E73C74_OFFSET))(this, a1);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_3_99E0BD8C03F33754_ONGRAPHSTOP_OFFSET))(this, a1);
	}

	::System::Void Method_3_455A0C30CAE9D1B9(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_3_99E0BD8C03F33754_METHOD_3_455A0C30CAE9D1B9_OFFSET))(this, a1);
	}

	::RPG::Client::EnvironmentSystem* Method_3_A8F132B7D33EC9D3()
	{
		return ((::RPG::Client::EnvironmentSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_99E0BD8C03F33754_METHOD_3_A8F132B7D33EC9D3_OFFSET))(this);
	}

	::System::Void Method_3_A85D55A148DB6ACE(::RPGTools::Timeline::ActiveVirtualCameraBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::ActiveVirtualCameraBehaviour*))((::PBYTE)hIl2Cpp + CLASS_3_99E0BD8C03F33754_METHOD_3_A85D55A148DB6ACE_OFFSET))(this, a1);
	}

	::System::Void Method_3_8BD8BEB30989812E(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_3_99E0BD8C03F33754_METHOD_3_8BD8BEB30989812E_OFFSET))(this, a1);
	}

	::System::Void Method_3_A1781348F0A89177()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_99E0BD8C03F33754_METHOD_3_A1781348F0A89177_OFFSET))(this);
	}

	::System::Void Method_3_33823A8218EEBE19(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip*>*))((::PBYTE)hIl2Cpp + CLASS_3_99E0BD8C03F33754_METHOD_3_33823A8218EEBE19_OFFSET))(this, a1);
	}

	::System::Void Method_3_6035F1157C8EC9C3(::RPGTools::Timeline::ActiveVirtualCameraBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::ActiveVirtualCameraBehaviour*))((::PBYTE)hIl2Cpp + CLASS_3_99E0BD8C03F33754_METHOD_3_6035F1157C8EC9C3_OFFSET))(this, a1);
	}

	::System::Void Method_3_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_99E0BD8C03F33754_METHOD_3_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void Method_3_9BD65F3FE8883794(::RPGTools::Timeline::CustomEventBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::CustomEventBehaviour*))((::PBYTE)hIl2Cpp + CLASS_3_99E0BD8C03F33754_METHOD_3_9BD65F3FE8883794_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_OnGraphStop(::UnityEngine::Playables::Playable P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_3_99E0BD8C03F33754___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET))(this, P0);
	}

	::System::Void Method_3_E3E9BFC5C547DD4A(::UnityEngine::Playables::Playable P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_3_99E0BD8C03F33754_METHOD_3_E3E9BFC5C547DD4A_OFFSET))(this, P0);
	}
};
