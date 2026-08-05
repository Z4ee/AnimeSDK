#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_1_34B3048095D388ED__CTOR_OFFSET UNITYSDK_OFFSET(0x1292B950)

inline static constexpr unsigned int Class_1_34B3048095D388ED_TypeDefinitionIndex = 46679;

class Class_1_34B3048095D388ED : public ::System::Object
{
public:
	::System::Action_2<::System::Single, ::System::Boolean>* Field_1_6; // 0x10
	::System::Boolean Field_1_0; // 0x18
	::System::Single Field_1_1; // 0x1C
	::System::Single Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34B3048095D388ED__CTOR_OFFSET))(this);
	}
};
