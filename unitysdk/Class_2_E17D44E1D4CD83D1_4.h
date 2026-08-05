#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_E17D44E1D4CD83D1_4_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x13B179B0)
#define CLASS_2_E17D44E1D4CD83D1_4_METHOD_2_A52A279C28A2006E_OFFSET UNITYSDK_OFFSET(0x13B17820)
#define CLASS_2_E17D44E1D4CD83D1_4_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13B17AA0)
#define CLASS_2_E17D44E1D4CD83D1_4__CTOR_OFFSET UNITYSDK_OFFSET(0x13B17A90)

inline static constexpr unsigned int Class_2_E17D44E1D4CD83D1_4_TypeDefinitionIndex = 79598;

class Class_2_E17D44E1D4CD83D1_4 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E17D44E1D4CD83D1_4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A52A279C28A2006E(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E17D44E1D4CD83D1_4_METHOD_2_A52A279C28A2006E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E17D44E1D4CD83D1_4_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E17D44E1D4CD83D1_4_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}
};
