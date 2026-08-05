#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIAbyssArpeggioTalentItemWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_0D6FE6AD5E3D1C19_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x1403A6C0)
#define CLASS_2_0D6FE6AD5E3D1C19_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1403A790)
#define CLASS_2_0D6FE6AD5E3D1C19_METHOD_2_DEAB13C453E5561F_OFFSET UNITYSDK_OFFSET(0x1403A4E0)
#define CLASS_2_0D6FE6AD5E3D1C19_METHOD_2_EBA1DA59141868AB_OFFSET UNITYSDK_OFFSET(0x1403A360)
#define CLASS_2_0D6FE6AD5E3D1C19__CTOR_OFFSET UNITYSDK_OFFSET(0x1403A780)

inline static constexpr unsigned int Class_2_0D6FE6AD5E3D1C19_TypeDefinitionIndex = 84877;

class Class_2_0D6FE6AD5E3D1C19 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x20
	::System::Collections::Generic::List_1<::Class_3_826A30478DA34A69<::MoleMole::UIAbyssArpeggioTalentItemWidgetController*>*>* Field_2_6; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D6FE6AD5E3D1C19__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_EBA1DA59141868AB(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0D6FE6AD5E3D1C19_METHOD_2_EBA1DA59141868AB_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_3_826A30478DA34A69<::MoleMole::UIAbyssArpeggioTalentItemWidgetController*>*>* Method_2_DEAB13C453E5561F(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_826A30478DA34A69<::MoleMole::UIAbyssArpeggioTalentItemWidgetController*>*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0D6FE6AD5E3D1C19_METHOD_2_DEAB13C453E5561F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0D6FE6AD5E3D1C19_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D6FE6AD5E3D1C19_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}
};
