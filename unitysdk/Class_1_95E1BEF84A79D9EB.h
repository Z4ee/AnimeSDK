#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2392F323E0E8E66E;
class Class_1_2392F323E0E8E66E_Class_1_36A0020EEB62E831_1;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Component; }

#define CLASS_1_95E1BEF84A79D9EB_METHOD_1_40F748D02BF31C7A_OFFSET UNITYSDK_OFFSET(0x114599A0)
#define CLASS_1_95E1BEF84A79D9EB_METHOD_1_55B8349E0B606444_OFFSET UNITYSDK_OFFSET(0x11459B30)
#define CLASS_1_95E1BEF84A79D9EB_METHOD_1_6F7510FDC7A6B9ED_OFFSET UNITYSDK_OFFSET(0x11459830)
#define CLASS_1_95E1BEF84A79D9EB__CTOR_OFFSET UNITYSDK_OFFSET(0x11459DC0)

inline static constexpr unsigned int Class_1_95E1BEF84A79D9EB_TypeDefinitionIndex = 58316;

class Class_1_95E1BEF84A79D9EB : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_2392F323E0E8E66E*>* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_2392F323E0E8E66E*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95E1BEF84A79D9EB__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6F7510FDC7A6B9ED(::UnityEngine::Component* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + CLASS_1_95E1BEF84A79D9EB_METHOD_1_6F7510FDC7A6B9ED_OFFSET))(this, a1);
	}

	::System::Void Method_1_40F748D02BF31C7A(::System::String* a1, ::Class_1_2392F323E0E8E66E_Class_1_36A0020EEB62E831_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_2392F323E0E8E66E_Class_1_36A0020EEB62E831_1*))((::PBYTE)hIl2Cpp + CLASS_1_95E1BEF84A79D9EB_METHOD_1_40F748D02BF31C7A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_55B8349E0B606444()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95E1BEF84A79D9EB_METHOD_1_55B8349E0B606444_OFFSET))(this);
	}
};
