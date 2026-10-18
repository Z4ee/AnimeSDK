#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486_1.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_0C0F9366B7D3B580;
class Class_2_1DB6C02CA182EEBA;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_C50814066AD5D308_METHOD_1_58382DF702948524_OFFSET UNITYSDK_OFFSET(0xB123020)
#define CLASS_1_C50814066AD5D308_METHOD_1_5D45F42FB3701F39_OFFSET UNITYSDK_OFFSET(0xB1229C0)
#define CLASS_1_C50814066AD5D308_METHOD_1_C2CB26097A748429_OFFSET UNITYSDK_OFFSET(0xB122DD0)
#define CLASS_1_C50814066AD5D308__CTOR_OFFSET UNITYSDK_OFFSET(0xB122D20)

inline static constexpr unsigned int Class_1_C50814066AD5D308_TypeDefinitionIndex = 56089;

class Class_1_C50814066AD5D308 : public ::System::Object
{
public:
	::Class_2_1DB6C02CA182EEBA* JMJMFEBBGOJ; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* OPEMKBPFFDN; // 0x18
	::System::UInt32 DFEJABODPGM; // 0x20
	::Enum_3_01618AD0437C8486_1 MMNJODIJPOE; // 0x24
	::System::UInt32 AAGKEBFHLMC; // 0x28
	::System::UInt32 KNIHGPFFCMO; // 0x2C
	::System::UInt32 AHGIENEMKFI; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C50814066AD5D308__CTOR_OFFSET))(this);
	}

	static ::Class_1_C50814066AD5D308* Method_1_5D45F42FB3701F39(::Class_1_0C0F9366B7D3B580* a1)
	{
		return ((::Class_1_C50814066AD5D308*(*)(::Class_1_0C0F9366B7D3B580*))((::PBYTE)hIl2Cpp + CLASS_1_C50814066AD5D308_METHOD_1_5D45F42FB3701F39_OFFSET))(a1);
	}

	::Class_1_0C0F9366B7D3B580* Method_1_C2CB26097A748429()
	{
		return ((::Class_1_0C0F9366B7D3B580*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C50814066AD5D308_METHOD_1_C2CB26097A748429_OFFSET))(this);
	}

	::Class_1_C50814066AD5D308* Method_1_58382DF702948524()
	{
		return ((::Class_1_C50814066AD5D308*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C50814066AD5D308_METHOD_1_58382DF702948524_OFFSET))(this);
	}
};
