#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_49CD4483759F3691.h"
#include "unitysdk/RPG/GameCore/EnergyBarState.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_70697F531F566942_1;
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine::UI { class Text; }

#define CLASS_3_044F5788210F0FE0_METHOD_3_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x894B170)
#define CLASS_3_044F5788210F0FE0_METHOD_3_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x894B590)
#define CLASS_3_044F5788210F0FE0_METHOD_3_664C062015F0C2D3_OFFSET UNITYSDK_OFFSET(0x894B350)
#define CLASS_3_044F5788210F0FE0_METHOD_3_70437D85C11C5222_OFFSET UNITYSDK_OFFSET(0x894B080)
#define CLASS_3_044F5788210F0FE0_METHOD_3_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x894B400)
#define CLASS_3_044F5788210F0FE0_METHOD_3_941C404C800CB723_OFFSET UNITYSDK_OFFSET(0x894B2C0)
#define CLASS_3_044F5788210F0FE0_METHOD_3_B7E3C3DAFBD8F4B2_OFFSET UNITYSDK_OFFSET(0x894B200)
#define CLASS_3_044F5788210F0FE0_METHOD_3_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x894B4D0)
#define CLASS_3_044F5788210F0FE0_METHOD_3_D5E5EC1B4538DDD1_OFFSET UNITYSDK_OFFSET(0x894B940)
#define CLASS_3_044F5788210F0FE0_METHOD_3_E2CDB6B22CCEBA97_OFFSET UNITYSDK_OFFSET(0x894B8D0)
#define CLASS_3_044F5788210F0FE0_METHOD_3_FB84CA7105A88F81_OFFSET UNITYSDK_OFFSET(0x894B600)
#define CLASS_3_044F5788210F0FE0_ONRETURN_OFFSET UNITYSDK_OFFSET(0x894B000)
#define CLASS_3_044F5788210F0FE0__CTOR_OFFSET UNITYSDK_OFFSET(0x894B7D0)
#define CLASS_3_044F5788210F0FE0__ONBIND_OFFSET UNITYSDK_OFFSET(0x894AED0)
#define CLASS_3_044F5788210F0FE0___IFIXBASEPROXY_ONRETURN_OFFSET UNITYSDK_OFFSET(0x894B860)
#define CLASS_3_044F5788210F0FE0___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x894B800)

inline static constexpr unsigned int Class_3_044F5788210F0FE0_TypeDefinitionIndex = 58763;

class Class_3_044F5788210F0FE0 : public ::Class_2_49CD4483759F3691
{
public:
	// static const ::System::String* Field_3_0; // 0x0
	// static const ::System::String* Field_3_3; // 0x0
	// static const ::System::String* Field_3_4; // 0x0
	// static const ::System::String* Field_3_5; // 0x0
	// static const ::System::String* Field_3_6; // 0x0
	// static const ::System::String* Field_3_7; // 0x0
	// static const ::System::String* Field_3_8; // 0x0
	::UnityEngine::Animator* Field_3_1; // 0x70
	::UnityEngine::UI::Text* Field_3_2; // 0x78
	::RPG::GameCore::FixPoint Field_3_10; // 0x80
	::RPG::GameCore::FixPoint Field_3_11; // 0x88
	::RPG::GameCore::EnergyBarState Field_3_9; // 0x90
	::System::Boolean Field_3_12; // 0x94

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_044F5788210F0FE0__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_044F5788210F0FE0__ONBIND_OFFSET))(this);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_044F5788210F0FE0_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_3_70437D85C11C5222(::Class_1_70697F531F566942_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_3_044F5788210F0FE0_METHOD_3_70437D85C11C5222_OFFSET))(this, a1);
	}

	::System::Void Method_3_664C062015F0C2D3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_044F5788210F0FE0_METHOD_3_664C062015F0C2D3_OFFSET))(this, a1);
	}

	::System::Void Method_3_B7E3C3DAFBD8F4B2(::Class_1_70697F531F566942_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_3_044F5788210F0FE0_METHOD_3_B7E3C3DAFBD8F4B2_OFFSET))(this, a1);
	}

	::System::Void Method_3_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_044F5788210F0FE0_METHOD_3_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_3_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_044F5788210F0FE0_METHOD_3_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_3_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_044F5788210F0FE0_METHOD_3_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::String* Method_3_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_044F5788210F0FE0_METHOD_3_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::Void Method_3_941C404C800CB723(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_044F5788210F0FE0_METHOD_3_941C404C800CB723_OFFSET))(this, a1);
	}

	::System::Void Method_3_FB84CA7105A88F81(::UnityEngine::Animator* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_044F5788210F0FE0_METHOD_3_FB84CA7105A88F81_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_044F5788210F0FE0___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_044F5788210F0FE0___IFIXBASEPROXY_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_3_E2CDB6B22CCEBA97(::Class_1_70697F531F566942_1* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_3_044F5788210F0FE0_METHOD_3_E2CDB6B22CCEBA97_OFFSET))(this, P0);
	}

	::System::Void Method_3_D5E5EC1B4538DDD1(::System::Boolean P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_044F5788210F0FE0_METHOD_3_D5E5EC1B4538DDD1_OFFSET))(this, P0);
	}
};
