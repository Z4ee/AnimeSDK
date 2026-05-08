#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_427CF9B2137C5720.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_E147DFD2A4EE8B0B.h"
#include "unitysdk/Struct_2_E33A8767CD3B76C6.h"

#define CLASS_3_66061C16C0C163AC_METHOD_3_1102911C892F05AA_OFFSET UNITYSDK_OFFSET(0x118AB1B0)
#define CLASS_3_66061C16C0C163AC__CTOR_OFFSET UNITYSDK_OFFSET(0x118AB300)

inline static constexpr unsigned int Class_3_66061C16C0C163AC_TypeDefinitionIndex = 58365;

class Class_3_66061C16C0C163AC : public ::Class_2_427CF9B2137C5720<::MoleMole::EntityHandle>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_66061C16C0C163AC__CTOR_OFFSET))(this);
	}

	::Struct_2_E33A8767CD3B76C6 Method_3_1102911C892F05AA(::Struct_2_E147DFD2A4EE8B0B& a1)
	{
		return ((::Struct_2_E33A8767CD3B76C6(*)(::PVOID, ::Struct_2_E147DFD2A4EE8B0B&))((::PBYTE)hIl2Cpp + CLASS_3_66061C16C0C163AC_METHOD_3_1102911C892F05AA_OFFSET))(this, a1);
	}
};
