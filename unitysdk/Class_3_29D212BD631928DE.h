#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_427CF9B2137C5720.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_174BD6D3EB04B2EE.h"
#include "unitysdk/Struct_2_C8DD384065D32AEE.h"

#define CLASS_3_29D212BD631928DE_METHOD_3_31C057A377CD9B27_OFFSET UNITYSDK_OFFSET(0x17CE7BA0)
#define CLASS_3_29D212BD631928DE__CTOR_OFFSET UNITYSDK_OFFSET(0x17CE7CF0)

inline static constexpr unsigned int Class_3_29D212BD631928DE_TypeDefinitionIndex = 43726;

class Class_3_29D212BD631928DE : public ::Class_2_427CF9B2137C5720<::MoleMole::EntityHandle>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_29D212BD631928DE__CTOR_OFFSET))(this);
	}

	::Struct_2_C8DD384065D32AEE Method_3_31C057A377CD9B27(::Struct_2_174BD6D3EB04B2EE& a1)
	{
		return ((::Struct_2_C8DD384065D32AEE(*)(::PVOID, ::Struct_2_174BD6D3EB04B2EE&))((::PBYTE)hIl2Cpp + CLASS_3_29D212BD631928DE_METHOD_3_31C057A377CD9B27_OFFSET))(this, a1);
	}
};
