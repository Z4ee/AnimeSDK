#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C49216E6D597CA02.h"
#include "unitysdk/Enum_3_316FC8E376D95053.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_BCA32DB678A03168_METHOD_2_5760FE1808AFABB7_OFFSET UNITYSDK_OFFSET(0x18AE2480)
#define CLASS_2_BCA32DB678A03168_METHOD_2_65074BC57E355AD4_OFFSET UNITYSDK_OFFSET(0x18ADF850)
#define CLASS_2_BCA32DB678A03168_METHOD_2_8AF11A4113B593B4_OFFSET UNITYSDK_OFFSET(0x18AE2450)
#define CLASS_2_BCA32DB678A03168_METHOD_2_C114A1F8E08B6F92_1_OFFSET UNITYSDK_OFFSET(0x18AE2470)
#define CLASS_2_BCA32DB678A03168_METHOD_2_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x18AE2430)
#define CLASS_2_BCA32DB678A03168_METHOD_2_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x18AE2460)
#define CLASS_2_BCA32DB678A03168_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x18AE2440)
#define CLASS_2_BCA32DB678A03168_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x18AE23A0)
#define CLASS_2_BCA32DB678A03168__CTOR_OFFSET UNITYSDK_OFFSET(0x18ADEE40)

inline static constexpr unsigned int Class_2_BCA32DB678A03168_TypeDefinitionIndex = 44118;

class Class_2_BCA32DB678A03168 : public ::Class_1_C49216E6D597CA02
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_3; // 0x20
	::System::Int32 Field_2_1; // 0x28
	::System::Int32 Field_2_2; // 0x2C
	::Enum_3_316FC8E376D95053 Field_2_0; // 0x30

	::System::Void _ctor(::System::Int32 a1, ::Enum_3_316FC8E376D95053 a2, ::System::Int32 a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_316FC8E376D95053, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_BCA32DB678A03168__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_65074BC57E355AD4(::Class_1_C49216E6D597CA02* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C49216E6D597CA02*))((::PBYTE)hIl2Cpp + CLASS_2_BCA32DB678A03168_METHOD_2_65074BC57E355AD4_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_C49216E6D597CA02* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C49216E6D597CA02*))((::PBYTE)hIl2Cpp + CLASS_2_BCA32DB678A03168_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_BCA32DB678A03168_METHOD_2_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCA32DB678A03168_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Method_2_8AF11A4113B593B4()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCA32DB678A03168_METHOD_2_8AF11A4113B593B4_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCA32DB678A03168_METHOD_2_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Void Method_2_C114A1F8E08B6F92_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_BCA32DB678A03168_METHOD_2_C114A1F8E08B6F92_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_5760FE1808AFABB7(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_BCA32DB678A03168_METHOD_2_5760FE1808AFABB7_OFFSET))(this, a1);
	}
};
