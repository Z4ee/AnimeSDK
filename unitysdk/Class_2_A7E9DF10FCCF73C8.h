#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_A7E9DF10FCCF73C8_Class_2_CC03AAEE6FCC732C_3;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_A7E9DF10FCCF73C8_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0x13E28400)
#define CLASS_2_A7E9DF10FCCF73C8_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x13E285E0)
#define CLASS_2_A7E9DF10FCCF73C8_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13E286D0)
#define CLASS_2_A7E9DF10FCCF73C8__CTOR_OFFSET UNITYSDK_OFFSET(0x13E286C0)

inline static constexpr unsigned int Class_2_A7E9DF10FCCF73C8_TypeDefinitionIndex = 43631;

class Class_2_A7E9DF10FCCF73C8 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x28
	::Class_2_0D31A1661D004892<::Class_2_A7E9DF10FCCF73C8_Class_2_CC03AAEE6FCC732C_3*>* Field_2_5; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A7E9DF10FCCF73C8__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A7E9DF10FCCF73C8_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A7E9DF10FCCF73C8_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A7E9DF10FCCF73C8_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
