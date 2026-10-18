#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActionBarUIStatus.h"
#include "unitysdk/System/Object.h"

class Class_1_945ACFB1FEBC7A2C_22;
namespace System { class String; }

#define CLASS_1_1FFDD73C4573633F__CTOR_OFFSET UNITYSDK_OFFSET(0x158A20C0)

inline static constexpr unsigned int Class_1_1FFDD73C4573633F_TypeDefinitionIndex = 73284;

class Class_1_1FFDD73C4573633F : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_945ACFB1FEBC7A2C_22*>* MOJOOLJFAIG; // 0x10
	::System::String* IPKCFNKIDMB; // 0x18
	::RPG::GameCore::ActionBarUIStatus FFEPLIHOFLA; // 0x20
	::System::Boolean FMAKHJFGGHJ; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1FFDD73C4573633F__CTOR_OFFSET))(this);
	}
};
