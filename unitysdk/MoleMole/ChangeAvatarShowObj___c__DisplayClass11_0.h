#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;
namespace MoleMole { class ChangeAvatarShowObj; }

#define MOLEMOLE_CHANGEAVATARSHOWOBJ___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0xF128490)
#define MOLEMOLE_CHANGEAVATARSHOWOBJ___C__DISPLAYCLASS11_0__ONPROCESS_B__0_OFFSET UNITYSDK_OFFSET(0xF1284A0)

namespace MoleMole
{
	inline static constexpr unsigned int ChangeAvatarShowObj___c__DisplayClass11_0_TypeDefinitionIndex = 61728;

	class ChangeAvatarShowObj___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::Class_1_0D6706375CDAAE8C* itemDataNew; // 0x10
		::MoleMole::ChangeAvatarShowObj* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHANGEAVATARSHOWOBJ___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnProcess_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHANGEAVATARSHOWOBJ___C__DISPLAYCLASS11_0__ONPROCESS_B__0_OFFSET))(this);
		}
	};
}
