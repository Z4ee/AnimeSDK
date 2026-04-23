#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A2301A8B07519135.h"
#include "unitysdk/Class_3_06E3452A211FC6E5_CenterStyle.h"
#include "unitysdk/RPG/GameCore/EnergyBarState.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/MonsterEnergyBarNumColor.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_70697F531F566942_2;
namespace RPG::GameCore { class MonsterEnergyBarCustomColor; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define CLASS_3_06E3452A211FC6E5_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x124DFC60)
#define CLASS_3_06E3452A211FC6E5_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x124DFD00)
#define CLASS_3_06E3452A211FC6E5_METHOD_3_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x124DE640)
#define CLASS_3_06E3452A211FC6E5_METHOD_3_0D372435D9CAE4BC_OFFSET UNITYSDK_OFFSET(0x124DE910)
#define CLASS_3_06E3452A211FC6E5_METHOD_3_1576E1CE6A5A6899_OFFSET UNITYSDK_OFFSET(0x124DE3B0)
#define CLASS_3_06E3452A211FC6E5_METHOD_3_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x124DF400)
#define CLASS_3_06E3452A211FC6E5_METHOD_3_266DDD09F1F574F0_OFFSET UNITYSDK_OFFSET(0x124DFF20)
#define CLASS_3_06E3452A211FC6E5_METHOD_3_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x124DF970)
#define CLASS_3_06E3452A211FC6E5_METHOD_3_42229D61B7A54CCE_OFFSET UNITYSDK_OFFSET(0x124DE7D0)
#define CLASS_3_06E3452A211FC6E5_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x124DFEC0)
#define CLASS_3_06E3452A211FC6E5_METHOD_3_5AC715804517063C_OFFSET UNITYSDK_OFFSET(0x124DEC50)
#define CLASS_3_06E3452A211FC6E5_METHOD_3_664C062015F0C2D3_OFFSET UNITYSDK_OFFSET(0x124DE300)
#define CLASS_3_06E3452A211FC6E5_METHOD_3_7226ABC46FCD5B68_OFFSET UNITYSDK_OFFSET(0x124DF180)
#define CLASS_3_06E3452A211FC6E5_METHOD_3_7744894CEC41BF06_1_OFFSET UNITYSDK_OFFSET(0x124DE6C0)
#define CLASS_3_06E3452A211FC6E5_METHOD_3_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x124DF760)
#define CLASS_3_06E3452A211FC6E5_METHOD_3_7B35E153EF3BACD3_OFFSET UNITYSDK_OFFSET(0x124DFB50)
#define CLASS_3_06E3452A211FC6E5_METHOD_3_866143E7CC880145_OFFSET UNITYSDK_OFFSET(0x124DE1C0)
#define CLASS_3_06E3452A211FC6E5_METHOD_3_941C404C800CB723_OFFSET UNITYSDK_OFFSET(0x124DEF50)
#define CLASS_3_06E3452A211FC6E5_METHOD_3_98CD66A7F3C102A5_OFFSET UNITYSDK_OFFSET(0x124DFAB0)
#define CLASS_3_06E3452A211FC6E5_METHOD_3_A0AF57C3313A46C7_OFFSET UNITYSDK_OFFSET(0x124DEFE0)
#define CLASS_3_06E3452A211FC6E5_METHOD_3_A0CFDB5F5B1DB2D6_OFFSET UNITYSDK_OFFSET(0x124DE860)
#define CLASS_3_06E3452A211FC6E5_METHOD_3_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x124DFBD0)
#define CLASS_3_06E3452A211FC6E5_METHOD_3_A91086AED8314DB5_OFFSET UNITYSDK_OFFSET(0x124DF830)
#define CLASS_3_06E3452A211FC6E5_METHOD_3_B03F6D31318CC2B8_OFFSET UNITYSDK_OFFSET(0x124DF660)
#define CLASS_3_06E3452A211FC6E5_METHOD_3_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x124DF9E0)
#define CLASS_3_06E3452A211FC6E5_METHOD_3_D5E5EC1B4538DDD1_1_OFFSET UNITYSDK_OFFSET(0x124E0010)
#define CLASS_3_06E3452A211FC6E5_METHOD_3_D5E5EC1B4538DDD1_OFFSET UNITYSDK_OFFSET(0x124DFFA0)
#define CLASS_3_06E3452A211FC6E5_METHOD_3_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0x124DE010)
#define CLASS_3_06E3452A211FC6E5_METHOD_3_E10F3359B5E0D724_OFFSET UNITYSDK_OFFSET(0x124DF880)
#define CLASS_3_06E3452A211FC6E5_METHOD_3_E2CDB6B22CCEBA97_OFFSET UNITYSDK_OFFSET(0x124DFE50)
#define CLASS_3_06E3452A211FC6E5_METHOD_3_FB84CA7105A88F81_OFFSET UNITYSDK_OFFSET(0x124DF490)
#define CLASS_3_06E3452A211FC6E5_ONRETURN_OFFSET UNITYSDK_OFFSET(0x124DE2B0)
#define CLASS_3_06E3452A211FC6E5__CTOR_OFFSET UNITYSDK_OFFSET(0x124DFD80)
#define CLASS_3_06E3452A211FC6E5__ONBIND_OFFSET UNITYSDK_OFFSET(0x124DD970)
#define CLASS_3_06E3452A211FC6E5___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x124E0080)
#define CLASS_3_06E3452A211FC6E5___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x124E00E0)
#define CLASS_3_06E3452A211FC6E5___IFIXBASEPROXY_ONRETURN_OFFSET UNITYSDK_OFFSET(0x124DFF90)
#define CLASS_3_06E3452A211FC6E5___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x124DFDF0)

