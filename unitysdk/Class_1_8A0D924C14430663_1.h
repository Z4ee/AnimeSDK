#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_1_8A0D924C14430663_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1157B760)

inline static constexpr unsigned int Class_1_8A0D924C14430663_1_TypeDefinitionIndex = 48009;

class Class_1_8A0D924C14430663_1 : public ::System::Object
{
public:
	::System::Boolean Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A0D924C14430663_1__CTOR_OFFSET))(this);
	}
};
