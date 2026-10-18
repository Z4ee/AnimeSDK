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

#define CLASS_3_AC01FCB2512C56A9_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xEBF5450)
#define CLASS_3_AC01FCB2512C56A9_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xEBF5520)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0xEBF3750)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0xEBF4950)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_21093493642AEBDA_OFFSET UNITYSDK_OFFSET(0xEBF4F50)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_32778CB51FD8356F_OFFSET UNITYSDK_OFFSET(0xEBF4BE0)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0xEBF5090)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_42229D61B7A54CCE_OFFSET UNITYSDK_OFFSET(0xEBF3930)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_423F2C2D16F7EB1D_OFFSET UNITYSDK_OFFSET(0xEBF3F50)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_55D374982B2054F2_OFFSET UNITYSDK_OFFSET(0xEBF4590)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_5C061BFFDACCF2F9_OFFSET UNITYSDK_OFFSET(0xEBF3A80)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_664C062015F0C2D3_OFFSET UNITYSDK_OFFSET(0xEBF3240)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_706690DE8F3A2CDE_OFFSET UNITYSDK_OFFSET(0xEBF32F0)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_738A4F89A8F67429_OFFSET UNITYSDK_OFFSET(0xEBF4360)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_7744894CEC41BF06_1_OFFSET UNITYSDK_OFFSET(0xEBF37D0)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0xEBF4E80)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_7B35E153EF3BACD3_OFFSET UNITYSDK_OFFSET(0xEBF5310)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_941C404C800CB723_OFFSET UNITYSDK_OFFSET(0xEBF42D0)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_A0CFDB5F5B1DB2D6_OFFSET UNITYSDK_OFFSET(0xEBF39D0)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xEBF51D0)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_B19D178EAF5F28EA_OFFSET UNITYSDK_OFFSET(0xEBF49E0)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_CBAE9666256B7B09_OFFSET UNITYSDK_OFFSET(0xEBF4FA0)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xEBF5100)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0xEBF2F30)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xEBF5390)
#define CLASS_3_AC01FCB2512C56A9_METHOD_3_F70045D03F5767B0_OFFSET UNITYSDK_OFFSET(0xEBF30E0)
#define CLASS_3_AC01FCB2512C56A9_ONRETURN_OFFSET UNITYSDK_OFFSET(0xEBF31F0)
#define CLASS_3_AC01FCB2512C56A9__CTOR_OFFSET UNITYSDK_OFFSET(0xEBF55C0)
#define CLASS_3_AC01FCB2512C56A9__ONBIND_OFFSET UNITYSDK_OFFSET(0xEBF2A00)

inline static constexpr unsigned int Class_3_AC01FCB2512C56A9_TypeDefinitionIndex = 71785;

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
	::UnityEngine::Transform* CHJLEJMIKBC; // 0x68
	::UnityEngine::UI::Text* BBPEHMBCDBE; // 0x70
	::UnityEngine::UI::Text* BFPHJEFDDNB; // 0x78
	::UnityEngine::UI::Image* CFNIFLHCPIL; // 0x80
	::UnityEngine::Transform* DFIPAKFGKLK; // 0x88
	::UnityEngine::UI::Text* JBMFLIDFHCC; // 0x90
	::UnityEngine::UI::Text* EDELPDCPBEG; // 0x98
	::UnityEngine::UI::Text* BABCECONDCM; // 0xA0
	::UnityEngine::UI::Image* PPJDHFKIMNH; // 0xA8
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* FAKBCLPGIHH; // 0xB0
	::UnityEngine::UI::Image* BOCHOANELAE; // 0xB8
	::UnityEngine::UI::Image* GGIMGEOJCIC; // 0xC0
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MonsterEnergyBarNumColor, ::System::String*>* BDKBMMNJJAC; // 0xC8
	::UnityEngine::Animator* CFNGLMDMENE; // 0xD0
	::UnityEngine::UI::Text* LKJNEGGCOBK; // 0xD8
	::UnityEngine::Transform* HHGGLKIHILC; // 0xE0
	::Il2CppArray<::UnityEngine::UI::Text*>* MEGNAPOLFNG; // 0xE8
	::UnityEngine::Transform* KCKANELOJKG; // 0xF0
	::UnityEngine::Transform* AGMAFCNEOEF; // 0xF8
	::UnityEngine::UI::Text* PMIHEJFDBGK; // 0x100
	::RPG::GameCore::FixPoint BFLNNOEKIGE; // 0x108
	::RPG::GameCore::EnergyBarState LLBADFLDEIA; // 0x110
	::System::Int32 MLNAFJKHGHD; // 0x114
	::System::Boolean EPCCCGMNGLO; // 0x118
	::System::Boolean FKHNDADODJM; // 0x119
	::System::Boolean KFGIMIJAODB; // 0x11A
	::System::Boolean ANHLMBLPDBP; // 0x11B
	::RPG::GameCore::FixPoint DGPGFPKOHCA; // 0x120
	::RPG::GameCore::FixPoint EJNMGLJJEOO; // 0x128
	::RPG::GameCore::FixPoint CEIHDGNKFPM; // 0x130
	::System::Int32 EAGOPFAAFBI; // 0x138
	::Class_3_AC01FCB2512C56A9_CenterStyle BBBKGGIHHJE; // 0x13C
	::RPG::GameCore::FixPoint OLCAMCCPFGB; // 0x140
	::RPG::GameCore::FixPoint FADFHGIJLCK; // 0x148

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