inline static constexpr unsigned int Class_3_06E3452A211FC6E5_TypeDefinitionIndex = 66150;

class Class_3_06E3452A211FC6E5 : public ::Class_2_A2301A8B07519135
{
public:
	// static const ::System::String* Field_3_0; // 0x0
	// static const ::System::String* Field_3_30; // 0x0
	// static const ::System::String* Field_3_31; // 0x0
	// static const ::System::String* Field_3_32; // 0x0
	// static const ::System::String* Field_3_33; // 0x0
	// static const ::System::String* Field_3_34; // 0x0
	// static const ::System::String* Field_3_35; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* Field_3_40; // 0x68
	::UnityEngine::Transform* Field_3_16; // 0x70
	::UnityEngine::Transform* Field_3_7; // 0x78
	::UnityEngine::UI::Text* Field_3_8; // 0x80
	::UnityEngine::Transform* Field_3_12; // 0x88
	::UnityEngine::UI::Image* Field_3_5; // 0x90
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MonsterEnergyBarNumColor, ::System::String*>* Field_3_39; // 0x98
	::UnityEngine::UI::Text* Field_3_15; // 0xA0
	::UnityEngine::UI::Image* Field_3_3; // 0xA8
	::UnityEngine::UI::Text* Field_3_11; // 0xB0
	::UnityEngine::UI::Text* Field_3_9; // 0xB8
	::UnityEngine::UI::Image* Field_3_6; // 0xC0
	::UnityEngine::UI::Image* Field_3_4; // 0xC8
	::UnityEngine::Transform* Field_3_18; // 0xD0
	::UnityEngine::UI::Text* Field_3_10; // 0xD8
	::Il2CppArray<::UnityEngine::UI::Text*>* Field_3_17; // 0xE0
	::UnityEngine::Transform* Field_3_2; // 0xE8
	::UnityEngine::Animator* Field_3_1; // 0xF0
	::UnityEngine::UI::Text* Field_3_14; // 0xF8
	::UnityEngine::UI::Text* Field_3_13; // 0x100
	::System::Int32 Field_3_36; // 0x108
	::System::Int32 Field_3_37; // 0x10C
	::RPG::GameCore::FixPoint Field_3_23; // 0x110
	::RPG::GameCore::FixPoint Field_3_25; // 0x118
	::RPG::GameCore::FixPoint Field_3_24; // 0x120
	::RPG::GameCore::FixPoint Field_3_21; // 0x128
	::RPG::GameCore::EnergyBarState Field_3_26; // 0x130
	::Class_3_06E3452A211FC6E5_CenterStyle Field_3_19; // 0x134
	::System::Boolean Field_3_27; // 0x138
	::System::Boolean Field_3_29; // 0x139
	::System::Boolean Field_3_28; // 0x13A
	::System::Boolean Field_3_38; // 0x13B
	::RPG::GameCore::FixPoint Field_3_20; // 0x140
	::RPG::GameCore::FixPoint Field_3_22; // 0x148

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5__ONBIND_OFFSET))(this);
	}

	::System::Void Method_3_DDA8A2337932DF10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_METHOD_3_DDA8A2337932DF10_OFFSET))(this);
	}

	::System::Void Method_3_866143E7CC880145(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_METHOD_3_866143E7CC880145_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_3_664C062015F0C2D3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_METHOD_3_664C062015F0C2D3_OFFSET))(this, a1);
	}

	::System::Void Method_3_1576E1CE6A5A6899(::Class_1_70697F531F566942_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70697F531F566942_2*))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_METHOD_3_1576E1CE6A5A6899_OFFSET))(this, a1);
	}

	::System::Void Method_3_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_METHOD_3_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_3_5AC715804517063C(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_METHOD_3_5AC715804517063C_OFFSET))(this, a1);
	}

	::System::Void Method_3_941C404C800CB723(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_METHOD_3_941C404C800CB723_OFFSET))(this, a1);
	}

	::System::Void Method_3_FB84CA7105A88F81(::UnityEngine::Animator* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_METHOD_3_FB84CA7105A88F81_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_B03F6D31318CC2B8(::Class_1_70697F531F566942_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70697F531F566942_2*))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_METHOD_3_B03F6D31318CC2B8_OFFSET))(this, a1);
	}

	::System::Void Method_3_A91086AED8314DB5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_METHOD_3_A91086AED8314DB5_OFFSET))(this);
	}

	::System::Void Method_3_E10F3359B5E0D724(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_METHOD_3_E10F3359B5E0D724_OFFSET))(this, a1);
	}

	::System::String* Method_3_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_METHOD_3_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::Void Method_3_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_METHOD_3_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_3_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_METHOD_3_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_3_097468641FDED14E(::Class_1_70697F531F566942_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70697F531F566942_2*))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_METHOD_3_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::Void Method_3_A0CFDB5F5B1DB2D6(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_METHOD_3_A0CFDB5F5B1DB2D6_OFFSET))(this, a1);
	}

	::System::Void Method_3_98CD66A7F3C102A5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_METHOD_3_98CD66A7F3C102A5_OFFSET))(this);
	}

	::System::Void Method_3_7B35E153EF3BACD3(::RPG::GameCore::EnergyBarState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnergyBarState))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_METHOD_3_7B35E153EF3BACD3_OFFSET))(this, a1);
	}

	::System::Void Method_3_A0AF57C3313A46C7(::RPG::GameCore::MonsterEnergyBarNumColor a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MonsterEnergyBarNumColor))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_METHOD_3_A0AF57C3313A46C7_OFFSET))(this, a1);
	}

	::System::Void Method_3_7226ABC46FCD5B68(::RPG::GameCore::MonsterEnergyBarCustomColor* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MonsterEnergyBarCustomColor*))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_METHOD_3_7226ABC46FCD5B68_OFFSET))(this, a1);
	}

	::System::Void Method_3_0D372435D9CAE4BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_METHOD_3_0D372435D9CAE4BC_OFFSET))(this);
	}

	::System::Void Method_3_42229D61B7A54CCE(::System::Nullable_1<::System::Int32> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_METHOD_3_42229D61B7A54CCE_OFFSET))(this, a1);
	}

	::System::Void Method_3_7744894CEC41BF06_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_METHOD_3_7744894CEC41BF06_1_OFFSET))(this);
	}

	::System::Void Method_3_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_METHOD_3_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_3_E2CDB6B22CCEBA97(::Class_1_70697F531F566942_2* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70697F531F566942_2*))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_METHOD_3_E2CDB6B22CCEBA97_OFFSET))(this, P0);
	}

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_3_266DDD09F1F574F0(::System::String* P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_METHOD_3_266DDD09F1F574F0_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5___IFIXBASEPROXY_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_3_D5E5EC1B4538DDD1(::System::Boolean P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_METHOD_3_D5E5EC1B4538DDD1_OFFSET))(this, P0);
	}

	::System::Void Method_3_D5E5EC1B4538DDD1_1(::System::Boolean P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5_METHOD_3_D5E5EC1B4538DDD1_1_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06E3452A211FC6E5___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
