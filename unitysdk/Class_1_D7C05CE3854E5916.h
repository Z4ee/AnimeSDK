#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_90CE44F2816E8551.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIInputFieldEx; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_D7C05CE3854E5916_METHOD_1_0287A932E5CC7E66_1_OFFSET UNITYSDK_OFFSET(0x102288A0)
#define CLASS_1_D7C05CE3854E5916_METHOD_1_0287A932E5CC7E66_OFFSET UNITYSDK_OFFSET(0x102286B0)
#define CLASS_1_D7C05CE3854E5916_METHOD_1_24AE0B16C654D410_OFFSET UNITYSDK_OFFSET(0x10227AC0)
#define CLASS_1_D7C05CE3854E5916_METHOD_1_862329920B8ADE9E_OFFSET UNITYSDK_OFFSET(0x102279E0)
#define CLASS_1_D7C05CE3854E5916_METHOD_1_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x10228560)
#define CLASS_1_D7C05CE3854E5916_METHOD_1_A6CDD683FEF0F194_OFFSET UNITYSDK_OFFSET(0x10227BC0)
#define CLASS_1_D7C05CE3854E5916_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x102288F0)
#define CLASS_1_D7C05CE3854E5916_METHOD_1_BCFDF34D93C9F44D_OFFSET UNITYSDK_OFFSET(0x10228900)
#define CLASS_1_D7C05CE3854E5916_METHOD_1_D1F5A654A67BB61C_OFFSET UNITYSDK_OFFSET(0x10228050)
#define CLASS_1_D7C05CE3854E5916_METHOD_1_D76278A00534DA4F_OFFSET UNITYSDK_OFFSET(0x10228750)
#define CLASS_1_D7C05CE3854E5916_METHOD_1_DF7A8DC1A1E1DC1E_OFFSET UNITYSDK_OFFSET(0x10227970)
#define CLASS_1_D7C05CE3854E5916__CTOR_OFFSET UNITYSDK_OFFSET(0x10226E50)

inline static constexpr unsigned int Class_1_D7C05CE3854E5916_TypeDefinitionIndex = 81872;

class Class_1_D7C05CE3854E5916 : public ::System::Object
{
public:
	::MoleMole::MonoGamepadModule* Field_1_2; // 0x10
	::System::Action* Field_1_11; // 0x18
	::System::Action* Field_1_8; // 0x20
	::System::Action* Field_1_9; // 0x28
	::MoleMole::UIInputFieldEx* Field_1_0; // 0x30
	::System::Collections::Generic::Dictionary_2<::MoleMole::InputLogicEventType, ::System::Action*>* Field_1_5; // 0x38
	::System::Action* Field_1_12; // 0x40
	::MoleMole::MonoGamepadSelectable* Field_1_1; // 0x48
	::System::Collections::Generic::Dictionary_2<::MoleMole::InputLogicEventType, ::System::Action*>* Field_1_4; // 0x50
	::System::Action* Field_1_10; // 0x58
	::Enum_3_90CE44F2816E8551 Field_1_3; // 0x60
	::MoleMole::InputLogicEventType Field_1_7; // 0x64
	::MoleMole::InputLogicEventType Field_1_6; // 0x68

	::System::Void _ctor(::MoleMole::UIInputFieldEx* a1, ::MoleMole::MonoGamepadSelectable* a2, ::MoleMole::MonoGamepadModule* a3, ::MoleMole::InputLogicEventType a4, ::MoleMole::InputLogicEventType a5, ::System::Action* a6, ::System::Action* a7, ::System::Action* a8, ::System::Action* a9, ::System::Action* a10)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInputFieldEx*, ::MoleMole::MonoGamepadSelectable*, ::MoleMole::MonoGamepadModule*, ::MoleMole::InputLogicEventType, ::MoleMole::InputLogicEventType, ::System::Action*, ::System::Action*, ::System::Action*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_D7C05CE3854E5916__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	::System::Void Method_1_DF7A8DC1A1E1DC1E(::Enum_3_90CE44F2816E8551 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_90CE44F2816E8551))((::PBYTE)hIl2Cpp + CLASS_1_D7C05CE3854E5916_METHOD_1_DF7A8DC1A1E1DC1E_OFFSET))(this, a1);
	}

	::System::Void Method_1_24AE0B16C654D410(::Enum_3_90CE44F2816E8551 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_90CE44F2816E8551))((::PBYTE)hIl2Cpp + CLASS_1_D7C05CE3854E5916_METHOD_1_24AE0B16C654D410_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A6CDD683FEF0F194(::MoleMole::InputActionEvent a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + CLASS_1_D7C05CE3854E5916_METHOD_1_A6CDD683FEF0F194_OFFSET))(this, a1);
	}

	::System::Void Method_1_D1F5A654A67BB61C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7C05CE3854E5916_METHOD_1_D1F5A654A67BB61C_OFFSET))(this);
	}

	::System::Void Method_1_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7C05CE3854E5916_METHOD_1_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Void Method_1_0287A932E5CC7E66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7C05CE3854E5916_METHOD_1_0287A932E5CC7E66_OFFSET))(this);
	}

	::System::Void Method_1_D76278A00534DA4F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7C05CE3854E5916_METHOD_1_D76278A00534DA4F_OFFSET))(this);
	}

	::System::Void Method_1_0287A932E5CC7E66_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7C05CE3854E5916_METHOD_1_0287A932E5CC7E66_1_OFFSET))(this);
	}

	::Enum_3_90CE44F2816E8551 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_90CE44F2816E8551(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7C05CE3854E5916_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_BCFDF34D93C9F44D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D7C05CE3854E5916_METHOD_1_BCFDF34D93C9F44D_OFFSET))(this, a1);
	}

	::System::Void Method_1_862329920B8ADE9E(::Enum_3_90CE44F2816E8551 a1, ::MoleMole::InputLogicEventType a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_90CE44F2816E8551, ::MoleMole::InputLogicEventType, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_D7C05CE3854E5916_METHOD_1_862329920B8ADE9E_OFFSET))(this, a1, a2, a3);
	}
};
