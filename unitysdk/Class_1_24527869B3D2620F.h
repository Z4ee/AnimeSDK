#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Span_1.h"

class Class_0_16E4307DCC419505_90;
class Class_3_ECB23EE6F0DD3A2A;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_24527869B3D2620F_METHOD_1_2054F7FB85111D25_OFFSET UNITYSDK_OFFSET(0x1ABBE7B0)
#define CLASS_1_24527869B3D2620F_METHOD_1_36E51BE72B938C51_OFFSET UNITYSDK_OFFSET(0x1ABAD1E0)
#define CLASS_1_24527869B3D2620F_METHOD_1_50841A4123BC5B9B_OFFSET UNITYSDK_OFFSET(0x1ABB4330)
#define CLASS_1_24527869B3D2620F_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1ABBE590)
#define CLASS_1_24527869B3D2620F__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1ABACF90)
#define CLASS_1_24527869B3D2620F__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABBE580)

inline static constexpr unsigned int Class_1_24527869B3D2620F_TypeDefinitionIndex = 32341;

class Class_1_24527869B3D2620F : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_90*>* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x1C
	::System::Int32 Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24527869B3D2620F__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Int32 a1, ::System::Int32 a2, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_90*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_90*>*))((::PBYTE)hIl2Cpp + CLASS_1_24527869B3D2620F__CTOR_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_36E51BE72B938C51()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24527869B3D2620F_METHOD_1_36E51BE72B938C51_OFFSET))(this);
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
