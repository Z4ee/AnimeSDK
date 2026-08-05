#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_945ACFB1FEBC7A2C_7;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_898E23CD4E44A533__CTOR_OFFSET UNITYSDK_OFFSET(0x14892DC0)

inline static constexpr unsigned int Class_1_898E23CD4E44A533_TypeDefinitionIndex = 72744;

class Class_1_898E23CD4E44A533 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_7*>* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_898E23CD4E44A533__CTOR_OFFSET))(this);
	}
};
