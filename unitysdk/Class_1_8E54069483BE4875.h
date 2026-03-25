#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Numerics/BigInteger.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8E54069483BE4875_CLEAR_OFFSET UNITYSDK_OFFSET(0x108D02A0)
#define CLASS_1_8E54069483BE4875_METHOD_1_275CE2131E356DEC_OFFSET UNITYSDK_OFFSET(0x108D0380)
#define CLASS_1_8E54069483BE4875_METHOD_1_3E7F7468DAE568D3_OFFSET UNITYSDK_OFFSET(0x108D0440)
#define CLASS_1_8E54069483BE4875_METHOD_1_F49F04F2C0603CF5_OFFSET UNITYSDK_OFFSET(0x108D04A0)
#define CLASS_1_8E54069483BE4875__CTOR_OFFSET UNITYSDK_OFFSET(0x108D0AB0)

inline static constexpr unsigned int Class_1_8E54069483BE4875_TypeDefinitionIndex = 54252;

class Class_1_8E54069483BE4875 : public ::System::Object
{
public:
	// static const ::System::UInt32 Field_1_0 = 0x64; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E54069483BE4875__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E54069483BE4875_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_275CE2131E356DEC(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8E54069483BE4875_METHOD_1_275CE2131E356DEC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3E7F7468DAE568D3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8E54069483BE4875_METHOD_1_3E7F7468DAE568D3_OFFSET))(this, a1);
	}

	::System::Numerics::BigInteger Method_1_F49F04F2C0603CF5(::System::Numerics::BigInteger a1)
	{
		return ((::System::Numerics::BigInteger(*)(::PVOID, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + CLASS_1_8E54069483BE4875_METHOD_1_F49F04F2C0603CF5_OFFSET))(this, a1);
	}
};
