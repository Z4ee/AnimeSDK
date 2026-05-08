#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class ImgTextParserBase; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_A1F4FC94B94759E1_METHOD_2_2D8360ADEC831C05_OFFSET UNITYSDK_OFFSET(0x11C06770)
#define CLASS_2_A1F4FC94B94759E1_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x11C06970)
#define CLASS_2_A1F4FC94B94759E1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x11C06A40)
#define CLASS_2_A1F4FC94B94759E1__CTOR_OFFSET UNITYSDK_OFFSET(0x11C06A30)

inline static constexpr unsigned int Class_2_A1F4FC94B94759E1_TypeDefinitionIndex = 50593;

class Class_2_A1F4FC94B94759E1 : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::ImgTextParserBase* Field_2_1; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x28
	::UnityEngine::Transform* Field_2_4; // 0x30
	::UnityEngine::RectTransform* Field_2_6; // 0x38
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1F4FC94B94759E1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2D8360ADEC831C05(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A1F4FC94B94759E1_METHOD_2_2D8360ADEC831C05_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A1F4FC94B94759E1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1F4FC94B94759E1_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
