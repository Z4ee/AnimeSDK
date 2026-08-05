#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_427CF9B2137C5720.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_174BD6D3EB04B2EE.h"
#include "unitysdk/Struct_2_C8DD384065D32AEE.h"

#define CLASS_3_29D212BD631928DE_1_METHOD_3_31C057A377CD9B27_OFFSET UNITYSDK_OFFSET(0x156B0500)
#define CLASS_3_29D212BD631928DE_1__CTOR_OFFSET UNITYSDK_OFFSET(0x156B0650)

inline static constexpr unsigned int Class_3_29D212BD631928DE_1_TypeDefinitionIndex = 78632;

class Class_3_29D212BD631928DE_1 : public ::Class_2_427CF9B2137C5720<::Foundation::ViewObject::ViewObjectHandle>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_29D212BD631928DE_1__CTOR_OFFSET))(this);
	}

	::Struct_2_C8DD384065D32AEE Method_3_31C057A377CD9B27(::Struct_2_174BD6D3EB04B2EE& a1)
	{
		return ((::Struct_2_C8DD384065D32AEE(*)(::PVOID, ::Struct_2_174BD6D3EB04B2EE&))((::PBYTE)hIl2Cpp + CLASS_3_29D212BD631928DE_1_METHOD_3_31C057A377CD9B27_OFFSET))(this, a1);
	}
};
