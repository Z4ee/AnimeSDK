#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_EC9E7818B91C3AA0.h"
#include "unitysdk/System/Object.h"

class Class_1_87F0035AB3018CD9;
namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_87F0035AB3018CD9_CLASS_1_85517C2CD910418D_METHOD_1_E2AB539F25FE7797_OFFSET UNITYSDK_OFFSET(0x178EE220)
#define CLASS_1_87F0035AB3018CD9_CLASS_1_85517C2CD910418D__CTOR_OFFSET UNITYSDK_OFFSET(0x178EE210)

inline static constexpr unsigned int Class_1_87F0035AB3018CD9_Class_1_85517C2CD910418D_TypeDefinitionIndex = 76068;

class Class_1_87F0035AB3018CD9_Class_1_85517C2CD910418D : public ::System::Object
{
public:
	::System::Action_1<::System::EventArgs*>* Field_1_1; // 0x10
	::Class_1_87F0035AB3018CD9* Field_1_0; // 0x18
	::Enum_3_EC9E7818B91C3AA0 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87F0035AB3018CD9_CLASS_1_85517C2CD910418D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E2AB539F25FE7797(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_87F0035AB3018CD9_CLASS_1_85517C2CD910418D_METHOD_1_E2AB539F25FE7797_OFFSET))(this, a1);
	}
};
