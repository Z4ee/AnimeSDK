#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_277F99B3E754A6A7__CTOR_OFFSET UNITYSDK_OFFSET(0x1176C310)

inline static constexpr unsigned int Class_1_277F99B3E754A6A7_TypeDefinitionIndex = 79546;

class Class_1_277F99B3E754A6A7 : public ::System::Object
{
public:
	::System::String* Field_1_2; // 0x10
	::System::Action* Field_1_4; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_1; // 0x20
	::System::Int32 Field_1_0; // 0x28
	::System::Int32 Field_1_3; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_277F99B3E754A6A7__CTOR_OFFSET))(this);
	}
};
