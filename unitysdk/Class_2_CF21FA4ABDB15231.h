#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_CF21FA4ABDB15231_METHOD_2_63BBC99244640EE0_OFFSET UNITYSDK_OFFSET(0x15BBB400)
#define CLASS_2_CF21FA4ABDB15231_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x15BBB600)
#define CLASS_2_CF21FA4ABDB15231_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x15BBB6F0)
#define CLASS_2_CF21FA4ABDB15231__CTOR_OFFSET UNITYSDK_OFFSET(0x15BBB6E0)

inline static constexpr unsigned int Class_2_CF21FA4ABDB15231_TypeDefinitionIndex = 84698;

class Class_2_CF21FA4ABDB15231 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_5; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_10; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x28
	::UnityEngine::GameObject* Field_2_4; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x38
	::UnityEngine::Animation* Field_2_0; // 0x40
	::UnityEngine::GameObject* Field_2_6; // 0x48
	::UnityEngine::GameObject* Field_2_7; // 0x50
	::Class_2_1A39E1B51756BF41* Field_2_11; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CF21FA4ABDB15231__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_63BBC99244640EE0(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_CF21FA4ABDB15231_METHOD_2_63BBC99244640EE0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_CF21FA4ABDB15231_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CF21FA4ABDB15231_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}
};
