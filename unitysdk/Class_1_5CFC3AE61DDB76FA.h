#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486_1.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_0C0F9366B7D3B580;
class Class_2_1DB6C02CA182EEBA;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_5CFC3AE61DDB76FA_METHOD_1_58382DF702948524_OFFSET UNITYSDK_OFFSET(0xB461D20)
#define CLASS_1_5CFC3AE61DDB76FA_METHOD_1_C2CB26097A748429_OFFSET UNITYSDK_OFFSET(0xB461AE0)
#define CLASS_1_5CFC3AE61DDB76FA_METHOD_1_E42D898A66A4C5DA_OFFSET UNITYSDK_OFFSET(0xB4616D0)
#define CLASS_1_5CFC3AE61DDB76FA__CTOR_OFFSET UNITYSDK_OFFSET(0xB461A30)

inline static constexpr unsigned int Class_1_5CFC3AE61DDB76FA_TypeDefinitionIndex = 56276;

class Class_1_5CFC3AE61DDB76FA : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* OPEMKBPFFDN; // 0x10
	::Class_2_1DB6C02CA182EEBA* JMJMFEBBGOJ; // 0x18
	::System::UInt32 DFEJABODPGM; // 0x20
	::System::UInt32 AAGKEBFHLMC; // 0x24
	::Enum_3_01618AD0437C8486_1 MMNJODIJPOE; // 0x28
	::System::UInt32 AHGIENEMKFI; // 0x2C
	::System::UInt32 KNIHGPFFCMO; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CFC3AE61DDB76FA__CTOR_OFFSET))(this);
	}

	static ::Class_1_5CFC3AE61DDB76FA* Method_1_E42D898A66A4C5DA(::Class_1_0C0F9366B7D3B580* a1)
	{
		return ((::Class_1_5CFC3AE61DDB76FA*(*)(::Class_1_0C0F9366B7D3B580*))((::PBYTE)hIl2Cpp + CLASS_1_5CFC3AE61DDB76FA_METHOD_1_E42D898A66A4C5DA_OFFSET))(a1);
	}

	::Class_1_0C0F9366B7D3B580* Method_1_C2CB26097A748429()
	{
		return ((::Class_1_0C0F9366B7D3B580*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CFC3AE61DDB76FA_METHOD_1_C2CB26097A748429_OFFSET))(this);
	}

	::Class_1_5CFC3AE61DDB76FA* Method_1_58382DF702948524()
	{
		return ((::Class_1_5CFC3AE61DDB76FA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CFC3AE61DDB76FA_METHOD_1_58382DF702948524_OFFSET))(this);
	}
};
