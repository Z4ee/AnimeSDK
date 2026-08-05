#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_CE751D957B54564C_METHOD_2_5B900C0AEB2813BC_OFFSET UNITYSDK_OFFSET(0x19F65AA0)
#define CLASS_2_CE751D957B54564C_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x19F65C90)
#define CLASS_2_CE751D957B54564C_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x19F65D90)
#define CLASS_2_CE751D957B54564C__CTOR_OFFSET UNITYSDK_OFFSET(0x19F65D80)

inline static constexpr unsigned int Class_2_CE751D957B54564C_TypeDefinitionIndex = 43725;

class Class_2_CE751D957B54564C : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x18
	::MoleMole::MonoGamepadModule* Field_2_1; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0x38
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE751D957B54564C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5B900C0AEB2813BC(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_CE751D957B54564C_METHOD_2_5B900C0AEB2813BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_CE751D957B54564C_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE751D957B54564C_METHOD_2_737220D2233A9067_OFFSET))(this);
	}
};
