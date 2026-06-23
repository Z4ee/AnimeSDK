#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E87F1D15F1D4AC72.h"

class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class ImgTextSkillParser; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_3_D5B3B863F188DEDE_METHOD_3_0C88AB06D46E777A_OFFSET UNITYSDK_OFFSET(0x153F84F0)
#define CLASS_3_D5B3B863F188DEDE_METHOD_3_23ED85BF4DF708E4_OFFSET UNITYSDK_OFFSET(0x153F86D0)
#define CLASS_3_D5B3B863F188DEDE_METHOD_3_6A3AD666D3CC56B6_OFFSET UNITYSDK_OFFSET(0x153F86E0)
#define CLASS_3_D5B3B863F188DEDE_METHOD_3_75DFEB80B8242053_OFFSET UNITYSDK_OFFSET(0x153F86C0)
#define CLASS_3_D5B3B863F188DEDE_METHOD_3_D33F8087E6D98A2B_OFFSET UNITYSDK_OFFSET(0x153F86F0)
#define CLASS_3_D5B3B863F188DEDE_METHOD_3_FA1CF250E644264D_OFFSET UNITYSDK_OFFSET(0x153F8440)
#define CLASS_3_D5B3B863F188DEDE__CTOR_OFFSET UNITYSDK_OFFSET(0x153F8630)

inline static constexpr unsigned int Class_3_D5B3B863F188DEDE_TypeDefinitionIndex = 53817;

class Class_3_D5B3B863F188DEDE : public ::Class_2_E87F1D15F1D4AC72
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_3_1; // 0x28
	::MoleMole::ImgTextSkillParser* Field_3_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D5B3B863F188DEDE__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_FA1CF250E644264D(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_D5B3B863F188DEDE_METHOD_3_FA1CF250E644264D_OFFSET))(this, a1, a2);
	}

	::MoleMole::ImgTextSkillParser* Method_3_75DFEB80B8242053()
	{
		return ((::MoleMole::ImgTextSkillParser*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D5B3B863F188DEDE_METHOD_3_75DFEB80B8242053_OFFSET))(this);
	}

	::System::Void Method_3_23ED85BF4DF708E4(::MoleMole::ImgTextSkillParser* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ImgTextSkillParser*))((::PBYTE)hIl2Cpp + CLASS_3_D5B3B863F188DEDE_METHOD_3_23ED85BF4DF708E4_OFFSET))(this, a1);
	}

	::System::Void Method_3_0C88AB06D46E777A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D5B3B863F188DEDE_METHOD_3_0C88AB06D46E777A_OFFSET))(this);
	}

	::UnityEngine::UI::Extension::UILocalizationText* Method_3_6A3AD666D3CC56B6()
	{
		return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D5B3B863F188DEDE_METHOD_3_6A3AD666D3CC56B6_OFFSET))(this);
	}

	::System::Void Method_3_D33F8087E6D98A2B(::UnityEngine::UI::Extension::UILocalizationText* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + CLASS_3_D5B3B863F188DEDE_METHOD_3_D33F8087E6D98A2B_OFFSET))(this, a1);
	}
};
