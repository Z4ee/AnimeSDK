#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_90A787308BD576DD;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_AD15D87108933BD3_METHOD_1_205C7639FE742050_OFFSET UNITYSDK_OFFSET(0xEB853D0)
#define CLASS_1_AD15D87108933BD3_METHOD_1_C668CA64A755C44E_OFFSET UNITYSDK_OFFSET(0xEB85540)
#define CLASS_1_AD15D87108933BD3_METHOD_1_C77A343B677EE471_OFFSET UNITYSDK_OFFSET(0xEB84E60)
#define CLASS_1_AD15D87108933BD3_METHOD_1_CBBB30978BA34B92_OFFSET UNITYSDK_OFFSET(0xEB855A0)
#define CLASS_1_AD15D87108933BD3_METHOD_1_F3A56A508E1BA211_OFFSET UNITYSDK_OFFSET(0xEB85650)
#define CLASS_1_AD15D87108933BD3__CTOR_OFFSET UNITYSDK_OFFSET(0xEB84DE0)

inline static constexpr unsigned int Class_1_AD15D87108933BD3_TypeDefinitionIndex = 82102;

class Class_1_AD15D87108933BD3 : public ::System::Object
{
public:
	::Class_1_90A787308BD576DD* MPJBKABBEEP; // 0x10
	::Class_1_90A787308BD576DD* INOBONGIJMA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_90A787308BD576DD*>* DGJIGNNCIHK; // 0x20
	::System::UInt32 NIKPKOALLML; // 0x28
	::System::Boolean APJILDFJCGJ; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AD15D87108933BD3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C77A343B677EE471(::System::Collections::Generic::IReadOnlyList_1<::Class_1_90A787308BD576DD*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_90A787308BD576DD*>*))((::PBYTE)hIl2Cpp + CLASS_1_AD15D87108933BD3_METHOD_1_C77A343B677EE471_OFFSET))(this, a1);
	}

	::System::Void Method_1_205C7639FE742050(::Class_1_90A787308BD576DD* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_90A787308BD576DD*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AD15D87108933BD3_METHOD_1_205C7639FE742050_OFFSET))(this, a1, a2);
	}

	::Class_1_90A787308BD576DD* Method_1_C668CA64A755C44E(::System::Boolean& a1)
	{
		return ((::Class_1_90A787308BD576DD*(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_AD15D87108933BD3_METHOD_1_C668CA64A755C44E_OFFSET))(this, a1);
	}

	::Class_1_90A787308BD576DD* Method_1_CBBB30978BA34B92(::System::UInt32 a1)
	{
		return ((::Class_1_90A787308BD576DD*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AD15D87108933BD3_METHOD_1_CBBB30978BA34B92_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F3A56A508E1BA211(::System::UInt32 a1, ::Class_1_90A787308BD576DD*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Class_1_90A787308BD576DD*&))((::PBYTE)hIl2Cpp + CLASS_1_AD15D87108933BD3_METHOD_1_F3A56A508E1BA211_OFFSET))(this, a1, a2);
	}
};
