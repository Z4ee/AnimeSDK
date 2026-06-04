#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5D2C9913C560D5C3__CTOR_OFFSET UNITYSDK_OFFSET(0xDE60160)

inline static constexpr unsigned int Class_1_5D2C9913C560D5C3_TypeDefinitionIndex = 44888;

class Class_1_5D2C9913C560D5C3 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D2C9913C560D5C3__CTOR_OFFSET))(this);
	}
};
