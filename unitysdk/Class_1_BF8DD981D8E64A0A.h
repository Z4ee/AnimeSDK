#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_95;
class Class_1_313BCD43C940284F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_BF8DD981D8E64A0A_METHOD_1_5940C5EBD57F7EDE_OFFSET UNITYSDK_OFFSET(0x1BFAFE80)
#define CLASS_1_BF8DD981D8E64A0A_METHOD_1_E04155EB9986C2FB_OFFSET UNITYSDK_OFFSET(0x1BFAFCF0)
#define CLASS_1_BF8DD981D8E64A0A__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFAFED0)

inline static constexpr unsigned int Class_1_BF8DD981D8E64A0A_TypeDefinitionIndex = 40226;

class Class_1_BF8DD981D8E64A0A : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF8DD981D8E64A0A__CTOR_OFFSET))(this);
	}

	static ::Class_0_16E4307DCC419505_95* Method_1_E04155EB9986C2FB(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_95*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BF8DD981D8E64A0A_METHOD_1_E04155EB9986C2FB_OFFSET))(a1);
	}

	static ::System::Void Method_1_5940C5EBD57F7EDE(::System::String* a1, ::System::Collections::Generic::IEnumerable_1<::Class_1_313BCD43C940284F*>* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::IEnumerable_1<::Class_1_313BCD43C940284F*>*))((::PBYTE)hIl2Cpp + CLASS_1_BF8DD981D8E64A0A_METHOD_1_5940C5EBD57F7EDE_OFFSET))(a1, a2);
	}
};
