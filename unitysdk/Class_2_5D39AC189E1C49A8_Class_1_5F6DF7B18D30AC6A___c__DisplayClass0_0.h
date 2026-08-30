#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"

class Class_2_5D39AC189E1C49A8;
class Class_2_5D39AC189E1C49A8_Class_1_5F6DF7B18D30AC6A;
namespace RPG::Client { class MonoEffect; }

#define CLASS_2_5D39AC189E1C49A8_CLASS_1_5F6DF7B18D30AC6A___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1607F8A0)
#define CLASS_2_5D39AC189E1C49A8_CLASS_1_5F6DF7B18D30AC6A___C__DISPLAYCLASS0_0___CTOR_B__0_OFFSET UNITYSDK_OFFSET(0x1607F9A0)

inline static constexpr unsigned int Class_2_5D39AC189E1C49A8_Class_1_5F6DF7B18D30AC6A___c__DisplayClass0_0_TypeDefinitionIndex = 57484;

class Class_2_5D39AC189E1C49A8_Class_1_5F6DF7B18D30AC6A___c__DisplayClass0_0 : public ::System::Object
{
public:
	::Class_2_5D39AC189E1C49A8* monoEffectComponent; // 0x10
	::Class_2_5D39AC189E1C49A8_Class_1_5F6DF7B18D30AC6A* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_CLASS_1_5F6DF7B18D30AC6A___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
	}

	::System::Void __ctor_b__0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_2_5D39AC189E1C49A8_CLASS_1_5F6DF7B18D30AC6A___C__DISPLAYCLASS0_0___CTOR_B__0_OFFSET))(this, a1, a2);
	}
};
