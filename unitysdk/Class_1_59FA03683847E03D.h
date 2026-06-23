#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_7D31A50BD2150408.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_59FA03683847E03D_METHOD_1_7F52C63BAD7AD59D_OFFSET UNITYSDK_OFFSET(0x16E3DA40)
#define CLASS_1_59FA03683847E03D__CTOR_OFFSET UNITYSDK_OFFSET(0x16E3DB10)

inline static constexpr unsigned int Class_1_59FA03683847E03D_TypeDefinitionIndex = 84291;

class Class_1_59FA03683847E03D : public ::System::Object
{
public:
	::System::Func_2<::MoleMole::EntityHandle, ::System::Boolean>* Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59FA03683847E03D__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_7F52C63BAD7AD59D(::Struct_2_7D31A50BD2150408 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_7D31A50BD2150408))((::PBYTE)hIl2Cpp + CLASS_1_59FA03683847E03D_METHOD_1_7F52C63BAD7AD59D_OFFSET))(this, a1);
	}
};
