#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleScreenEffectType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_9268626D960D1854__CTOR_OFFSET UNITYSDK_OFFSET(0x15FB31C0)

inline static constexpr unsigned int Class_1_9268626D960D1854_TypeDefinitionIndex = 53093;

class Class_1_9268626D960D1854 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::RPG::GameCore::BattleScreenEffectType Field_1_2; // 0x20
	::System::Int32 Field_1_3; // 0x24
	::System::Boolean Field_1_4; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9268626D960D1854__CTOR_OFFSET))(this);
	}
};
