#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Numerics/BigInteger.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2C6DA1AF76ABE73E_CLEAR_OFFSET UNITYSDK_OFFSET(0x17A54C40)
#define CLASS_1_2C6DA1AF76ABE73E_METHOD_1_AFDAF5C37EE7F801_OFFSET UNITYSDK_OFFSET(0x17A54E80)
#define CLASS_1_2C6DA1AF76ABE73E_METHOD_1_C248EF2067E42139_OFFSET UNITYSDK_OFFSET(0x17A54CF0)
#define CLASS_1_2C6DA1AF76ABE73E_METHOD_1_D77F7476BCD66744_OFFSET UNITYSDK_OFFSET(0x17A54DF0)
#define CLASS_1_2C6DA1AF76ABE73E__CTOR_OFFSET UNITYSDK_OFFSET(0x17A55460)

inline static constexpr unsigned int Class_1_2C6DA1AF76ABE73E_TypeDefinitionIndex = 66690;

class Class_1_2C6DA1AF76ABE73E : public ::System::Object
{
public:
	// static const ::System::UInt32 PIPLDPEOMBI = 0x64; // 0x0
	::System::Collections::Generic::List_1<::System::UInt32>* ANGFOPKGODF; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* INJIAJBIHCN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C6DA1AF76ABE73E__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C6DA1AF76ABE73E_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_C248EF2067E42139(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2C6DA1AF76ABE73E_METHOD_1_C248EF2067E42139_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D77F7476BCD66744(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2C6DA1AF76ABE73E_METHOD_1_D77F7476BCD66744_OFFSET))(this, a1);
	}

	::System::Numerics::BigInteger Method_1_AFDAF5C37EE7F801(::System::Numerics::BigInteger a1)
	{
		return ((::System::Numerics::BigInteger(*)(::PVOID, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + CLASS_1_2C6DA1AF76ABE73E_METHOD_1_AFDAF5C37EE7F801_OFFSET))(this, a1);
	}
};
