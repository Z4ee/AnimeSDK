#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_32D38A47E2A5ED82.h"

class Class_3_B1FA31D6EE2555C8;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_5A552FB0E4FC07B0_METHOD_2_9D6DB0DBE42007B1_OFFSET UNITYSDK_OFFSET(0x1457BAD0)
#define CLASS_2_5A552FB0E4FC07B0_METHOD_2_B0A930452D7F76FB_OFFSET UNITYSDK_OFFSET(0x1457BF90)
#define CLASS_2_5A552FB0E4FC07B0_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1457B9D0)
#define CLASS_2_5A552FB0E4FC07B0_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1457B990)
#define CLASS_2_5A552FB0E4FC07B0_METHOD_2_D2AAB2567FB0D480_OFFSET UNITYSDK_OFFSET(0x1457BBB0)
#define CLASS_2_5A552FB0E4FC07B0__CTOR_OFFSET UNITYSDK_OFFSET(0x1457BA10)

inline static constexpr unsigned int Class_2_5A552FB0E4FC07B0_TypeDefinitionIndex = 56925;

class Class_2_5A552FB0E4FC07B0 : public ::Class_1_32D38A47E2A5ED82<::Class_2_5A552FB0E4FC07B0*>
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_7; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_B1FA31D6EE2555C8*>* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A552FB0E4FC07B0__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A552FB0E4FC07B0_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A552FB0E4FC07B0_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::Class_3_B1FA31D6EE2555C8* Method_2_9D6DB0DBE42007B1(::System::UInt32 a1)
	{
		return ((::Class_3_B1FA31D6EE2555C8*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5A552FB0E4FC07B0_METHOD_2_9D6DB0DBE42007B1_OFFSET))(this, a1);
	}

	::System::Void Method_2_D2AAB2567FB0D480(::System::Collections::Generic::List_1<::Class_3_B1FA31D6EE2555C8*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_3_B1FA31D6EE2555C8*>*))((::PBYTE)hIl2Cpp + CLASS_2_5A552FB0E4FC07B0_METHOD_2_D2AAB2567FB0D480_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_B1FA31D6EE2555C8*>* Method_2_B0A930452D7F76FB()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_B1FA31D6EE2555C8*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A552FB0E4FC07B0_METHOD_2_B0A930452D7F76FB_OFFSET))(this);
	}
};
