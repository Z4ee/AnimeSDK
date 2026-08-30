#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B8FF829EFDD29B81;
class Class_1_F65B6F8790DF074B;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }

#define CLASS_1_9EFE0111D05BA8C5_METHOD_1_8F56CC9667DE4436_OFFSET UNITYSDK_OFFSET(0x16181290)
#define CLASS_1_9EFE0111D05BA8C5__CTOR_OFFSET UNITYSDK_OFFSET(0x16181AA0)

inline static constexpr unsigned int Class_1_9EFE0111D05BA8C5_TypeDefinitionIndex = 77391;

class Class_1_9EFE0111D05BA8C5 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EFE0111D05BA8C5__CTOR_OFFSET))(this);
	}

	static ::Class_1_F65B6F8790DF074B* Method_1_8F56CC9667DE4436(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::Class_1_B8FF829EFDD29B81* a2)
	{
		return ((::Class_1_F65B6F8790DF074B*(*)(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::Class_1_B8FF829EFDD29B81*))((::PBYTE)hIl2Cpp + CLASS_1_9EFE0111D05BA8C5_METHOD_1_8F56CC9667DE4436_OFFSET))(a1, a2);
	}
};
