#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_59778CA46DD656B4__CTOR_OFFSET UNITYSDK_OFFSET(0x14A72830)

inline static constexpr unsigned int Class_1_59778CA46DD656B4_TypeDefinitionIndex = 69710;

class Class_1_59778CA46DD656B4 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::Nullable_1<::System::Boolean> Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59778CA46DD656B4__CTOR_OFFSET))(this);
	}
};
