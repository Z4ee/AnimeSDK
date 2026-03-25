#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3A7B270FE0BE90AE;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DBCFFD8B921CBC69__CTOR_1_OFFSET UNITYSDK_OFFSET(0x166458B0)
#define CLASS_1_DBCFFD8B921CBC69__CTOR_2_OFFSET UNITYSDK_OFFSET(0x16645DE0)
#define CLASS_1_DBCFFD8B921CBC69__CTOR_OFFSET UNITYSDK_OFFSET(0x166458A0)

inline static constexpr unsigned int Class_1_DBCFFD8B921CBC69_TypeDefinitionIndex = 28404;

class Class_1_DBCFFD8B921CBC69 : public ::System::Object
{
public:
	::System::String* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_5; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_7; // 0x20
	::System::String* Field_1_1; // 0x28
	::System::UInt32 Field_1_8; // 0x30
	::System::UInt32 Field_1_6; // 0x34
	::System::UInt32 Field_1_4; // 0x38
	::System::UInt32 Field_1_0; // 0x3C
	::System::Boolean Field_1_3; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBCFFD8B921CBC69__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_3A7B270FE0BE90AE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3A7B270FE0BE90AE*))((::PBYTE)hIl2Cpp + CLASS_1_DBCFFD8B921CBC69__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void _ctor_2(::Class_1_DBCFFD8B921CBC69* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DBCFFD8B921CBC69*))((::PBYTE)hIl2Cpp + CLASS_1_DBCFFD8B921CBC69__CTOR_2_OFFSET))(this, a1);
	}
};
