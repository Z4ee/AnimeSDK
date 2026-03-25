#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_235EAE06A792DE91;
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_235EAE06A792DE91___C__DISPLAYCLASS28_0__CREATETABLEENTITYANDVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x1166C6B0)
#define CLASS_2_235EAE06A792DE91___C__DISPLAYCLASS28_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11669C50)

inline static constexpr unsigned int Class_2_235EAE06A792DE91___c__DisplayClass28_0_TypeDefinitionIndex = 62925;

class Class_2_235EAE06A792DE91___c__DisplayClass28_0 : public ::System::Object
{
public:
	::System::Action_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* onTableLoad; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91___C__DISPLAYCLASS28_0__CTOR_OFFSET))(this);
	}

	::System::Void _CreateTableEntityAndView_b__0(::Class_2_235EAE06A792DE91* self, ::RPG::Client::LittleGame::ElfRestaurantGameEntity* ent, ::UnityEngine::Transform* parent)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_235EAE06A792DE91*, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91___C__DISPLAYCLASS28_0__CREATETABLEENTITYANDVIEW_B__0_OFFSET))(this, self, ent, parent);
	}
};
