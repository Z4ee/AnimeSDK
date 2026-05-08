#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0EF1FE815B5E0EF7__CTOR_OFFSET UNITYSDK_OFFSET(0x11DC1450)

inline static constexpr unsigned int Class_1_0EF1FE815B5E0EF7_TypeDefinitionIndex = 68000;

class Class_1_0EF1FE815B5E0EF7 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EF1FE815B5E0EF7__CTOR_OFFSET))(this);
	}
};
