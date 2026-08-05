#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Span_1.h"

class Class_0_16E4307DCC419505_127;
class Class_3_ECB23EE6F0DD3A2A;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_24527869B3D2620F_METHOD_1_17720D0625823D9A_OFFSET UNITYSDK_OFFSET(0x1E3AA2D0)
#define CLASS_1_24527869B3D2620F_METHOD_1_2054F7FB85111D25_OFFSET UNITYSDK_OFFSET(0x1E3B6000)
#define CLASS_1_24527869B3D2620F_METHOD_1_50841A4123BC5B9B_OFFSET UNITYSDK_OFFSET(0x1E3ABE20)
#define CLASS_1_24527869B3D2620F_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1E3B5FF0)
#define CLASS_1_24527869B3D2620F__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3AA080)
#define CLASS_1_24527869B3D2620F__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3B5FE0)

inline static constexpr unsigned int Class_1_24527869B3D2620F_TypeDefinitionIndex = 34527;

class Class_1_24527869B3D2620F : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_127*>* Field_1_1; // 0x10
	::System::Int32 Field_1_6; // 0x18
	::System::Int32 Field_1_0; // 0x1C
	::System::Int32 Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24527869B3D2620F__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Int32 a1, ::System::Int32 a2, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_127*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_127*>*))((::PBYTE)hIl2Cpp + CLASS_1_24527869B3D2620F__CTOR_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_17720D0625823D9A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24527869B3D2620F_METHOD_1_17720D0625823D9A_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24527869B3D2620F_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Int32 Method_1_50841A4123BC5B9B(::System::Span_1<::System::Byte> a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Span_1<::System::Byte>, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_24527869B3D2620F_METHOD_1_50841A4123BC5B9B_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_3_ECB23EE6F0DD3A2A* Method_1_2054F7FB85111D25(::System::Int32 a1)
	{
		return ((::Class_3_ECB23EE6F0DD3A2A*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_24527869B3D2620F_METHOD_1_2054F7FB85111D25_OFFSET))(this, a1);
	}
};
