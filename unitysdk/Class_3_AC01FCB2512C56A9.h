#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_1DC128E22A3FA54F.h"
#include "unitysdk/Class_3_AC01FCB2512C56A9_CenterStyle.h"
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

#define CLASS_3_AC01FCB2512C56A9_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x176CAC40)
#define CLASS_3_AC01FCB2512C56A9_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x176CAD10)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_0877861EB9E9853D_OFFSET UNITYSDK_OFFSET(0x176C9120)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x176C8F40)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x176CA140)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_21093493642AEBDA_OFFSET UNITYSDK_OFFSET(0x176CA740)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_32778CB51FD8356F_OFFSET UNITYSDK_OFFSET(0x176CA3D0)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x176CA880)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_423F2C2D16F7EB1D_OFFSET UNITYSDK_OFFSET(0x176C9760)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_55D374982B2054F2_OFFSET UNITYSDK_OFFSET(0x176C9D80)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_5C061BFFDACCF2F9_OFFSET UNITYSDK_OFFSET(0x176C9280)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_664C062015F0C2D3_OFFSET UNITYSDK_OFFSET(0x176C8A30)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_706690DE8F3A2CDE_OFFSET UNITYSDK_OFFSET(0x176C8AE0)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_738A4F89A8F67429_OFFSET UNITYSDK_OFFSET(0x176C9B50)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_7744894CEC41BF06_1_OFFSET UNITYSDK_OFFSET(0x176C8FC0)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x176CA670)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_7B35E153EF3BACD3_OFFSET UNITYSDK_OFFSET(0x176CAB00)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_941C404C800CB723_OFFSET UNITYSDK_OFFSET(0x176C9AC0)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_A0CFDB5F5B1DB2D6_OFFSET UNITYSDK_OFFSET(0x176C91D0)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x176CA9C0)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_B19D178EAF5F28EA_OFFSET UNITYSDK_OFFSET(0x176CA1D0)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_CBAE9666256B7B09_OFFSET UNITYSDK_OFFSET(0x176CA790)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x176CA8F0)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0x176C8720)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x176CAB80)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_F70045D03F5767B0_OFFSET UNITYSDK_OFFSET(0x176C88D0)
#define CLASS_3_AC01FCB2512C56A9_ONRETURN_OFFSET UNITYSDK_OFFSET(0x176C89E0)
#define CLASS_3_AC01FCB2512C56A9__CTOR_OFFSET UNITYSDK_OFFSET(0x176CADB0)
#define CLASS_3_AC01FCB2512C56A9__ONBIND_OFFSET UNITYSDK_OFFSET(0x176C8130)

inline static constexpr unsigned int Class_3_AC01FCB2512C56A9_TypeDefinitionIndex = 68532;

