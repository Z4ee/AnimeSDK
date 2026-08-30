#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/Class_2_99AE43441189916F_Struct_2_F4FD9E85E8CC031F.h"
#include "unitysdk/RPG/GameCore/SpecialBPDisplayStyle.h"

class Class_1_8D1F4CBFE61774F3;
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client { class RPGAnimationEvent; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_99AE43441189916F_GET_BPSTYLE_OFFSET UNITYSDK_OFFSET(0x15CE14E0)
#define CLASS_2_99AE43441189916F_METHOD_2_078D85152011B919_1_OFFSET UNITYSDK_OFFSET(0x15CE0E20)
#define CLASS_2_99AE43441189916F_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x15CE0DC0)
#define CLASS_2_99AE43441189916F_METHOD_2_0B1EB5C9B94BAB66_OFFSET UNITYSDK_OFFSET(0x15CE1630)
#define CLASS_2_99AE43441189916F_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x15CE1500)
#define CLASS_2_99AE43441189916F_METHOD_2_35785E988ABA54BD_OFFSET UNITYSDK_OFFSET(0x15CE1080)
#define CLASS_2_99AE43441189916F_METHOD_2_45E06D1A6A217312_OFFSET UNITYSDK_OFFSET(0x15CE11E0)
#define CLASS_2_99AE43441189916F_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x15CE1490)
#define CLASS_2_99AE43441189916F_METHOD_2_F641587F832F1EE5_OFFSET UNITYSDK_OFFSET(0x15CE0E90)
#define CLASS_2_99AE43441189916F_SET_BPSTYLE_OFFSET UNITYSDK_OFFSET(0x15CE14F0)
#define CLASS_2_99AE43441189916F__CTOR_OFFSET UNITYSDK_OFFSET(0x15CE16E0)
#define CLASS_2_99AE43441189916F___ONEFFECTFINISH_B__19_0_OFFSET UNITYSDK_OFFSET(0x15CE1710)

inline static constexpr unsigned int Class_2_99AE43441189916F_TypeDefinitionIndex = 71449;

class Class_2_99AE43441189916F : public ::Class_1_34917908B7833130
{
public:
	::UnityEngine::Transform* CDJGLKECPHI; // 0x60
	::Class_2_99AE43441189916F_Struct_2_F4FD9E85E8CC031F CBGJNJGLGAG; // 0x68
	::RPG::Client::RPGAnimationEvent* MEDGLNFKGDC; // 0x90
	::RPG::Client::PrefabLoadMeta* MIOEBLHIJHL; // 0x98
	::UnityEngine::UI::Image* EIAEMNMJOJI; // 0xA0
	::UnityEngine::Transform* EPBGHBLAOCO; // 0xA8
	::UnityEngine::Transform* FIACEDOMPEA; // 0xB0
	::UnityEngine::Animation* JPHOOFFIAAH; // 0xB8
	::UnityEngine::Transform* MFCELDGNMON; // 0xC0
	::UnityEngine::Transform* GHGAKNDLKGM; // 0xC8
	::UnityEngine::Transform* HHJBHFGCBPN; // 0xD0
	::RPG::GameCore::SpecialBPDisplayStyle _BPStyle_k__BackingField; // 0xD8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99AE43441189916F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99AE43441189916F_METHOD_2_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_2_078D85152011B919_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99AE43441189916F_METHOD_2_078D85152011B919_1_OFFSET))(this);
	}

	::System::Void Method_2_F641587F832F1EE5(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_99AE43441189916F_METHOD_2_F641587F832F1EE5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_35785E988ABA54BD(::Class_1_8D1F4CBFE61774F3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8D1F4CBFE61774F3*))((::PBYTE)hIl2Cpp + CLASS_2_99AE43441189916F_METHOD_2_35785E988ABA54BD_OFFSET))(this, a1);
	}

	::System::Void Method_2_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99AE43441189916F_METHOD_2_E11AC65AA0DC2249_OFFSET))(this);
	}

	::RPG::GameCore::SpecialBPDisplayStyle get_BPStyle()
	{
		return ((::RPG::GameCore::SpecialBPDisplayStyle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99AE43441189916F_GET_BPSTYLE_OFFSET))(this);
	}

	::System::Void set_BPStyle(::RPG::GameCore::SpecialBPDisplayStyle a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SpecialBPDisplayStyle))((::PBYTE)hIl2Cpp + CLASS_2_99AE43441189916F_SET_BPSTYLE_OFFSET))(this, a1);
	}

	::System::Void Method_2_45E06D1A6A217312(::Class_1_8D1F4CBFE61774F3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8D1F4CBFE61774F3*))((::PBYTE)hIl2Cpp + CLASS_2_99AE43441189916F_METHOD_2_45E06D1A6A217312_OFFSET))(this, a1);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99AE43441189916F_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Boolean Method_2_0B1EB5C9B94BAB66()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99AE43441189916F_METHOD_2_0B1EB5C9B94BAB66_OFFSET))(this);
	}

	::System::Void __OnEffectFinish_b__19_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99AE43441189916F___ONEFFECTFINISH_B__19_0_OFFSET))(this);
	}
};
