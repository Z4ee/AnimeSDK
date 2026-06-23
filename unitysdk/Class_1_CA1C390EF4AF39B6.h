#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F019D5BE4A3284F8.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_1EA8435E138F2E03;
namespace MoleMole { class UIGeneralNewHintWidgetController; }
namespace MoleMole { class UIGeneralPopNumHintWidgetController; }
namespace MoleMole { class UIGeneralPopUpHintWidgetController; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_CA1C390EF4AF39B6_METHOD_1_482EEA11E3F46C3E_OFFSET UNITYSDK_OFFSET(0x16C1C240)
#define CLASS_1_CA1C390EF4AF39B6_METHOD_1_55FF0A96A525A9C9_OFFSET UNITYSDK_OFFSET(0x16C1B600)
#define CLASS_1_CA1C390EF4AF39B6_METHOD_1_7FFD809EC89B2AC7_OFFSET UNITYSDK_OFFSET(0x16C1CC10)
#define CLASS_1_CA1C390EF4AF39B6_METHOD_1_BCD8E4832DF2799B_OFFSET UNITYSDK_OFFSET(0x16C1C870)
#define CLASS_1_CA1C390EF4AF39B6_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x16C1D200)
#define CLASS_1_CA1C390EF4AF39B6_METHOD_1_D41059BB825399DF_OFFSET UNITYSDK_OFFSET(0x16C1B510)
#define CLASS_1_CA1C390EF4AF39B6_METHOD_1_FEE7938AD36467E5_OFFSET UNITYSDK_OFFSET(0x16C1C800)
#define CLASS_1_CA1C390EF4AF39B6__CTOR_OFFSET UNITYSDK_OFFSET(0x16C1B4F0)

inline static constexpr unsigned int Class_1_CA1C390EF4AF39B6_TypeDefinitionIndex = 57842;

class Class_1_CA1C390EF4AF39B6 : public ::System::Object
{
public:
	::MoleMole::UIGeneralPopUpHintWidgetController* Field_1_1; // 0x10
	::MoleMole::UIGeneralPopNumHintWidgetController* Field_1_3; // 0x18
	::System::Action_1<::System::Boolean>* Field_1_6; // 0x20
	::MoleMole::UIGeneralNewHintWidgetController* Field_1_2; // 0x28
	::UnityEngine::Transform* Field_1_0; // 0x30
	::System::Boolean Field_1_4; // 0x38
	::UnityEngine::Vector3 Field_1_5; // 0x3C

	::System::Void _ctor(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_CA1C390EF4AF39B6__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_D41059BB825399DF(::Class_1_1EA8435E138F2E03* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1EA8435E138F2E03*))((::PBYTE)hIl2Cpp + CLASS_1_CA1C390EF4AF39B6_METHOD_1_D41059BB825399DF_OFFSET))(this, a1);
	}

	::System::Void Method_1_55FF0A96A525A9C9(::Enum_3_F019D5BE4A3284F8 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_F019D5BE4A3284F8))((::PBYTE)hIl2Cpp + CLASS_1_CA1C390EF4AF39B6_METHOD_1_55FF0A96A525A9C9_OFFSET))(this, a1);
	}

	::System::Void Method_1_482EEA11E3F46C3E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA1C390EF4AF39B6_METHOD_1_482EEA11E3F46C3E_OFFSET))(this);
	}

	::System::Void Method_1_FEE7938AD36467E5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA1C390EF4AF39B6_METHOD_1_FEE7938AD36467E5_OFFSET))(this);
	}

	::System::Void Method_1_BCD8E4832DF2799B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA1C390EF4AF39B6_METHOD_1_BCD8E4832DF2799B_OFFSET))(this);
	}

	::System::Void Method_1_7FFD809EC89B2AC7(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_CA1C390EF4AF39B6_METHOD_1_7FFD809EC89B2AC7_OFFSET))(this, a1);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA1C390EF4AF39B6_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}
};
