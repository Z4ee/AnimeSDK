#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_579DDCBEB4529D20;
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_579DDCBEB4529D20___C__DISPLAYCLASS28_0__CREATETABLEENTITYANDVIEW_B__0_OFFSET UNITYSDK_OFFSET(0xBBEFDC0)
#define CLASS_2_579DDCBEB4529D20___C__DISPLAYCLASS28_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBBED350)

inline static constexpr unsigned int Class_2_579DDCBEB4529D20___c__DisplayClass28_0_TypeDefinitionIndex = 76792;

class Class_2_579DDCBEB4529D20___c__DisplayClass28_0 : public ::System::Object
{
public:
	::System::Action_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* onTableLoad; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_579DDCBEB4529D20___C__DISPLAYCLASS28_0__CTOR_OFFSET))(this);
	}

	::System::Void _CreateTableEntityAndView_b__0(::Class_2_579DDCBEB4529D20* a1, ::RPG::Client::LittleGame::ElfRestaurantGameEntity* a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_579DDCBEB4529D20*, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_579DDCBEB4529D20___C__DISPLAYCLASS28_0__CREATETABLEENTITYANDVIEW_B__0_OFFSET))(this, a1, a2, a3);
	}
};
