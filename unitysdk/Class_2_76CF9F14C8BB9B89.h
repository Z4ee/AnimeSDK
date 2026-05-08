#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UIToggleButton; }

#define CLASS_2_76CF9F14C8BB9B89_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0x12B88180)
#define CLASS_2_76CF9F14C8BB9B89_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x12B88330)
#define CLASS_2_76CF9F14C8BB9B89_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12B88400)
#define CLASS_2_76CF9F14C8BB9B89__CTOR_OFFSET UNITYSDK_OFFSET(0x12B883F0)

inline static constexpr unsigned int Class_2_76CF9F14C8BB9B89_TypeDefinitionIndex = 69826;

class Class_2_76CF9F14C8BB9B89 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UIToggleButton* Field_2_5; // 0x18
	::UnityEngine::Transform* Field_2_0; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x28
	::UnityEngine::Transform* Field_2_1; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76CF9F14C8BB9B89__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_76CF9F14C8BB9B89_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76CF9F14C8BB9B89_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_76CF9F14C8BB9B89_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