class Class_3_AC01FCB2512C56A9 : public ::Class_2_1DC128E22A3FA54F
{
public:
	// static const ::System::String* Field_3_0; // 0x0
	// static const ::System::String* Field_3_1; // 0x0
	// static const ::System::String* Field_3_2; // 0x0
	// static const ::System::String* Field_3_3; // 0x0
	// static const ::System::String* Field_3_4; // 0x0
	// static const ::System::String* Field_3_5; // 0x0
	// static const ::System::String* Field_3_6; // 0x0
	::UnityEngine::UI::Text* Field_3_7; // 0x68
	::UnityEngine::UI::Text* Field_3_8; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* Field_3_9; // 0x78
	::UnityEngine::Transform* Field_3_10; // 0x80
	::UnityEngine::UI::Text* Field_3_11; // 0x88
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MonsterEnergyBarNumColor, ::System::String*>* Field_3_12; // 0x90
	::UnityEngine::UI::Image* Field_3_13; // 0x98
	::UnityEngine::Transform* Field_3_14; // 0xA0
	::UnityEngine::UI::Text* Field_3_15; // 0xA8
	::Il2CppArray<::UnityEngine::UI::Text*>* Field_3_16; // 0xB0
	::UnityEngine::UI::Text* Field_3_17; // 0xB8
	::UnityEngine::UI::Image* Field_3_18; // 0xC0
	::UnityEngine::UI::Text* Field_3_19; // 0xC8
	::UnityEngine::UI::Text* Field_3_20; // 0xD0
	::UnityEngine::Animator* Field_3_21; // 0xD8
	::UnityEngine::Transform* Field_3_22; // 0xE0
	::UnityEngine::UI::Image* Field_3_23; // 0xE8
	::UnityEngine::Transform* Field_3_24; // 0xF0
	::UnityEngine::Transform* Field_3_25; // 0xF8
	::UnityEngine::UI::Image* Field_3_26; // 0x100
	::RPG::GameCore::FixPoint Field_3_27; // 0x108
	::System::Boolean Field_3_28; // 0x110
	::System::Boolean Field_3_29; // 0x111
	::System::Boolean Field_3_30; // 0x112
	::System::Boolean Field_3_31; // 0x113
	::System::Int32 Field_3_32; // 0x114
	::RPG::GameCore::FixPoint Field_3_33; // 0x118
	::System::Int32 Field_3_34; // 0x120
	::RPG::GameCore::EnergyBarState Field_3_35; // 0x124
	::Class_3_AC01FCB2512C56A9_CenterStyle Field_3_36; // 0x128
	::RPG::GameCore::FixPoint Field_3_37; // 0x130
	::RPG::GameCore::FixPoint Field_3_38; // 0x138
	::RPG::GameCore::FixPoint Field_3_39; // 0x140
	::RPG::GameCore::FixPoint Field_3_40; // 0x148

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AC01FCB2512C56A9__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AC01FCB2512C56A9__ONBIND_OFFSET))(this);
	}

	::System::Void Method_3_DDA8A2337932DF10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AC01FCB2512C56A9_METHOD_3_DDA8A2337932DF10_OFFSET))(this);
	}

	::System::Void Method_3_F70045D03F5767B0(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_AC01FCB2512C56A9_METHOD_3_F70045D03F5767B0_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AC01FCB2512C56A9_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_3_664C062015F0C2D3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_AC01FCB2512C56A9_METHOD_3_664C062015F0C2D3_OFFSET))(this, a1);
	}

	::System::Void Method_3_706690DE8F3A2CDE(::Class_1_70697F531F566942_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70697F531F566942_2*))((::PBYTE)hIl2Cpp + CLASS_3_AC01FCB2512C56A9_METHOD_3_706690DE8F3A2CDE_OFFSET))(this, a1);
	}

	::System::Void Method_3_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_AC01FCB2512C56A9_METHOD_3_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_3_423F2C2D16F7EB1D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_AC01FCB2512C56A9_METHOD_3_423F2C2D16F7EB1D_OFFSET))(this, a1);
	}

	::System::Void Method_3_941C404C800CB723(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_AC01FCB2512C56A9_METHOD_3_941C404C800CB723_OFFSET))(this, a1);
	}

	::System::Void Method_3_B19D178EAF5F28EA(::UnityEngine::Animator* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_AC01FCB2512C56A9_METHOD_3_B19D178EAF5F28EA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_32778CB51FD8356F(::Class_1_70697F531F566942_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70697F531F566942_2*))((::PBYTE)hIl2Cpp + CLASS_3_AC01FCB2512C56A9_METHOD_3_32778CB51FD8356F_OFFSET))(this, a1);
	}

	::System::Void Method_3_21093493642AEBDA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AC01FCB2512C56A9_METHOD_3_21093493642AEBDA_OFFSET))(this);
	}

	::System::Void Method_3_CBAE9666256B7B09(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_AC01FCB2512C56A9_METHOD_3_CBAE9666256B7B09_OFFSET))(this, a1);
	}

	::System::String* Method_3_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AC01FCB2512C56A9_METHOD_3_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::Void Method_3_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AC01FCB2512C56A9_METHOD_3_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_3_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AC01FCB2512C56A9_METHOD_3_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_3_097468641FDED14E(::Class_1_70697F531F566942_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70697F531F566942_2*))((::PBYTE)hIl2Cpp + CLASS_3_AC01FCB2512C56A9_METHOD_3_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::Void Method_3_A0CFDB5F5B1DB2D6(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_AC01FCB2512C56A9_METHOD_3_A0CFDB5F5B1DB2D6_OFFSET))(this, a1);
	}

	::System::Void Method_3_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AC01FCB2512C56A9_METHOD_3_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_3_7B35E153EF3BACD3(::RPG::GameCore::EnergyBarState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnergyBarState))((::PBYTE)hIl2Cpp + CLASS_3_AC01FCB2512C56A9_METHOD_3_7B35E153EF3BACD3_OFFSET))(this, a1);
	}

	::System::Void Method_3_738A4F89A8F67429(::RPG::GameCore::MonsterEnergyBarNumColor a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MonsterEnergyBarNumColor))((::PBYTE)hIl2Cpp + CLASS_3_AC01FCB2512C56A9_METHOD_3_738A4F89A8F67429_OFFSET))(this, a1);
	}

	::System::Void Method_3_55D374982B2054F2(::RPG::GameCore::MonsterEnergyBarCustomColor* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MonsterEnergyBarCustomColor*))((::PBYTE)hIl2Cpp + CLASS_3_AC01FCB2512C56A9_METHOD_3_55D374982B2054F2_OFFSET))(this, a1);
	}

	::System::Void Method_3_5C061BFFDACCF2F9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AC01FCB2512C56A9_METHOD_3_5C061BFFDACCF2F9_OFFSET))(this);
	}

	::System::Void Method_3_0877861EB9E9853D(::System::Nullable_1<::System::Int32> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_3_AC01FCB2512C56A9_METHOD_3_0877861EB9E9853D_OFFSET))(this, a1);
	}

	::System::Void Method_3_7744894CEC41BF06_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AC01FCB2512C56A9_METHOD_3_7744894CEC41BF06_1_OFFSET))(this);
	}

	::System::Void Method_3_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_AC01FCB2512C56A9_METHOD_3_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AC01FCB2512C56A9_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AC01FCB2512C56A9_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
