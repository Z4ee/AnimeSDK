#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CLASS_1_76DB84416A8BD8BA__CTOR_OFFSET UNITYSDK_OFFSET(0x162DD830)

inline static constexpr unsigned int Class_1_76DB84416A8BD8BA_TypeDefinitionIndex = 86729;

class Class_1_76DB84416A8BD8BA : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* Field_1_1; // 0x10
	::System::Boolean Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76DB84416A8BD8BA__CTOR_OFFSET))(this);
	}
};
