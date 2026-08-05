#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_38;
namespace System { template <typename T> class Func_1; }

#define CLASS_1_AC0D027A24B2C21B__CTOR_OFFSET UNITYSDK_OFFSET(0xE546010)

inline static constexpr unsigned int Class_1_AC0D027A24B2C21B_TypeDefinitionIndex = 90491;

class Class_1_AC0D027A24B2C21B : public ::System::Object
{
public:
	::System::Func_1<::Class_1_43BD383C98B4C0C5_38*>* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor(::System::Boolean a1, ::System::Func_1<::Class_1_43BD383C98B4C0C5_38*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Func_1<::Class_1_43BD383C98B4C0C5_38*>*))((::PBYTE)hIl2Cpp + CLASS_1_AC0D027A24B2C21B__CTOR_OFFSET))(this, a1, a2);
	}
};
