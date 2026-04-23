#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_36006FC25F5DDC69;
class Class_1_F65B6F8790DF074B;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }

#define CLASS_1_5E724A1E6546E62A_METHOD_1_4B89E390AE0F2C63_OFFSET UNITYSDK_OFFSET(0x12920C50)
#define CLASS_1_5E724A1E6546E62A__CTOR_OFFSET UNITYSDK_OFFSET(0x12923980)

inline static constexpr unsigned int Class_1_5E724A1E6546E62A_TypeDefinitionIndex = 71359;

class Class_1_5E724A1E6546E62A : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E724A1E6546E62A__CTOR_OFFSET))(this);
	}

	static ::Class_1_F65B6F8790DF074B* Method_1_4B89E390AE0F2C63(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::Class_1_36006FC25F5DDC69* a2)
	{
		return ((::Class_1_F65B6F8790DF074B*(*)(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::Class_1_36006FC25F5DDC69*))((::PBYTE)hIl2Cpp + CLASS_1_5E724A1E6546E62A_METHOD_1_4B89E390AE0F2C63_OFFSET))(a1, a2);
	}
};
