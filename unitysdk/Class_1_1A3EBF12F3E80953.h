#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0E117AC86D8E5BCA;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1A3EBF12F3E80953__CTOR_OFFSET UNITYSDK_OFFSET(0x18AC3430)

inline static constexpr unsigned int Class_1_1A3EBF12F3E80953_TypeDefinitionIndex = 34569;

class Class_1_1A3EBF12F3E80953 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A3EBF12F3E80953__CTOR_OFFSET))(this);
	}
};
