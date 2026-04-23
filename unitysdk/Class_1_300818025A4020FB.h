#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_77;
class Class_1_74F732AB6D78C9D0;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_300818025A4020FB_METHOD_1_9B571C9D97355C10_OFFSET UNITYSDK_OFFSET(0x17AEDE80)
#define CLASS_1_300818025A4020FB_METHOD_1_E04155EB9986C2FB_OFFSET UNITYSDK_OFFSET(0x17AED8C0)
#define CLASS_1_300818025A4020FB__CTOR_OFFSET UNITYSDK_OFFSET(0x17AEE500)

inline static constexpr unsigned int Class_1_300818025A4020FB_TypeDefinitionIndex = 37811;

class Class_1_300818025A4020FB : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_300818025A4020FB__CTOR_OFFSET))(this);
	}

	static ::Class_0_16E4307DCC419505_77* Method_1_E04155EB9986C2FB(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_77*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_300818025A4020FB_METHOD_1_E04155EB9986C2FB_OFFSET))(a1);
	}

	static ::System::Void Method_1_9B571C9D97355C10(::System::String* a1, ::System::Collections::Generic::IEnumerable_1<::Class_1_74F732AB6D78C9D0*>* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::IEnumerable_1<::Class_1_74F732AB6D78C9D0*>*))((::PBYTE)hIl2Cpp + CLASS_1_300818025A4020FB_METHOD_1_9B571C9D97355C10_OFFSET))(a1, a2);
	}
};
