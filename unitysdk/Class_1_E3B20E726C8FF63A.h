#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class IMessage; }
namespace System { class Action; }

#define CLASS_1_E3B20E726C8FF63A_METHOD_1_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x8CDCE40)
#define CLASS_1_E3B20E726C8FF63A__CTOR_OFFSET UNITYSDK_OFFSET(0x8CDCF20)

inline static constexpr unsigned int Class_1_E3B20E726C8FF63A_TypeDefinitionIndex = 56713;

class Class_1_E3B20E726C8FF63A : public ::System::Object
{
public:
	::System::Action* Field_1_2; // 0x10
	::Google::Protobuf::IMessage* Field_1_3; // 0x18
	::System::UInt16 Field_1_0; // 0x20
	::System::UInt16 Field_1_1; // 0x22

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3B20E726C8FF63A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4389275F4099DE36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3B20E726C8FF63A_METHOD_1_4389275F4099DE36_OFFSET))(this);
	}
};
