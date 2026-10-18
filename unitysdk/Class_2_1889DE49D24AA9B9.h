#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/Class_2_1889DE49D24AA9B9_Struct_2_F4FD9E85E8CC031F.h"
#include "unitysdk/RPG/GameCore/SpecialBPDisplayStyle.h"

class Class_1_8D1F4CBFE61774F3;
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client { class RPGAnimationEvent; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_1889DE49D24AA9B9_GET_BPSTYLE_OFFSET UNITYSDK_OFFSET(0x15EA62C0)
#define CLASS_2_1889DE49D24AA9B9_METHOD_2_078D85152011B919_1_OFFSET UNITYSDK_OFFSET(0x15EA5C00)
#define CLASS_2_1889DE49D24AA9B9_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x15EA5BA0)
#define CLASS_2_1889DE49D24AA9B9_METHOD_2_0B1EB5C9B94BAB66_OFFSET UNITYSDK_OFFSET(0x15EA6390)
#define CLASS_2_1889DE49D24AA9B9_METHOD_2_35785E988ABA54BD_OFFSET UNITYSDK_OFFSET(0x15EA5E60)
#define CLASS_2_1889DE49D24AA9B9_METHOD_2_3AC94EEB348AAF2D_OFFSET UNITYSDK_OFFSET(0x15EA62E0)
#define CLASS_2_1889DE49D24AA9B9_METHOD_2_45E06D1A6A217312_OFFSET UNITYSDK_OFFSET(0x15EA5FC0)
#define CLASS_2_1889DE49D24AA9B9_METHOD_2_757572C680FEB11C_OFFSET UNITYSDK_OFFSET(0x15EA5C70)
#define CLASS_2_1889DE49D24AA9B9_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x15EA6270)
#define CLASS_2_1889DE49D24AA9B9_SET_BPSTYLE_OFFSET UNITYSDK_OFFSET(0x15EA62D0)
#define CLASS_2_1889DE49D24AA9B9__CTOR_OFFSET UNITYSDK_OFFSET(0x15EA6440)
#define CLASS_2_1889DE49D24AA9B9___ONEFFECTFINISH_B__19_0_OFFSET UNITYSDK_OFFSET(0x15EA6470)

inline static constexpr unsigned int Class_2_1889DE49D24AA9B9_TypeDefinitionIndex = 71491;

class Class_2_1889DE49D24AA9B9 : public ::Class_1_34917908B7833130
{
public:
	::UnityEngine::Transform* CDJGLKECPHI; // 0x60
	::RPG::Client::RPGAnimationEvent* MEDGLNFKGDC; // 0x68
	::RPG::Client::PrefabLoadMeta* MIOEBLHIJHL; // 0x70
	::UnityEngine::Transform* EPBGHBLAOCO; // 0x78
	::UnityEngine::UI::Image* EIAEMNMJOJI; // 0x80
	::UnityEngine::Transform* GHGAKNDLKGM; // 0x88
	::UnityEngine::Transform* FIACEDOMPEA; // 0x90
	::UnityEngine::Transform* HHJBHFGCBPN; // 0x98
	::Class_2_1889DE49D24AA9B9_Struct_2_F4FD9E85E8CC031F CBGJNJGLGAG; // 0xA0
	::UnityEngine::Transform* MFCELDGNMON; // 0xC8
	::UnityEngine::Animation* JPHOOFFIAAH; // 0xD0
	::RPG::GameCore::SpecialBPDisplayStyle _BPStyle_k__BackingField; // 0xD8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1889DE49D24AA9B9__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1889DE49D24AA9B9_METHOD_2_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_2_078D85152011B919_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1889DE49D24AA9B9_METHOD_2_078D85152011B919_1_OFFSET))(this);
	}

	::System::Void Method_2_757572C680FEB11C(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1889DE49D24AA9B9_METHOD_2_757572C680FEB11C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_35785E988ABA54BD(::Class_1_8D1F4CBFE61774F3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8D1F4CBFE61774F3*))((::PBYTE)hIl2Cpp + CLASS_2_1889DE49D24AA9B9_METHOD_2_35785E988ABA54BD_OFFSET))(this, a1);
	}

	::System::Void Method_2_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1889DE49D24AA9B9_METHOD_2_E11AC65AA0DC2249_OFFSET))(this);
	}

	::RPG::GameCore::SpecialBPDisplayStyle get_BPStyle()
	{
		return ((::RPG::GameCore::SpecialBPDisplayStyle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1889DE49D24AA9B9_GET_BPSTYLE_OFFSET))(this);
	}

	::System::Void set_BPStyle(::RPG::GameCore::SpecialBPDisplayStyle a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SpecialBPDisplayStyle))((::PBYTE)hIl2Cpp + CLASS_2_1889DE49D24AA9B9_SET_BPSTYLE_OFFSET))(this, a1);
	}

	::System::Void Method_2_45E06D1A6A217312(::Class_1_8D1F4CBFE61774F3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8D1F4CBFE61774F3*))((::PBYTE)hIl2Cpp + CLASS_2_1889DE49D24AA9B9_METHOD_2_45E06D1A6A217312_OFFSET))(this, a1);
	}

	::System::Void Method_2_3AC94EEB348AAF2D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1889DE49D24AA9B9_METHOD_2_3AC94EEB348AAF2D_OFFSET))(this);
	}

	::System::Boolean Method_2_0B1EB5C9B94BAB66()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1889DE49D24AA9B9_METHOD_2_0B1EB5C9B94BAB66_OFFSET))(this);
	}

	::System::Void __OnEffectFinish_b__19_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1889DE49D24AA9B9___ONEFFECTFINISH_B__19_0_OFFSET))(this);
	}
};
