#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_00E0F6A4450214AA_8_METHOD_2_43ED31B02AD5E38E_OFFSET UNITYSDK_OFFSET(0x14683000)
#define CLASS_2_00E0F6A4450214AA_8_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x14683170)
#define CLASS_2_00E0F6A4450214AA_8_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x14683260)
#define CLASS_2_00E0F6A4450214AA_8__CTOR_OFFSET UNITYSDK_OFFSET(0x14683250)

inline static constexpr unsigned int Class_2_00E0F6A4450214AA_8_TypeDefinitionIndex = 71929;

class Class_2_00E0F6A4450214AA_8 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00E0F6A4450214AA_8__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_43ED31B02AD5E38E(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_00E0F6A4450214AA_8_METHOD_2_43ED31B02AD5E38E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00E0F6A4450214AA_8_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_00E0F6A4450214AA_8_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
