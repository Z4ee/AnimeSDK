#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIActivitySeriesNormalRewardWidgetController; }
namespace MoleMole { class UIActivitySeriesRoleRowWidgetController; }
namespace MoleMole { class UIActivitySeriesSpecialRewardWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_937C6012EF191D14_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x12AEC5B0)
#define CLASS_2_937C6012EF191D14_METHOD_2_3D955C47645B600C_OFFSET UNITYSDK_OFFSET(0x12AEC3D0)
#define CLASS_2_937C6012EF191D14_METHOD_2_6C8CA9C9FE12E3C4_OFFSET UNITYSDK_OFFSET(0x12AEC1F0)
#define CLASS_2_937C6012EF191D14_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12AEC640)
#define CLASS_2_937C6012EF191D14_METHOD_2_D0F74BA0038650D0_OFFSET UNITYSDK_OFFSET(0x12AEC030)
#define CLASS_2_937C6012EF191D14__CTOR_OFFSET UNITYSDK_OFFSET(0x12AEC630)

inline static constexpr unsigned int Class_2_937C6012EF191D14_TypeDefinitionIndex = 62952;

class Class_2_937C6012EF191D14 : public ::Class_1_EEA0111A28582B57
{
public:
	::System::Collections::Generic::List_1<::Class_3_826A30478DA34A69<::MoleMole::UIActivitySeriesRoleRowWidgetController*>*>* Field_2_4; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x20
	::Class_3_826A30478DA34A69<::MoleMole::UIActivitySeriesSpecialRewardWidgetController*>* Field_2_5; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x30
	::System::Collections::Generic::List_1<::Class_3_826A30478DA34A69<::MoleMole::UIActivitySeriesNormalRewardWidgetController*>*>* Field_2_6; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_937C6012EF191D14__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D0F74BA0038650D0(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_937C6012EF191D14_METHOD_2_D0F74BA0038650D0_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_3_826A30478DA34A69<::MoleMole::UIActivitySeriesRoleRowWidgetController*>*>* Method_2_3D955C47645B600C(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_826A30478DA34A69<::MoleMole::UIActivitySeriesRoleRowWidgetController*>*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_937C6012EF191D14_METHOD_2_3D955C47645B600C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_937C6012EF191D14_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_937C6012EF191D14_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_3_826A30478DA34A69<::MoleMole::UIActivitySeriesNormalRewardWidgetController*>*>* Method_2_6C8CA9C9FE12E3C4(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_826A30478DA34A69<::MoleMole::UIActivitySeriesNormalRewardWidgetController*>*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_937C6012EF191D14_METHOD_2_6C8CA9C9FE12E3C4_OFFSET))(this, a1, a2);
	}
};
