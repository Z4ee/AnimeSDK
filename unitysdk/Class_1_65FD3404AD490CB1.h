#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D459106EFEFB0716;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_65FD3404AD490CB1_METHOD_1_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0x14D83AD0)
#define CLASS_1_65FD3404AD490CB1__CTOR_OFFSET UNITYSDK_OFFSET(0x14D83B70)

inline static constexpr unsigned int Class_1_65FD3404AD490CB1_TypeDefinitionIndex = 51722;

class Class_1_65FD3404AD490CB1 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_D459106EFEFB0716*>* Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x20
	::System::Single Field_1_3; // 0x24
	::System::Single Field_1_4; // 0x28
	::UnityEngine::Vector3 Field_1_5; // 0x2C
	::System::Boolean Field_1_6; // 0x38
	::System::Boolean Field_1_7; // 0x39
	::System::Boolean Field_1_8; // 0x3A
	::System::Single Field_1_9; // 0x3C
	::System::Int32 Field_1_10; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65FD3404AD490CB1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EBEE0D0A222A8264()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65FD3404AD490CB1_METHOD_1_EBEE0D0A222A8264_OFFSET))(this);
	}
};
