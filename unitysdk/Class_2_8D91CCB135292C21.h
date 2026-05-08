#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_8D91CCB135292C21_Class_2_3DD13681DECC4A27;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_8D91CCB135292C21_METHOD_2_2D8360ADEC831C05_OFFSET UNITYSDK_OFFSET(0x13B0A9B0)
#define CLASS_2_8D91CCB135292C21_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x13B0ABE0)
#define CLASS_2_8D91CCB135292C21_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13B0ACB0)
#define CLASS_2_8D91CCB135292C21__CTOR_OFFSET UNITYSDK_OFFSET(0x13B0ACA0)

inline static constexpr unsigned int Class_2_8D91CCB135292C21_TypeDefinitionIndex = 64843;

class Class_2_8D91CCB135292C21 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Text* Field_2_2; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x28
	::Class_2_0D31A1661D004892<::Class_2_8D91CCB135292C21_Class_2_3DD13681DECC4A27*>* Field_2_5; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x38
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x40
	::UnityEngine::UI::Text* Field_2_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D91CCB135292C21__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2D8360ADEC831C05(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8D91CCB135292C21_METHOD_2_2D8360ADEC831C05_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8D91CCB135292C21_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D91CCB135292C21_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
