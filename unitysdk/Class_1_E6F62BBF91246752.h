#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_49.h"
#include "unitysdk/System/Object.h"

class Class_3_00D9F8D189C6D68A_1;
class Class_3_8B105A7A395EB390_3;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E6F62BBF91246752__CTOR_OFFSET UNITYSDK_OFFSET(0x111DCBA0)

inline static constexpr unsigned int Class_1_E6F62BBF91246752_TypeDefinitionIndex = 53941;

class Class_1_E6F62BBF91246752 : public ::System::Object
{
public:
	::Class_3_8B105A7A395EB390_3* Field_1_4; // 0x10
	::System::Collections::Generic::List_1<::Class_3_00D9F8D189C6D68A_1*>* Field_1_5; // 0x18
	::Enum_3_0A3761FE34514D6C_49 Field_1_2; // 0x20
	::System::UInt32 Field_1_0; // 0x24
	::System::UInt32 Field_1_1; // 0x28
	::System::Boolean Field_1_7; // 0x2C
	::System::Boolean Field_1_3; // 0x2D
	::System::Boolean Field_1_6; // 0x2E

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6F62BBF91246752__CTOR_OFFSET))(this);
	}
};
