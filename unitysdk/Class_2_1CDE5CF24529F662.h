#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIActivitySeriesNormalRewardWidgetController; }
namespace MoleMole { class UIActivitySeriesRoleRowWidgetController; }
namespace MoleMole { class UIActivitySeriesSpecialRewardWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_30A064D7BE47C07D;

#define CLASS_2_1CDE5CF24529F662_METHOD_2_191A9A85D6182D22_OFFSET UNITYSDK_OFFSET(0x138E8810)
#define CLASS_2_1CDE5CF24529F662_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x138E89F0)
#define CLASS_2_1CDE5CF24529F662_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x138E8A80)
#define CLASS_2_1CDE5CF24529F662_METHOD_2_D0F74BA0038650D0_OFFSET UNITYSDK_OFFSET(0x138E8470)
#define CLASS_2_1CDE5CF24529F662_METHOD_2_EEC63DB58EA83B9A_OFFSET UNITYSDK_OFFSET(0x138E8630)
#define CLASS_2_1CDE5CF24529F662__CTOR_OFFSET UNITYSDK_OFFSET(0x138E8A70)

inline static constexpr unsigned int Class_2_1CDE5CF24529F662_TypeDefinitionIndex = 80598;

class Class_2_1CDE5CF24529F662 : public ::Class_1_EEA0111A28582B57
{
public:
	::System::Collections::Generic::List_1<::Class_3_30A064D7BE47C07D<::MoleMole::UIActivitySeriesRoleRowWidgetController*>*>* Field_2_4; // 0x18
	::System::Collections::Generic::List_1<::Class_3_30A064D7BE47C07D<::MoleMole::UIActivitySeriesNormalRewardWidgetController*>*>* Field_2_2; // 0x20
	::Class_3_30A064D7BE47C07D<::MoleMole::UIActivitySeriesSpecialRewardWidgetController*>* Field_2_3; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1CDE5CF24529F662__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D0F74BA0038650D0(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1CDE5CF24529F662_METHOD_2_D0F74BA0038650D0_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_3_30A064D7BE47C07D<::MoleMole::UIActivitySeriesNormalRewardWidgetController*>*>* Method_2_EEC63DB58EA83B9A(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_30A064D7BE47C07D<::MoleMole::UIActivitySeriesNormalRewardWidgetController*>*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1CDE5CF24529F662_METHOD_2_EEC63DB58EA83B9A_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_3_30A064D7BE47C07D<::MoleMole::UIActivitySeriesRoleRowWidgetController*>*>* Method_2_191A9A85D6182D22(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_30A064D7BE47C07D<::MoleMole::UIActivitySeriesRoleRowWidgetController*>*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1CDE5CF24529F662_METHOD_2_191A9A85D6182D22_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1CDE5CF24529F662_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1CDE5CF24529F662_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
