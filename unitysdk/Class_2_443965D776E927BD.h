#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BE136E515AF9A61.h"

class Class_2_6D25D6E36F5AF8D2;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_443965D776E927BD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C9057E0)
#define CLASS_2_443965D776E927BD_METHOD_2_278DE3B6BE616E54_OFFSET UNITYSDK_OFFSET(0x1C9060C0)
#define CLASS_2_443965D776E927BD_METHOD_2_8B5E3014AFF7F8EA_OFFSET UNITYSDK_OFFSET(0x1C9059B0)
#define CLASS_2_443965D776E927BD__CTOR_OFFSET UNITYSDK_OFFSET(0x1C905610)

inline static constexpr unsigned int Class_2_443965D776E927BD_TypeDefinitionIndex = 42200;

class Class_2_443965D776E927BD : public ::Class_1_5BE136E515AF9A61
{
public:
	::Class_2_6D25D6E36F5AF8D2* CFKHNPGEAJA; // 0x18
	::System::String* LLKDMBLKFPM; // 0x20
	::System::Collections::Generic::List_1<::Class_2_6D25D6E36F5AF8D2*>* KJOIGIHAOBI; // 0x28
	::System::String* JOCLKJEGBJN; // 0x30
	::System::Int32 CLILCIELBNG; // 0x38
	::System::Single PGMIOKKLHIE; // 0x3C
	::System::Int32 PNOGGBMPMCG; // 0x40
	::System::Single COAELIHGAHH; // 0x44
	::System::Single HBDJCFFDGDD; // 0x48
	::System::Single LJEOPKOBAGF; // 0x4C

	::System::Void _ctor(::System::UInt32 a1, ::System::Single a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_443965D776E927BD__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_443965D776E927BD_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_8B5E3014AFF7F8EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_443965D776E927BD_METHOD_2_8B5E3014AFF7F8EA_OFFSET))(this);
	}

	::System::Void Method_2_278DE3B6BE616E54(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_443965D776E927BD_METHOD_2_278DE3B6BE616E54_OFFSET))(this, a1);
	}
};
