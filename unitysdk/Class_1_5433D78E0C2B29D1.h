#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1685EC66FBD28897;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5433D78E0C2B29D1__CTOR_OFFSET UNITYSDK_OFFSET(0xFAB90D0)

inline static constexpr unsigned int Class_1_5433D78E0C2B29D1_TypeDefinitionIndex = 68002;

class Class_1_5433D78E0C2B29D1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* Field_1_1; // 0x10
	::System::Action* Field_1_2; // 0x18
	::System::String* Field_1_4; // 0x20
	::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* Field_1_0; // 0x28
	::System::String* Field_1_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5433D78E0C2B29D1__CTOR_OFFSET))(this);
	}
};
