#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1CD5437D668B7AFD_1;
namespace RPG::GameCore { class BattleGridFightAvatarData; }

#define CLASS_2_1CD5437D668B7AFD_1___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x96B1F00)
#define CLASS_2_1CD5437D668B7AFD_1___C__DISPLAYCLASS16_0___ONBIND_GRIDFIGHT_B__0_OFFSET UNITYSDK_OFFSET(0x96B32A0)

inline static constexpr unsigned int Class_2_1CD5437D668B7AFD_1___c__DisplayClass16_0_TypeDefinitionIndex = 66369;

class Class_2_1CD5437D668B7AFD_1___c__DisplayClass16_0 : public ::System::Object
{
public:
	::RPG::GameCore::BattleGridFightAvatarData* gridfightAvatarData; // 0x10
	::Class_2_1CD5437D668B7AFD_1* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1CD5437D668B7AFD_1___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
	}

	::System::Void __OnBind_GridFight_b__0(::System::Object* _)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_1CD5437D668B7AFD_1___C__DISPLAYCLASS16_0___ONBIND_GRIDFIGHT_B__0_OFFSET))(this, _);
	}
};
