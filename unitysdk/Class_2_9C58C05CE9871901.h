#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class Class_2_CA67A9CEB871FFD3;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_9C58C05CE9871901_METHOD_2_43ED31B02AD5E38E_OFFSET UNITYSDK_OFFSET(0xD08D230)
#define CLASS_2_9C58C05CE9871901_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0xD08D3E0)
#define CLASS_2_9C58C05CE9871901_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xD08D490)
#define CLASS_2_9C58C05CE9871901__CTOR_OFFSET UNITYSDK_OFFSET(0xD08D480)

inline static constexpr unsigned int Class_2_9C58C05CE9871901_TypeDefinitionIndex = 49134;

class Class_2_9C58C05CE9871901 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_CA67A9CEB871FFD3* Field_2_3; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x28
	::MoleMole::UIGeneralButtonController* Field_2_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C58C05CE9871901__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_43ED31B02AD5E38E(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9C58C05CE9871901_METHOD_2_43ED31B02AD5E38E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9C58C05CE9871901_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C58C05CE9871901_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
