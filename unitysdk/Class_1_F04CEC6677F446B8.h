#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EBubbleInsertType.h"
#include "unitysdk/System/Object.h"

class Class_3_4BECD5B2CFF332B1;
namespace MoleMole { class UIBubbleTips; }

#define CLASS_1_F04CEC6677F446B8_METHOD_1_096C7F7C8EC87129_OFFSET UNITYSDK_OFFSET(0xF1041A0)
#define CLASS_1_F04CEC6677F446B8_METHOD_1_1713F44301AA802F_OFFSET UNITYSDK_OFFSET(0xF103D30)
#define CLASS_1_F04CEC6677F446B8_METHOD_1_592ACD96522AFED5_OFFSET UNITYSDK_OFFSET(0xF103D90)
#define CLASS_1_F04CEC6677F446B8__CTOR_OFFSET UNITYSDK_OFFSET(0xF103C80)

inline static constexpr unsigned int Class_1_F04CEC6677F446B8_TypeDefinitionIndex = 51839;

class Class_1_F04CEC6677F446B8 : public ::System::Object
{
public:
	::MoleMole::UIBubbleTips* Field_1_6; // 0x10
	::Class_3_4BECD5B2CFF332B1* Field_1_7; // 0x18
	::Share::EBubbleInsertType Field_1_1; // 0x20
	::System::Int32 Field_1_0; // 0x24

	::System::Void _ctor(::Share::EBubbleInsertType a1, ::System::Int32 a2, ::Class_3_4BECD5B2CFF332B1* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Share::EBubbleInsertType, ::System::Int32, ::Class_3_4BECD5B2CFF332B1*))((::PBYTE)hIl2Cpp + CLASS_1_F04CEC6677F446B8__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_1713F44301AA802F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F04CEC6677F446B8_METHOD_1_1713F44301AA802F_OFFSET))(this);
	}

	::System::Void Method_1_096C7F7C8EC87129()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F04CEC6677F446B8_METHOD_1_096C7F7C8EC87129_OFFSET))(this);
	}

	::MoleMole::UIBubbleTips* Method_1_592ACD96522AFED5()
	{
		return ((::MoleMole::UIBubbleTips*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F04CEC6677F446B8_METHOD_1_592ACD96522AFED5_OFFSET))(this);
	}
};
