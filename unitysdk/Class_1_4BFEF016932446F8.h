#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceMoveState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_9AF9867BCD86F583;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_4BFEF016932446F8_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1C615700)
#define CLASS_1_4BFEF016932446F8_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1C5F1FC0)
#define CLASS_1_4BFEF016932446F8_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1C5F1480)
#define CLASS_1_4BFEF016932446F8__CTOR_OFFSET UNITYSDK_OFFSET(0x1C615760)

inline static constexpr unsigned int Class_1_4BFEF016932446F8_TypeDefinitionIndex = 37243;

class Class_1_4BFEF016932446F8 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>* DOAHCFCFKDD; // 0x10
	::Class_1_9AF9867BCD86F583* FGBOCEOCCJN; // 0x18
	::System::Boolean MLLBLJEALGA; // 0x20
	::System::Boolean HGMGLFNFGGN; // 0x21
	::System::Boolean OHAHHCFNLFF; // 0x22
	::RPG::GameCore::CakeRaceMoveState ALHAFOGCGJK; // 0x24
	::System::UInt32 NMALDHAIMCF; // 0x28
	::System::Int32 FLDIHFHMLAM; // 0x2C
	::System::Int32 GCHLCKLCGNB; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BFEF016932446F8__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BFEF016932446F8_METHOD_1_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BFEF016932446F8_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BFEF016932446F8_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}
};
