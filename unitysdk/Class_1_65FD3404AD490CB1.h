#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D459106EFEFB0716;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_65FD3404AD490CB1_METHOD_1_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0xAEE3310)
#define CLASS_1_65FD3404AD490CB1__CTOR_OFFSET UNITYSDK_OFFSET(0xAEE33B0)

inline static constexpr unsigned int Class_1_65FD3404AD490CB1_TypeDefinitionIndex = 50640;

class Class_1_65FD3404AD490CB1 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_D459106EFEFB0716*>* Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x24
	::System::Boolean Field_1_4; // 0x25
	::System::Boolean Field_1_5; // 0x26
	::UnityEngine::Vector3 Field_1_6; // 0x28
	::System::Single Field_1_7; // 0x34
	::System::Int32 Field_1_8; // 0x38
	::System::Single Field_1_9; // 0x3C
	::System::Single Field_1_10; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65FD3404AD490CB1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EBEE0D0A222A8264()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65FD3404AD490CB1_METHOD_1_EBEE0D0A222A8264_OFFSET))(this);
	}
};
