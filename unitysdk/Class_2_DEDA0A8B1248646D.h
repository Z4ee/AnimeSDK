#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralFilterItemRowWidgetController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_DEDA0A8B1248646D_METHOD_2_4F04DC1F998B4F77_OFFSET UNITYSDK_OFFSET(0x171C5560)
#define CLASS_2_DEDA0A8B1248646D_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x171C5700)
#define CLASS_2_DEDA0A8B1248646D_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x171C57F0)
#define CLASS_2_DEDA0A8B1248646D__CTOR_OFFSET UNITYSDK_OFFSET(0x171C57E0)

inline static constexpr unsigned int Class_2_DEDA0A8B1248646D_TypeDefinitionIndex = 67089;

class Class_2_DEDA0A8B1248646D : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_826A30478DA34A69<::MoleMole::UIGeneralFilterItemRowWidgetController*>* Field_2_1; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DEDA0A8B1248646D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4F04DC1F998B4F77(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DEDA0A8B1248646D_METHOD_2_4F04DC1F998B4F77_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DEDA0A8B1248646D_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DEDA0A8B1248646D_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
