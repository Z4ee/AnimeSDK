#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class ImgTextParserBase; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::Video { class VideoPlayer; }

#define CLASS_2_5F3C3489C387373C_METHOD_2_30765AFAABE3B930_OFFSET UNITYSDK_OFFSET(0xF29D6F0)
#define CLASS_2_5F3C3489C387373C_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0xF29D8E0)
#define CLASS_2_5F3C3489C387373C_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xF29D9D0)
#define CLASS_2_5F3C3489C387373C__CTOR_OFFSET UNITYSDK_OFFSET(0xF29D9C0)

inline static constexpr unsigned int Class_2_5F3C3489C387373C_TypeDefinitionIndex = 57899;

class Class_2_5F3C3489C387373C : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x18
	::MoleMole::ImgTextParserBase* Field_2_5; // 0x20
	::UnityEngine::Video::VideoPlayer* Field_2_7; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x40
	::UnityEngine::Animation* Field_2_6; // 0x48
	::UnityEngine::Animation* Field_2_4; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F3C3489C387373C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_30765AFAABE3B930(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5F3C3489C387373C_METHOD_2_30765AFAABE3B930_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5F3C3489C387373C_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F3C3489C387373C_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}
};
