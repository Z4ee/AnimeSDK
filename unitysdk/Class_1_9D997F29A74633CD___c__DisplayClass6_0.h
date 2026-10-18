#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftChipTraitType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_129;
class Class_1_9D997F29A74633CD;

#define CLASS_1_9D997F29A74633CD___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C53EF30)
#define CLASS_1_9D997F29A74633CD___C__DISPLAYCLASS6_0__DETERMINEPRODUCTTRAITS_B__0_OFFSET UNITYSDK_OFFSET(0x1C53F280)

inline static constexpr unsigned int Class_1_9D997F29A74633CD___c__DisplayClass6_0_TypeDefinitionIndex = 41741;

class Class_1_9D997F29A74633CD___c__DisplayClass6_0 : public ::System::Object
{
public:
	::Class_1_9D997F29A74633CD* __4__this; // 0x10
	::Class_0_16E4307DCC419505_129* targetTraitTypes; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D997F29A74633CD___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _DetermineProductTraits_b__0(::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftChipTraitType, ::System::Int32> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftChipTraitType, ::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_1_9D997F29A74633CD___C__DISPLAYCLASS6_0__DETERMINEPRODUCTTRAITS_B__0_OFFSET))(this, a1);
	}
};
