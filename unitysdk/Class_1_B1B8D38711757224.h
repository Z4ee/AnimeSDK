#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B553C21756B27967;
class Class_1_C50F5982E5600913;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B1B8D38711757224__CTOR_1_OFFSET UNITYSDK_OFFSET(0x14AB5380)
#define CLASS_1_B1B8D38711757224__CTOR_2_OFFSET UNITYSDK_OFFSET(0x14AB5A40)
#define CLASS_1_B1B8D38711757224__CTOR_3_OFFSET UNITYSDK_OFFSET(0x14AB5B00)
#define CLASS_1_B1B8D38711757224__CTOR_OFFSET UNITYSDK_OFFSET(0x14AB5370)

inline static constexpr unsigned int Class_1_B1B8D38711757224_TypeDefinitionIndex = 34732;

class Class_1_B1B8D38711757224 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20
	::System::String* Field_1_3; // 0x28
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_4; // 0x30
	::System::UInt32 Field_1_5; // 0x38
	::System::Int32 Field_1_6; // 0x3C
	::System::UInt32 Field_1_7; // 0x40
	::System::UInt32 Field_1_8; // 0x44
	::System::UInt32 Field_1_9; // 0x48
	::System::Boolean Field_1_10; // 0x4C
	::System::Boolean Field_1_11; // 0x4D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1B8D38711757224__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C50F5982E5600913* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C50F5982E5600913*))((::PBYTE)hIl2Cpp + CLASS_1_B1B8D38711757224__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void _ctor_2(::Class_1_B1B8D38711757224* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B1B8D38711757224*))((::PBYTE)hIl2Cpp + CLASS_1_B1B8D38711757224__CTOR_2_OFFSET))(this, a1);
	}

	::System::Void _ctor_3(::Class_1_B553C21756B27967* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B553C21756B27967*))((::PBYTE)hIl2Cpp + CLASS_1_B1B8D38711757224__CTOR_3_OFFSET))(this, a1);
	}
};
