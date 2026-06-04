#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ChenLingFes { class ChenLingFesGameplayItemViewModel; }

#define CLASS_1_7550321EC955956C__CTOR_OFFSET UNITYSDK_OFFSET(0xA7EA060)

inline static constexpr unsigned int Class_1_7550321EC955956C_TypeDefinitionIndex = 73929;

class Class_1_7550321EC955956C : public ::System::Object
{
public:
	::RPG::Client::ChenLingFes::ChenLingFesGameplayItemViewModel* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7550321EC955956C__CTOR_OFFSET))(this, a1);
	}
};
