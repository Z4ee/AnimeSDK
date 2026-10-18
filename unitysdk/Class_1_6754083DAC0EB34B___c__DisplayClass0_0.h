#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_121;

#define CLASS_1_6754083DAC0EB34B___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1661E2B0)
#define CLASS_1_6754083DAC0EB34B___C__DISPLAYCLASS0_0__SHOULDEMPHASIZEWRONGLYPEAKED_B__1_OFFSET UNITYSDK_OFFSET(0x1661EA80)

inline static constexpr unsigned int Class_1_6754083DAC0EB34B___c__DisplayClass0_0_TypeDefinitionIndex = 79416;

class Class_1_6754083DAC0EB34B___c__DisplayClass0_0 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_121* currentValues; // 0x10
	::System::Int32 maxAttributeValue; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6754083DAC0EB34B___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _ShouldEmphasizeWronglyPeaked_b__1(::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_1_6754083DAC0EB34B___C__DISPLAYCLASS0_0__SHOULDEMPHASIZEWRONGLYPEAKED_B__1_OFFSET))(this, a1);
	}
};
