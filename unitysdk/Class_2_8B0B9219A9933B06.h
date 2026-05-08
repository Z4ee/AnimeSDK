#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIStrategyGuideSkillRecommendRowWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_3_30A064D7BE47C07D;

#define CLASS_2_8B0B9219A9933B06_METHOD_2_133ED87EA1512E24_OFFSET UNITYSDK_OFFSET(0x13B23E00)
#define CLASS_2_8B0B9219A9933B06_METHOD_2_7879E8D5956B4E2C_OFFSET UNITYSDK_OFFSET(0x13B23CB0)
#define CLASS_2_8B0B9219A9933B06_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13B24030)
#define CLASS_2_8B0B9219A9933B06_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13B23FE0)
#define CLASS_2_8B0B9219A9933B06__CTOR_OFFSET UNITYSDK_OFFSET(0x13B24020)

inline static constexpr unsigned int Class_2_8B0B9219A9933B06_TypeDefinitionIndex = 55120;

class Class_2_8B0B9219A9933B06 : public ::Class_1_EEA0111A28582B57
{
public:
	::System::Collections::Generic::List_1<::Class_3_30A064D7BE47C07D<::MoleMole::UIStrategyGuideSkillRecommendRowWidgetController*>*>* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B0B9219A9933B06__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7879E8D5956B4E2C(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8B0B9219A9933B06_METHOD_2_7879E8D5956B4E2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8B0B9219A9933B06_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B0B9219A9933B06_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_3_30A064D7BE47C07D<::MoleMole::UIStrategyGuideSkillRecommendRowWidgetController*>*>* Method_2_133ED87EA1512E24(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_30A064D7BE47C07D<::MoleMole::UIStrategyGuideSkillRecommendRowWidgetController*>*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8B0B9219A9933B06_METHOD_2_133ED87EA1512E24_OFFSET))(this, a1, a2);
	}
};
