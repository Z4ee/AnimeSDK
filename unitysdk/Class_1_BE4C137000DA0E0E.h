#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_BE4C137000DA0E0E__CTOR_OFFSET UNITYSDK_OFFSET(0x11D936F0)

inline static constexpr unsigned int Class_1_BE4C137000DA0E0E_TypeDefinitionIndex = 83492;

class Class_1_BE4C137000DA0E0E : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::String* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE4C137000DA0E0E__CTOR_OFFSET))(this);
	}
};
