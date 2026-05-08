#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_AA176E60A895452E_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x1353B4B0)
#define CLASS_2_AA176E60A895452E_METHOD_2_B6EEC4B10357AB73_OFFSET UNITYSDK_OFFSET(0x1353B290)
#define CLASS_2_AA176E60A895452E_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1353B580)
#define CLASS_2_AA176E60A895452E__CTOR_OFFSET UNITYSDK_OFFSET(0x1353B570)

inline static constexpr unsigned int Class_2_AA176E60A895452E_TypeDefinitionIndex = 65150;

class Class_2_AA176E60A895452E : public ::Class_1_EEA0111A28582B57
{
public:
	::MonoUITableScrollV2* Field_2_3; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_6; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0x30
	::MoleMole::UIGeneralButtonController* Field_2_5; // 0x38
	::MoleMole::UIGeneralButtonController* Field_2_4; // 0x40
	::UnityEngine::RectTransform* Field_2_1; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA176E60A895452E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B6EEC4B10357AB73(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_AA176E60A895452E_METHOD_2_B6EEC4B10357AB73_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_AA176E60A895452E_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA176E60A895452E_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
