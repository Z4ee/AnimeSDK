#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_D2412F24B43693FD_6_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x151F0F00)
#define CLASS_2_D2412F24B43693FD_6_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x151F0FB0)
#define CLASS_2_D2412F24B43693FD_6_METHOD_2_D0F74BA0038650D0_OFFSET UNITYSDK_OFFSET(0x151F0D40)
#define CLASS_2_D2412F24B43693FD_6__CTOR_OFFSET UNITYSDK_OFFSET(0x151F0FA0)

inline static constexpr unsigned int Class_2_D2412F24B43693FD_6_TypeDefinitionIndex = 68868;

class Class_2_D2412F24B43693FD_6 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x30
	::MonoUITableScrollV2* Field_2_0; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2412F24B43693FD_6__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D0F74BA0038650D0(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D2412F24B43693FD_6_METHOD_2_D0F74BA0038650D0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2412F24B43693FD_6_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D2412F24B43693FD_6_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
