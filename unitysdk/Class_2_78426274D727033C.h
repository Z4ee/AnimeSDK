#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

class Class_1_6CE70F4211D79CD5_7;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class UIValueChangeAnimation; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Slider; }

#define CLASS_2_78426274D727033C_METHOD_2_0C88AB06D46E777A_OFFSET UNITYSDK_OFFSET(0xC3A2F50)
#define CLASS_2_78426274D727033C_METHOD_2_88AB60EC06BE78FB_OFFSET UNITYSDK_OFFSET(0xC3A3290)
#define CLASS_2_78426274D727033C_METHOD_2_8C4AEC0BC1CA0CB4_OFFSET UNITYSDK_OFFSET(0xC3A3640)
#define CLASS_2_78426274D727033C_METHOD_2_AE9E77FF7B97F535_OFFSET UNITYSDK_OFFSET(0xC3A30D0)
#define CLASS_2_78426274D727033C_METHOD_2_D2A08F3D951A0C1D_OFFSET UNITYSDK_OFFSET(0xC3A3550)
#define CLASS_2_78426274D727033C__CTOR_OFFSET UNITYSDK_OFFSET(0xC3A3720)
#define CLASS_2_78426274D727033C__ONBIND_OFFSET UNITYSDK_OFFSET(0xC3A2E30)

inline static constexpr unsigned int Class_2_78426274D727033C_TypeDefinitionIndex = 71551;

class Class_2_78426274D727033C : public ::Class_1_34917908B7833130
{
public:
	::UnityEngine::UI::Image* CHHAAJJCMCF; // 0x60
	::RPG::Client::UIValueChangeAnimation* OOMNKEIGLPJ; // 0x68
	::UnityEngine::UI::Slider* KDAOJGPBBBG; // 0x70
	::RPG::Client::LocalizedText* ENKFGNANAEC; // 0x78
	::RPG::Client::UIValueChangeAnimation* PNCGEDHHLFE; // 0x80
	::RPG::Client::LocalizedText* GGMELAEAODG; // 0x88
	::System::Boolean BMPFONACADL; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78426274D727033C__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78426274D727033C__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_0C88AB06D46E777A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78426274D727033C_METHOD_2_0C88AB06D46E777A_OFFSET))(this);
	}

	::System::Void Method_2_AE9E77FF7B97F535(::Class_1_6CE70F4211D79CD5_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6CE70F4211D79CD5_7*))((::PBYTE)hIl2Cpp + CLASS_2_78426274D727033C_METHOD_2_AE9E77FF7B97F535_OFFSET))(this, a1);
	}

	::System::Void Method_2_88AB60EC06BE78FB(::Class_1_6CE70F4211D79CD5_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6CE70F4211D79CD5_7*))((::PBYTE)hIl2Cpp + CLASS_2_78426274D727033C_METHOD_2_88AB60EC06BE78FB_OFFSET))(this, a1);
	}

	::System::Void Method_2_D2A08F3D951A0C1D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_78426274D727033C_METHOD_2_D2A08F3D951A0C1D_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C4AEC0BC1CA0CB4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_78426274D727033C_METHOD_2_8C4AEC0BC1CA0CB4_OFFSET))(this, a1);
	}
};
