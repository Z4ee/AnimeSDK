#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_58.h"
#include "unitysdk/System/Object.h"

class Class_3_00D9F8D189C6D68A_5;
class Class_3_B4DF51B9FD8FA319_5;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E6F62BBF91246752__CTOR_OFFSET UNITYSDK_OFFSET(0x11186B20)

inline static constexpr unsigned int Class_1_E6F62BBF91246752_TypeDefinitionIndex = 76542;

class Class_1_E6F62BBF91246752 : public ::System::Object
{
public:
	::Class_3_B4DF51B9FD8FA319_5* Field_1_4; // 0x10
	::System::Collections::Generic::List_1<::Class_3_00D9F8D189C6D68A_5*>* Field_1_11; // 0x18
	::System::Boolean Field_1_5; // 0x20
	::System::Boolean Field_1_10; // 0x21
	::System::Boolean Field_1_9; // 0x22
	::System::UInt32 Field_1_7; // 0x24
	::Enum_3_0A3761FE34514D6C_58 Field_1_6; // 0x28
	::System::UInt32 Field_1_0; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6F62BBF91246752__CTOR_OFFSET))(this);
	}
};
