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

#define CLASS_3_AC01FCB2512C56A9_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x17DD15B0)
#define CLASS_3_AC01FCB2512C56A9_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x17DD1680)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x17DCF830)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x17DD0AB0)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_21093493642AEBDA_OFFSET UNITYSDK_OFFSET(0x17DD10B0)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_32778CB51FD8356F_OFFSET UNITYSDK_OFFSET(0x17DD0D40)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x17DD11F0)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_42229D61B7A54CCE_OFFSET UNITYSDK_OFFSET(0x17DCFA10)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_423F2C2D16F7EB1D_OFFSET UNITYSDK_OFFSET(0x17DD00C0)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_55D374982B2054F2_OFFSET UNITYSDK_OFFSET(0x17DD0700)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_664C062015F0C2D3_OFFSET UNITYSDK_OFFSET(0x17DCF330)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_706690DE8F3A2CDE_OFFSET UNITYSDK_OFFSET(0x17DCF3E0)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_738A4F89A8F67429_OFFSET UNITYSDK_OFFSET(0x17DD04D0)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_7744894CEC41BF06_1_OFFSET UNITYSDK_OFFSET(0x17DCF8B0)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x17DD0FE0)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_7B35E153EF3BACD3_OFFSET UNITYSDK_OFFSET(0x17DD1470)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_941C404C800CB723_OFFSET UNITYSDK_OFFSET(0x17DD0440)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_A0CFDB5F5B1DB2D6_OFFSET UNITYSDK_OFFSET(0x17DCFAA0)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x17DD1330)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_B19D178EAF5F28EA_OFFSET UNITYSDK_OFFSET(0x17DD0B40)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_CBAE9666256B7B09_OFFSET UNITYSDK_OFFSET(0x17DD1100)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x17DD1260)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_D34723D1185A866E_OFFSET UNITYSDK_OFFSET(0x17DCFB50)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0x17DCF020)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x17DD14F0)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_F70045D03F5767B0_OFFSET UNITYSDK_OFFSET(0x17DCF1D0)
#define CLASS_3_AC01FCB2512C56A9_ONRETURN_OFFSET UNITYSDK_OFFSET(0x17DCF2E0)
#define CLASS_3_AC01FCB2512C56A9__CTOR_OFFSET UNITYSDK_OFFSET(0x17DD1720)
#define CLASS_3_AC01FCB2512C56A9__ONBIND_OFFSET UNITYSDK_OFFSET(0x17DCEA40)

inline static constexpr unsigned int Class_3_AC01FCB2512C56A9_TypeDefinitionIndex = 71727;

class Class_3_AC01FCB2512C56A9 : public ::Class_2_1DC128E22A3FA54F
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	// static const ::System::String* LGIGALKBHLA; // 0x0
	// static const ::System::String* CLNKJHCNIBO; // 0x0
	// static const ::System::String* ODIALKBLDDJ; // 0x0
	// static const ::System::String* CKCDPJALNII; // 0x0
	// static const ::System::String* OBOIJOJOHEK; // 0x0
	// static const ::System::String* FMMIMLOBFGO; // 0x0
	::UnityEngine::Transform* HHGGLKIHILC; // 0x68
	::UnityEngine::UI::Text* LKJNEGGCOBK; // 0x70
	::UnityEngine::UI::Image* CFNIFLHCPIL; // 0x78
	::UnityEngine::UI::Text* EDELPDCPBEG; // 0x80
	::UnityEngine::Transform* AGMAFCNEOEF; // 0x88
	::UnityEngine::Transform* KCKANELOJKG; // 0x90
	::UnityEngine::UI::Text* JBMFLIDFHCC; // 0x98
	::UnityEngine::UI::Text* BABCECONDCM; // 0xA0
	::UnityEngine::UI::Text* PMIHEJFDBGK; // 0xA8
	::UnityEngine::UI::Image* BOCHOANELAE; // 0xB0
	::UnityEngine::UI::Image* PPJDHFKIMNH; // 0xB8
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* FAKBCLPGIHH; // 0xC0
	::UnityEngine::Transform* CHJLEJMIKBC; // 0xC8
	::UnityEngine::Animator* CFNGLMDMENE; // 0xD0
	::UnityEngine::UI::Text* BBPEHMBCDBE; // 0xD8
	::UnityEngine::UI::Text* BFPHJEFDDNB; // 0xE0
	::Il2CppArray<::UnityEngine::UI::Text*>* MEGNAPOLFNG; // 0xE8
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MonsterEnergyBarNumColor, ::System::String*>* BDKBMMNJJAC; // 0xF0
	::UnityEngine::Transform* DFIPAKFGKLK; // 0xF8
	::UnityEngine::UI::Image* GGIMGEOJCIC; // 0x100
	::RPG::GameCore::FixPoint FADFHGIJLCK; // 0x108
	::RPG::GameCore::FixPoint CEIHDGNKFPM; // 0x110
	::System::Boolean FKHNDADODJM; // 0x118
	::System::Boolean EPCCCGMNGLO; // 0x119
	::System::Boolean ANHLMBLPDBP; // 0x11A
	::System::Boolean KFGIMIJAODB; // 0x11B
	::Class_3_AC01FCB2512C56A9_CenterStyle BBBKGGIHHJE; // 0x11C
	::System::Int32 EAGOPFAAFBI; // 0x120
	::RPG::GameCore::FixPoint OLCAMCCPFGB; // 0x128
	::RPG::GameCore::FixPoint EJNMGLJJEOO; // 0x130
	::System::Int32 MLNAFJKHGHD; // 0x138
	::RPG::GameCore::EnergyBarState LLBADFLDEIA; // 0x13C
	::RPG::GameCore::FixPoint BFLNNOEKIGE; // 0x140
	::RPG::GameCore::FixPoint DGPGFPKOHCA; // 0x148

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

	::System::Void Method_3_D34723D1185A866E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AC01FCB2512C56A9_METHOD_3_D34723D1185A866E_OFFSET))(this);
	}

	::System::Void Method_3_42229D61B7A54CCE(::System::Nullable_1<::System::Int32> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_3_AC01FCB2512C56A9_METHOD_3_42229D61B7A54CCE_OFFSET))(this, a1);
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
