#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CLASS_1_967DF66E87477F97__CTOR_OFFSET UNITYSDK_OFFSET(0x1A86FF10)

inline static constexpr unsigned int Class_1_967DF66E87477F97_TypeDefinitionIndex = 58080;

class Class_1_967DF66E87477F97 : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* Field_1_3; // 0x10
	::System::Int32 Field_1_2; // 0x18
	::System::Int32 Field_1_0; // 0x1C
	::System::Boolean Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_967DF66E87477F97__CTOR_OFFSET))(this);
	}
};
