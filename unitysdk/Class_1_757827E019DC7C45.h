#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_451601B8BB62C38C_10;
class Class_1_451601B8BB62C38C_7;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_757827E019DC7C45__CTOR_OFFSET UNITYSDK_OFFSET(0x11690820)

inline static constexpr unsigned int Class_1_757827E019DC7C45_TypeDefinitionIndex = 90288;

class Class_1_757827E019DC7C45 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_451601B8BB62C38C_10*>* Field_1_14; // 0x10
	::System::Collections::Generic::List_1<::Class_1_451601B8BB62C38C_7*>* Field_1_6; // 0x18
	::System::Boolean Field_1_15; // 0x20
	::System::Boolean Field_1_11; // 0x21
	::System::Boolean Field_1_8; // 0x22
	::System::Boolean Field_1_5; // 0x23
	::System::Boolean Field_1_4; // 0x24
	::System::Boolean Field_1_9; // 0x25
	::System::Boolean Field_1_10; // 0x26
	::System::Int32 Field_1_13; // 0x28
	::System::Int32 Field_1_7; // 0x2C
	::System::Int32 Field_1_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_757827E019DC7C45__CTOR_OFFSET))(this);
	}
};
