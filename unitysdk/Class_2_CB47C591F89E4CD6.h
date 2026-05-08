#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_CB47C591F89E4CD6_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0x111D9F70)
#define CLASS_2_CB47C591F89E4CD6_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x111DA110)
#define CLASS_2_CB47C591F89E4CD6_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x111DA200)
#define CLASS_2_CB47C591F89E4CD6__CTOR_OFFSET UNITYSDK_OFFSET(0x111DA1F0)

inline static constexpr unsigned int Class_2_CB47C591F89E4CD6_TypeDefinitionIndex = 40510;

class Class_2_CB47C591F89E4CD6 : public ::Class_1_EEA0111A28582B57
{
public:
	::MonoUITableScrollV2* Field_2_0; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x28
	::UnityEngine::Animation* Field_2_3; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB47C591F89E4CD6__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_CB47C591F89E4CD6_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_CB47C591F89E4CD6_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB47C591F89E4CD6_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}
};
