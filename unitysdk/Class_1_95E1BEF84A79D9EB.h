#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2392F323E0E8E66E;
class Class_1_2392F323E0E8E66E_Class_1_36A0020EEB62E831_1;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Component; }

#define CLASS_1_95E1BEF84A79D9EB_METHOD_1_40F748D02BF31C7A_OFFSET UNITYSDK_OFFSET(0x14223E00)
#define CLASS_1_95E1BEF84A79D9EB_METHOD_1_674F73509924BD16_OFFSET UNITYSDK_OFFSET(0x14223F90)
#define CLASS_1_95E1BEF84A79D9EB_METHOD_1_6DA51058A1E24D64_OFFSET UNITYSDK_OFFSET(0x14223CC0)
#define CLASS_1_95E1BEF84A79D9EB__CTOR_OFFSET UNITYSDK_OFFSET(0x14224260)

inline static constexpr unsigned int Class_1_95E1BEF84A79D9EB_TypeDefinitionIndex = 66537;

class Class_1_95E1BEF84A79D9EB : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_2392F323E0E8E66E*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_2392F323E0E8E66E*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95E1BEF84A79D9EB__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6DA51058A1E24D64(::UnityEngine::Component* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + CLASS_1_95E1BEF84A79D9EB_METHOD_1_6DA51058A1E24D64_OFFSET))(this, a1);
	}

	::System::Void Method_1_40F748D02BF31C7A(::System::String* a1, ::Class_1_2392F323E0E8E66E_Class_1_36A0020EEB62E831_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_2392F323E0E8E66E_Class_1_36A0020EEB62E831_1*))((::PBYTE)hIl2Cpp + CLASS_1_95E1BEF84A79D9EB_METHOD_1_40F748D02BF31C7A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_674F73509924BD16()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95E1BEF84A79D9EB_METHOD_1_674F73509924BD16_OFFSET))(this);
	}
};
