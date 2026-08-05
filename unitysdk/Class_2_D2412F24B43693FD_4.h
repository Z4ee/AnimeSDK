#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_D2412F24B43693FD_4_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x1463C960)
#define CLASS_2_D2412F24B43693FD_4_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1463CA10)
#define CLASS_2_D2412F24B43693FD_4_METHOD_2_D0F74BA0038650D0_OFFSET UNITYSDK_OFFSET(0x1463C7A0)
#define CLASS_2_D2412F24B43693FD_4__CTOR_OFFSET UNITYSDK_OFFSET(0x1463CA00)

inline static constexpr unsigned int Class_2_D2412F24B43693FD_4_TypeDefinitionIndex = 73632;

class Class_2_D2412F24B43693FD_4 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_7; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_6; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_11; // 0x38
	::MonoUITableScrollV2* Field_2_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2412F24B43693FD_4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D0F74BA0038650D0(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D2412F24B43693FD_4_METHOD_2_D0F74BA0038650D0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2412F24B43693FD_4_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D2412F24B43693FD_4_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
