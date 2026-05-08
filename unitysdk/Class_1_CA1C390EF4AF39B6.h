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

#define CLASS_1_CA1C390EF4AF39B6_METHOD_1_482EEA11E3F46C3E_OFFSET UNITYSDK_OFFSET(0xDED7560)
#define CLASS_1_CA1C390EF4AF39B6_METHOD_1_55FF0A96A525A9C9_OFFSET UNITYSDK_OFFSET(0xDED8610)
#define CLASS_1_CA1C390EF4AF39B6_METHOD_1_7FFD809EC89B2AC7_OFFSET UNITYSDK_OFFSET(0xDED7B90)
#define CLASS_1_CA1C390EF4AF39B6_METHOD_1_BCD8E4832DF2799B_OFFSET UNITYSDK_OFFSET(0xDED8270)
#define CLASS_1_CA1C390EF4AF39B6_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0xDED9250)
#define CLASS_1_CA1C390EF4AF39B6_METHOD_1_D41059BB825399DF_OFFSET UNITYSDK_OFFSET(0xDED8180)
#define CLASS_1_CA1C390EF4AF39B6_METHOD_1_FEE7938AD36467E5_OFFSET UNITYSDK_OFFSET(0xDED7B20)
#define CLASS_1_CA1C390EF4AF39B6__CTOR_OFFSET UNITYSDK_OFFSET(0xDED7540)

inline static constexpr unsigned int Class_1_CA1C390EF4AF39B6_TypeDefinitionIndex = 73903;

class Class_1_CA1C390EF4AF39B6 : public ::System::Object
{
public:
	::MoleMole::UIGeneralPopNumHintWidgetController* Field_1_3; // 0x10
	::UnityEngine::Transform* Field_1_0; // 0x18
	::System::Action_1<::System::Boolean>* Field_1_6; // 0x20
	::MoleMole::UIGeneralNewHintWidgetController* Field_1_2; // 0x28
	::MoleMole::UIGeneralPopUpHintWidgetController* Field_1_1; // 0x30
	::UnityEngine::Vector3 Field_1_5; // 0x38
	::System::Boolean Field_1_4; // 0x44

	::System::Void _ctor(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_CA1C390EF4AF39B6__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_482EEA11E3F46C3E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA1C390EF4AF39B6_METHOD_1_482EEA11E3F46C3E_OFFSET))(this);
	}

	::System::Void Method_1_FEE7938AD36467E5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA1C390EF4AF39B6_METHOD_1_FEE7938AD36467E5_OFFSET))(this);
	}

	::System::Void Method_1_7FFD809EC89B2AC7(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_CA1C390EF4AF39B6_METHOD_1_7FFD809EC89B2AC7_OFFSET))(this, a1);
	}

	::System::Void Method_1_D41059BB825399DF(::Class_1_1EA8435E138F2E03* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1EA8435E138F2E03*))((::PBYTE)hIl2Cpp + CLASS_1_CA1C390EF4AF39B6_METHOD_1_D41059BB825399DF_OFFSET))(this, a1);
	}

	::System::Void Method_1_BCD8E4832DF2799B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA1C390EF4AF39B6_METHOD_1_BCD8E4832DF2799B_OFFSET))(this);
	}

	::System::Void Method_1_55FF0A96A525A9C9(::Enum_3_F019D5BE4A3284F8 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_F019D5BE4A3284F8))((::PBYTE)hIl2Cpp + CLASS_1_CA1C390EF4AF39B6_METHOD_1_55FF0A96A525A9C9_OFFSET))(this, a1);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA1C390EF4AF39B6_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}
};
