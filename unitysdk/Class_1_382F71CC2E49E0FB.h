#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class IMessage; }
namespace System { class Action; }

#define CLASS_1_382F71CC2E49E0FB_METHOD_1_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0x13C54CC0)
#define CLASS_1_382F71CC2E49E0FB__CTOR_OFFSET UNITYSDK_OFFSET(0x13C54DA0)

inline static constexpr unsigned int Class_1_382F71CC2E49E0FB_TypeDefinitionIndex = 64879;

class Class_1_382F71CC2E49E0FB : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::Google::Protobuf::IMessage* Field_1_1; // 0x18
	::System::UInt16 Field_1_2; // 0x20
	::System::UInt16 Field_1_3; // 0x22

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_382F71CC2E49E0FB__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BBA49FAB086F388D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_382F71CC2E49E0FB_METHOD_1_BBA49FAB086F388D_OFFSET))(this);
	}
};
