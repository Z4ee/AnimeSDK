#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_C28CEB2A4B26C9A7.h"
#include "unitysdk/System/Object.h"

class Class_1_E0756AA8DCAA6C36;
namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_E0756AA8DCAA6C36_CLASS_1_85517C2CD910418D_METHOD_1_E2AB539F25FE7797_OFFSET UNITYSDK_OFFSET(0x132B0380)
#define CLASS_1_E0756AA8DCAA6C36_CLASS_1_85517C2CD910418D__CTOR_OFFSET UNITYSDK_OFFSET(0x132B0370)

inline static constexpr unsigned int Class_1_E0756AA8DCAA6C36_Class_1_85517C2CD910418D_TypeDefinitionIndex = 53984;

class Class_1_E0756AA8DCAA6C36_Class_1_85517C2CD910418D : public ::System::Object
{
public:
	::System::Action_1<::System::EventArgs*>* Field_1_7; // 0x10
	::Class_1_E0756AA8DCAA6C36* Field_1_0; // 0x18
	::Enum_3_C28CEB2A4B26C9A7 Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0756AA8DCAA6C36_CLASS_1_85517C2CD910418D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E2AB539F25FE7797(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_E0756AA8DCAA6C36_CLASS_1_85517C2CD910418D_METHOD_1_E2AB539F25FE7797_OFFSET))(this, a1);
	}
};
