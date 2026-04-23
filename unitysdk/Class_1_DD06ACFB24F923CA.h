#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActionBarUIStatus.h"
#include "unitysdk/System/Object.h"

class Class_1_945ACFB1FEBC7A2C_20;
namespace System { class String; }

#define CLASS_1_DD06ACFB24F923CA__CTOR_OFFSET UNITYSDK_OFFSET(0x11F16DE0)

inline static constexpr unsigned int Class_1_DD06ACFB24F923CA_TypeDefinitionIndex = 67485;

class Class_1_DD06ACFB24F923CA : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::Il2CppArray<::Class_1_945ACFB1FEBC7A2C_20*>* Field_1_3; // 0x18
	::System::Boolean Field_1_2; // 0x20
	::RPG::GameCore::ActionBarUIStatus Field_1_0; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD06ACFB24F923CA__CTOR_OFFSET))(this);
	}
};
