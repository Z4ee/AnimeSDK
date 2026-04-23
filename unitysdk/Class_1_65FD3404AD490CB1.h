#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D459106EFEFB0716;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_65FD3404AD490CB1_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x935F690)
#define CLASS_1_65FD3404AD490CB1__CTOR_OFFSET UNITYSDK_OFFSET(0x935F700)

inline static constexpr unsigned int Class_1_65FD3404AD490CB1_TypeDefinitionIndex = 49973;

class Class_1_65FD3404AD490CB1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_D459106EFEFB0716*>* Field_1_10; // 0x10
	::System::String* Field_1_7; // 0x18
	::System::Single Field_1_3; // 0x20
	::System::Single Field_1_1; // 0x24
	::System::Single Field_1_4; // 0x28
	::UnityEngine::Vector3 Field_1_9; // 0x2C
	::System::Boolean Field_1_6; // 0x38
	::System::Boolean Field_1_8; // 0x39
	::System::Boolean Field_1_5; // 0x3A
	::System::Int32 Field_1_0; // 0x3C
	::System::Single Field_1_2; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65FD3404AD490CB1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65FD3404AD490CB1_METHOD_1_9681042564541CD6_OFFSET))(this);
	}
};
