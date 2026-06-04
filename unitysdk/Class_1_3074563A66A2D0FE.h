#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_62F6948CD584C7D5;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3074563A66A2D0FE_METHOD_1_E38032F31A03C376_OFFSET UNITYSDK_OFFSET(0xAEE6C20)
#define CLASS_1_3074563A66A2D0FE_METHOD_1_EDBE0DAF47EEEEED_OFFSET UNITYSDK_OFFSET(0xAEE6BA0)
#define CLASS_1_3074563A66A2D0FE__CTOR_OFFSET UNITYSDK_OFFSET(0xAEE7350)

inline static constexpr unsigned int Class_1_3074563A66A2D0FE_TypeDefinitionIndex = 56607;

class Class_1_3074563A66A2D0FE : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_62F6948CD584C7D5*>* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x1C
	::System::UInt64 Field_1_3; // 0x20
	::System::UInt64 Field_1_4; // 0x28
	::System::Int32 Field_1_5; // 0x30
	::System::Int32 Field_1_6; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3074563A66A2D0FE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EDBE0DAF47EEEEED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3074563A66A2D0FE_METHOD_1_EDBE0DAF47EEEEED_OFFSET))(this);
	}

	::System::String* Method_1_E38032F31A03C376()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3074563A66A2D0FE_METHOD_1_E38032F31A03C376_OFFSET))(this);
	}
};
