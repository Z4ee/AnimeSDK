#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/Struct_2_C8DD384065D32AEE.h"

class Class_4_425BBC3CBFD638A0_1;
class Class_4_425BBC3CBFD638A0_2;
class Class_4_685254A3A1DA8006;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_9634C58086B1B007_METHOD_4_0F7B1BD3C324514D_OFFSET UNITYSDK_OFFSET(0x14229A20)
#define CLASS_4_9634C58086B1B007_METHOD_4_331F4D7452B7C6C9_OFFSET UNITYSDK_OFFSET(0x14229830)
#define CLASS_4_9634C58086B1B007_METHOD_4_EF0964E9F27EE4C2_OFFSET UNITYSDK_OFFSET(0x14229410)
#define CLASS_4_9634C58086B1B007__CTOR_OFFSET UNITYSDK_OFFSET(0x142293A0)

inline static constexpr unsigned int Class_4_9634C58086B1B007_TypeDefinitionIndex = 61863;

class Class_4_9634C58086B1B007 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_685254A3A1DA8006* Field_4_7; // 0x28
	::Class_4_425BBC3CBFD638A0_2* Field_4_0; // 0x30
	::Class_4_425BBC3CBFD638A0_1* Field_4_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_9634C58086B1B007__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_EF0964E9F27EE4C2(::Struct_2_29439DBE2B63DCF3& a1, ::Struct_2_C8DD384065D32AEE& a2, ::Struct_2_C8DD384065D32AEE& a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&, ::Struct_2_C8DD384065D32AEE&, ::Struct_2_C8DD384065D32AEE&))((::PBYTE)hIl2Cpp + CLASS_4_9634C58086B1B007_METHOD_4_EF0964E9F27EE4C2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_331F4D7452B7C6C9(::Struct_2_29439DBE2B63DCF3& a1, ::Struct_2_C8DD384065D32AEE& a2, ::Struct_2_C8DD384065D32AEE& a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&, ::Struct_2_C8DD384065D32AEE&, ::Struct_2_C8DD384065D32AEE&))((::PBYTE)hIl2Cpp + CLASS_4_9634C58086B1B007_METHOD_4_331F4D7452B7C6C9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_0F7B1BD3C324514D(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_9634C58086B1B007_METHOD_4_0F7B1BD3C324514D_OFFSET))(this, a1);
	}
};
