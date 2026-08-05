#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_402;
class Class_3_70FF81FD8A684DFF;
class Class_3_9CA249C88E9804C6;
namespace MoleMole::Battle { class Entity; }

#define CLASS_1_778677335B8ADC35_CLASS_1_48DA0FC68ECA7478_METHOD_1_354FC8590BE76762_OFFSET UNITYSDK_OFFSET(0x14308840)
#define CLASS_1_778677335B8ADC35_CLASS_1_48DA0FC68ECA7478_METHOD_1_7033EFB970A18315_OFFSET UNITYSDK_OFFSET(0x14309030)
#define CLASS_1_778677335B8ADC35_CLASS_1_48DA0FC68ECA7478__CTOR_OFFSET UNITYSDK_OFFSET(0x14308830)

inline static constexpr unsigned int Class_1_778677335B8ADC35_Class_1_48DA0FC68ECA7478_TypeDefinitionIndex = 63155;

class Class_1_778677335B8ADC35_Class_1_48DA0FC68ECA7478 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_402* Field_1_7; // 0x10
	::Class_3_70FF81FD8A684DFF* Field_1_1; // 0x18
	::MoleMole::Battle::Entity* Field_1_2; // 0x20
	::Class_3_9CA249C88E9804C6* Field_1_3; // 0x28
	::UnityEngine::Vector3 Field_1_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_778677335B8ADC35_CLASS_1_48DA0FC68ECA7478__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_354FC8590BE76762(::Class_0_16E4307DCC419505_402* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_402*))((::PBYTE)hIl2Cpp + CLASS_1_778677335B8ADC35_CLASS_1_48DA0FC68ECA7478_METHOD_1_354FC8590BE76762_OFFSET))(this, a1);
	}

	::System::Void Method_1_7033EFB970A18315()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_778677335B8ADC35_CLASS_1_48DA0FC68ECA7478_METHOD_1_7033EFB970A18315_OFFSET))(this);
	}
};
