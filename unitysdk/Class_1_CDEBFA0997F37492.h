#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_CDEBFA0997F37492_METHOD_1_6AFDC50424099C5A_OFFSET UNITYSDK_OFFSET(0xB4A3B40)
#define CLASS_1_CDEBFA0997F37492__CTOR_OFFSET UNITYSDK_OFFSET(0xB4A3BC0)

inline static constexpr unsigned int Class_1_CDEBFA0997F37492_TypeDefinitionIndex = 45676;

class Class_1_CDEBFA0997F37492 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDEBFA0997F37492__CTOR_OFFSET))(this);
	}

	static ::System::String* Method_1_6AFDC50424099C5A(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CDEBFA0997F37492_METHOD_1_6AFDC50424099C5A_OFFSET))(a1);
	}
};
