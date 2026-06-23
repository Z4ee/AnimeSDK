#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/Struct_2_E33A8767CD3B76C6.h"

class Class_4_425BBC3CBFD638A0;
class Class_4_425BBC3CBFD638A0_1;
class Class_4_866F4597C134539F;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_9634C58086B1B007_METHOD_4_0F7B1BD3C324514D_OFFSET UNITYSDK_OFFSET(0x1412B1B0)
#define CLASS_4_9634C58086B1B007_METHOD_4_331F4D7452B7C6C9_OFFSET UNITYSDK_OFFSET(0x1412B2D0)
#define CLASS_4_9634C58086B1B007_METHOD_4_FB0C5B230973BEC7_OFFSET UNITYSDK_OFFSET(0x1412B4B0)
#define CLASS_4_9634C58086B1B007__CTOR_OFFSET UNITYSDK_OFFSET(0x1412B140)

inline static constexpr unsigned int Class_4_9634C58086B1B007_TypeDefinitionIndex = 68169;

class Class_4_9634C58086B1B007 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_425BBC3CBFD638A0* Field_4_0; // 0x28
	::Class_4_425BBC3CBFD638A0_1* Field_4_1; // 0x30
	::Class_4_866F4597C134539F* Field_4_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_9634C58086B1B007__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_0F7B1BD3C324514D(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_9634C58086B1B007_METHOD_4_0F7B1BD3C324514D_OFFSET))(this, a1);
	}

	::System::Void Method_4_FB0C5B230973BEC7(::Struct_2_29439DBE2B63DCF3& a1, ::Struct_2_E33A8767CD3B76C6& a2, ::Struct_2_E33A8767CD3B76C6& a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&, ::Struct_2_E33A8767CD3B76C6&, ::Struct_2_E33A8767CD3B76C6&))((::PBYTE)hIl2Cpp + CLASS_4_9634C58086B1B007_METHOD_4_FB0C5B230973BEC7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_331F4D7452B7C6C9(::Struct_2_29439DBE2B63DCF3& a1, ::Struct_2_E33A8767CD3B76C6& a2, ::Struct_2_E33A8767CD3B76C6& a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&, ::Struct_2_E33A8767CD3B76C6&, ::Struct_2_E33A8767CD3B76C6&))((::PBYTE)hIl2Cpp + CLASS_4_9634C58086B1B007_METHOD_4_331F4D7452B7C6C9_OFFSET))(this, a1, a2, a3);
	}
};
