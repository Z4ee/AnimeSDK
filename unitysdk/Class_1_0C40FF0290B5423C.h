#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActionBarUIStatus.h"
#include "unitysdk/System/Object.h"

class Class_1_945ACFB1FEBC7A2C_20;
namespace System { class String; }

#define CLASS_1_0C40FF0290B5423C__CTOR_OFFSET UNITYSDK_OFFSET(0x109EF960)

inline static constexpr unsigned int Class_1_0C40FF0290B5423C_TypeDefinitionIndex = 60052;

class Class_1_0C40FF0290B5423C : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_945ACFB1FEBC7A2C_20*>* Field_1_3; // 0x10
	::System::String* Field_1_1; // 0x18
	::RPG::GameCore::ActionBarUIStatus Field_1_0; // 0x20
	::System::Boolean Field_1_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C40FF0290B5423C__CTOR_OFFSET))(this);
	}
};
