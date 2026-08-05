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

#define CLASS_1_D7C05CE3854E5916_METHOD_1_4403F1E9DB2EB489_1_OFFSET UNITYSDK_OFFSET(0x1575CAE0)
#define CLASS_1_D7C05CE3854E5916_METHOD_1_4403F1E9DB2EB489_OFFSET UNITYSDK_OFFSET(0x1575C4A0)
#define CLASS_1_D7C05CE3854E5916_METHOD_1_80311A6914A70B35_OFFSET UNITYSDK_OFFSET(0x1575C250)
#define CLASS_1_D7C05CE3854E5916_METHOD_1_862329920B8ADE9E_OFFSET UNITYSDK_OFFSET(0x1575C0F0)
#define CLASS_1_D7C05CE3854E5916_METHOD_1_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x1575C4F0)
#define CLASS_1_D7C05CE3854E5916_METHOD_1_A6CDD683FEF0F194_OFFSET UNITYSDK_OFFSET(0x1575C650)
#define CLASS_1_D7C05CE3854E5916_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1575C640)
#define CLASS_1_D7C05CE3854E5916_METHOD_1_D1F5A654A67BB61C_OFFSET UNITYSDK_OFFSET(0x1575CB80)
#define CLASS_1_D7C05CE3854E5916_METHOD_1_D3F4A9917F7B37AE_OFFSET UNITYSDK_OFFSET(0x1575C1D0)
#define CLASS_1_D7C05CE3854E5916_METHOD_1_D76278A00534DA4F_OFFSET UNITYSDK_OFFSET(0x1575C350)
#define CLASS_1_D7C05CE3854E5916_METHOD_1_EAFD3128ED298259_OFFSET UNITYSDK_OFFSET(0x1575C080)
#define CLASS_1_D7C05CE3854E5916__CTOR_OFFSET UNITYSDK_OFFSET(0x1575B550)

inline static constexpr unsigned int Class_1_D7C05CE3854E5916_TypeDefinitionIndex = 40552;

class Class_1_D7C05CE3854E5916 : public ::System::Object
{
public:
	::MoleMole::MonoGamepadSelectable* Field_1_2; // 0x10
	::MoleMole::MonoGamepadModule* Field_1_1; // 0x18
	::System::Action* Field_1_15; // 0x20
	::System::Action* Field_1_8; // 0x28
	::System::Collections::Generic::Dictionary_2<::MoleMole::InputLogicEventType, ::System::Action*>* Field_1_7; // 0x30
	::System::Action* Field_1_10; // 0x38
	::System::Action* Field_1_9; // 0x40
	::System::Action* Field_1_11; // 0x48
	::MoleMole::UIInputFieldEx* Field_1_3; // 0x50
	::System::Collections::Generic::Dictionary_2<::MoleMole::InputLogicEventType, ::System::Action*>* Field_1_6; // 0x58
	::MoleMole::InputLogicEventType Field_1_4; // 0x60
	::MoleMole::InputLogicEventType Field_1_5; // 0x64
	::Enum_3_90CE44F2816E8551 Field_1_0; // 0x68

	::System::Void _ctor(::MoleMole::UIInputFieldEx* a1, ::MoleMole::MonoGamepadSelectable* a2, ::MoleMole::MonoGamepadModule* a3, ::MoleMole::InputLogicEventType a4, ::MoleMole::InputLogicEventType a5, ::System::Action* a6, ::System::Action* a7, ::System::Action* a8, ::System::Action* a9, ::System::Action* a10)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInputFieldEx*, ::MoleMole::MonoGamepadSelectable*, ::MoleMole::MonoGamepadModule*, ::MoleMole::InputLogicEventType, ::MoleMole::InputLogicEventType, ::System::Action*, ::System::Action*, ::System::Action*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_D7C05CE3854E5916__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	::System::Void Method_1_D3F4A9917F7B37AE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D7C05CE3854E5916_METHOD_1_D3F4A9917F7B37AE_OFFSET))(this, a1);
	}

	::System::Void Method_1_D76278A00534DA4F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7C05CE3854E5916_METHOD_1_D76278A00534DA4F_OFFSET))(this);
	}

	::System::Void Method_1_4403F1E9DB2EB489()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7C05CE3854E5916_METHOD_1_4403F1E9DB2EB489_OFFSET))(this);
	}

	::System::Void Method_1_862329920B8ADE9E(::Enum_3_90CE44F2816E8551 a1, ::MoleMole::InputLogicEventType a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_90CE44F2816E8551, ::MoleMole::InputLogicEventType, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_D7C05CE3854E5916_METHOD_1_862329920B8ADE9E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7C05CE3854E5916_METHOD_1_A1ADC999CFACEB89_OFFSET))(this);
	}

	::Enum_3_90CE44F2816E8551 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_90CE44F2816E8551(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7C05CE3854E5916_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_EAFD3128ED298259(::Enum_3_90CE44F2816E8551 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_90CE44F2816E8551))((::PBYTE)hIl2Cpp + CLASS_1_D7C05CE3854E5916_METHOD_1_EAFD3128ED298259_OFFSET))(this, a1);
	}

	::System::Void Method_1_80311A6914A70B35(::Enum_3_90CE44F2816E8551 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_90CE44F2816E8551))((::PBYTE)hIl2Cpp + CLASS_1_D7C05CE3854E5916_METHOD_1_80311A6914A70B35_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A6CDD683FEF0F194(::MoleMole::InputActionEvent a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + CLASS_1_D7C05CE3854E5916_METHOD_1_A6CDD683FEF0F194_OFFSET))(this, a1);
	}

	::System::Void Method_1_4403F1E9DB2EB489_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7C05CE3854E5916_METHOD_1_4403F1E9DB2EB489_1_OFFSET))(this);
	}

	::System::Void Method_1_D1F5A654A67BB61C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7C05CE3854E5916_METHOD_1_D1F5A654A67BB61C_OFFSET))(this);
	}
};
