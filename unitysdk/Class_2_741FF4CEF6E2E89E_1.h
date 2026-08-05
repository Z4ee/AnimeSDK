#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_741FF4CEF6E2E89E_1_METHOD_2_2B52DBEEACA798D8_OFFSET UNITYSDK_OFFSET(0x12B52CD0)
#define CLASS_2_741FF4CEF6E2E89E_1_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x12B52E80)
#define CLASS_2_741FF4CEF6E2E89E_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12B52F50)
#define CLASS_2_741FF4CEF6E2E89E_1__CTOR_OFFSET UNITYSDK_OFFSET(0x12B52F40)

inline static constexpr unsigned int Class_2_741FF4CEF6E2E89E_1_TypeDefinitionIndex = 79582;

class Class_2_741FF4CEF6E2E89E_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x30
	::UnityEngine::GameObject* Field_2_6; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_741FF4CEF6E2E89E_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2B52DBEEACA798D8(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_741FF4CEF6E2E89E_1_METHOD_2_2B52DBEEACA798D8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_741FF4CEF6E2E89E_1_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_741FF4CEF6E2E89E_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
