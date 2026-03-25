#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B704227BEFFD3A0B;
namespace RPG::GameCore { class BattleGridFightAvatarData; }

#define CLASS_2_B704227BEFFD3A0B___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8CCEC10)
#define CLASS_2_B704227BEFFD3A0B___C__DISPLAYCLASS15_0___ONBIND_GRIDFIGHT_B__0_OFFSET UNITYSDK_OFFSET(0x8CCFF40)

inline static constexpr unsigned int Class_2_B704227BEFFD3A0B___c__DisplayClass15_0_TypeDefinitionIndex = 58998;

class Class_2_B704227BEFFD3A0B___c__DisplayClass15_0 : public ::System::Object
{
public:
	::RPG::GameCore::BattleGridFightAvatarData* gridfightAvatarData; // 0x10
	::Class_2_B704227BEFFD3A0B* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B704227BEFFD3A0B___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
	}

	::System::Void __OnBind_GridFight_b__0(::System::Object* _)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B704227BEFFD3A0B___C__DISPLAYCLASS15_0___ONBIND_GRIDFIGHT_B__0_OFFSET))(this, _);
	}
};
