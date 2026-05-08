#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_EEDDB1C7E7D13854.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_7898AD955658DC56_METHOD_1_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0xF235220)
#define CLASS_1_7898AD955658DC56_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0xF235210)
#define CLASS_1_7898AD955658DC56__CTOR_OFFSET UNITYSDK_OFFSET(0xF235270)

inline static constexpr unsigned int Class_1_7898AD955658DC56_TypeDefinitionIndex = 50817;

class Class_1_7898AD955658DC56 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::Enum_3_EEDDB1C7E7D13854 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7898AD955658DC56__CTOR_OFFSET))(this);
	}

	::Enum_3_EEDDB1C7E7D13854 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_EEDDB1C7E7D13854(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7898AD955658DC56_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_7898AD955658DC56_METHOD_1_04AF66402B9859B9_OFFSET))(this, a1);
	}
};
