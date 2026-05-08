#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0A0B50D6899733CD;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5FB2F93A997B7BFE__CTOR_OFFSET UNITYSDK_OFFSET(0x10595790)

inline static constexpr unsigned int Class_1_5FB2F93A997B7BFE_TypeDefinitionIndex = 70792;

class Class_1_5FB2F93A997B7BFE : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::Class_1_0A0B50D6899733CD*>* Field_1_3; // 0x18
	::System::Boolean Field_1_0; // 0x20
	::System::Boolean Field_1_1; // 0x21

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FB2F93A997B7BFE__CTOR_OFFSET))(this);
	}
};
