#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_E6B1B73EBD006A98_Class_2_D72E10CE1BC97618;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_E6B1B73EBD006A98_METHOD_2_43ED31B02AD5E38E_OFFSET UNITYSDK_OFFSET(0x16586E20)
#define CLASS_2_E6B1B73EBD006A98_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x16586FA0)
#define CLASS_2_E6B1B73EBD006A98_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x16587050)
#define CLASS_2_E6B1B73EBD006A98__CTOR_OFFSET UNITYSDK_OFFSET(0x16587040)

inline static constexpr unsigned int Class_2_E6B1B73EBD006A98_TypeDefinitionIndex = 41290;

class Class_2_E6B1B73EBD006A98 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x18
	::Class_2_0D31A1661D004892<::Class_2_E6B1B73EBD006A98_Class_2_D72E10CE1BC97618*>* Field_2_1; // 0x20
	::Class_2_0D31A1661D004892<::Class_2_E6B1B73EBD006A98_Class_2_D72E10CE1BC97618*>* Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E6B1B73EBD006A98__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_43ED31B02AD5E38E(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E6B1B73EBD006A98_METHOD_2_43ED31B02AD5E38E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E6B1B73EBD006A98_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E6B1B73EBD006A98_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
