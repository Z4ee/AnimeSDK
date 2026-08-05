#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_8EFAD1842D6DB295;

#define CLASS_2_164DA5C42C1FE8BE_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x15526430)
#define CLASS_2_164DA5C42C1FE8BE_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x155264C0)
#define CLASS_2_164DA5C42C1FE8BE_METHOD_2_FA381B9E901D74DC_OFFSET UNITYSDK_OFFSET(0x15526290)
#define CLASS_2_164DA5C42C1FE8BE__CTOR_OFFSET UNITYSDK_OFFSET(0x155264B0)

inline static constexpr unsigned int Class_2_164DA5C42C1FE8BE_TypeDefinitionIndex = 70645;

class Class_2_164DA5C42C1FE8BE : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x18
	::UnityEngine::Transform* Field_2_2; // 0x20
	::MonoUITableScrollV2* Field_2_1; // 0x28
	::UnityEngine::Transform* Field_2_0; // 0x30
	::Class_3_8EFAD1842D6DB295<::MoleMole::UIItemIconBtnWidgetController*>* Field_2_7; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_164DA5C42C1FE8BE__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_FA381B9E901D74DC(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_164DA5C42C1FE8BE_METHOD_2_FA381B9E901D74DC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_164DA5C42C1FE8BE_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_164DA5C42C1FE8BE_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
