#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D35B5D4865AF7021;

#define MOLEMOLE_UITOWERDEFENSEMAINPAGECONTROLLER___C__DISPLAYCLASS74_0__CTOR_OFFSET UNITYSDK_OFFSET(0x103F5540)
#define MOLEMOLE_UITOWERDEFENSEMAINPAGECONTROLLER___C__DISPLAYCLASS74_0__UPDATE_B__0_OFFSET UNITYSDK_OFFSET(0x103F5550)

namespace MoleMole
{
	inline static constexpr unsigned int UITowerDefenseMainPageController___c__DisplayClass74_0_TypeDefinitionIndex = 52002;

	class UITowerDefenseMainPageController___c__DisplayClass74_0 : public ::System::Object
	{
	public:
		::System::Single deltaTime; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEMAINPAGECONTROLLER___C__DISPLAYCLASS74_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _Update_b__0(::Class_1_D35B5D4865AF7021* bullet)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_D35B5D4865AF7021*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEMAINPAGECONTROLLER___C__DISPLAYCLASS74_0__UPDATE_B__0_OFFSET))(this, bullet);
		}
	};
}
