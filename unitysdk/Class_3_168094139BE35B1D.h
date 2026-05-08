#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_427CF9B2137C5720.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_E147DFD2A4EE8B0B.h"
#include "unitysdk/Struct_2_E33A8767CD3B76C6.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_168094139BE35B1D_METHOD_3_DA93AA6C5355C127_OFFSET UNITYSDK_OFFSET(0x12C5EFC0)
#define CLASS_3_168094139BE35B1D__CTOR_OFFSET UNITYSDK_OFFSET(0x12C5F170)

inline static constexpr unsigned int Class_3_168094139BE35B1D_TypeDefinitionIndex = 78497;

class Class_3_168094139BE35B1D : public ::Class_2_427CF9B2137C5720<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_168094139BE35B1D__CTOR_OFFSET))(this);
	}

	::Struct_2_E33A8767CD3B76C6 Method_3_DA93AA6C5355C127(::Struct_2_E147DFD2A4EE8B0B& a1)
	{
		return ((::Struct_2_E33A8767CD3B76C6(*)(::PVOID, ::Struct_2_E147DFD2A4EE8B0B&))((::PBYTE)hIl2Cpp + CLASS_3_168094139BE35B1D_METHOD_3_DA93AA6C5355C127_OFFSET))(this, a1);
	}
};
