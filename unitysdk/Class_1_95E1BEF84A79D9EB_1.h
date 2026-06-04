#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C67A6979628184B7;
class Class_1_C67A6979628184B7_Class_1_36A0020EEB62E831;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Component; }

#define CLASS_1_95E1BEF84A79D9EB_1_METHOD_1_40F748D02BF31C7A_OFFSET UNITYSDK_OFFSET(0x1414B510)
#define CLASS_1_95E1BEF84A79D9EB_1_METHOD_1_674F73509924BD16_OFFSET UNITYSDK_OFFSET(0x1414B6A0)
#define CLASS_1_95E1BEF84A79D9EB_1_METHOD_1_6DA51058A1E24D64_OFFSET UNITYSDK_OFFSET(0x1414B3D0)
#define CLASS_1_95E1BEF84A79D9EB_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1414B970)

inline static constexpr unsigned int Class_1_95E1BEF84A79D9EB_1_TypeDefinitionIndex = 61657;

class Class_1_95E1BEF84A79D9EB_1 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_C67A6979628184B7*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_C67A6979628184B7*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95E1BEF84A79D9EB_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6DA51058A1E24D64(::UnityEngine::Component* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + CLASS_1_95E1BEF84A79D9EB_1_METHOD_1_6DA51058A1E24D64_OFFSET))(this, a1);
	}

	::System::Void Method_1_40F748D02BF31C7A(::System::String* a1, ::Class_1_C67A6979628184B7_Class_1_36A0020EEB62E831* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_C67A6979628184B7_Class_1_36A0020EEB62E831*))((::PBYTE)hIl2Cpp + CLASS_1_95E1BEF84A79D9EB_1_METHOD_1_40F748D02BF31C7A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_674F73509924BD16()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95E1BEF84A79D9EB_1_METHOD_1_674F73509924BD16_OFFSET))(this);
	}
};
