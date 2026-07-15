#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_68C7EAEDA46C0580_PlayerMoveState.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_68C7EAEDA46C0580__CTOR_OFFSET UNITYSDK_OFFSET(0x17582C40)

inline static constexpr unsigned int Class_1_68C7EAEDA46C0580_TypeDefinitionIndex = 40614;

class Class_1_68C7EAEDA46C0580 : public ::System::Object
{
public:
	::System::Boolean Field_1_0; // 0x10
	::Class_1_68C7EAEDA46C0580_PlayerMoveState Field_1_1; // 0x14
	::System::Single Field_1_2; // 0x18
	::Class_1_68C7EAEDA46C0580_PlayerMoveState Field_1_3; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68C7EAEDA46C0580__CTOR_OFFSET))(this);
	}
};
