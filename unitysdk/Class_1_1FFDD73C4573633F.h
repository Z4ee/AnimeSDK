#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActionBarUIStatus.h"
#include "unitysdk/System/Object.h"

class Class_1_945ACFB1FEBC7A2C_21;
namespace System { class String; }

#define CLASS_1_1FFDD73C4573633F__CTOR_OFFSET UNITYSDK_OFFSET(0x13934960)

inline static constexpr unsigned int Class_1_1FFDD73C4573633F_TypeDefinitionIndex = 68437;

class Class_1_1FFDD73C4573633F : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_945ACFB1FEBC7A2C_21*>* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x20
	::RPG::GameCore::ActionBarUIStatus Field_1_3; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1FFDD73C4573633F__CTOR_OFFSET))(this);
	}
};
