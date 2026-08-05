#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/VOPerformSubSystem_NpcNameShowInfo.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_VOPERFORMSUBSYSTEM___C__DISPLAYCLASS67_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14106B60)
#define MOLEMOLE_VOPERFORMSUBSYSTEM___C__DISPLAYCLASS67_0___OPERATENPCENTITYICONBYENTITYID_B__0_OFFSET UNITYSDK_OFFSET(0x14106B70)
#define MOLEMOLE_VOPERFORMSUBSYSTEM___C__DISPLAYCLASS67_0___OPERATENPCENTITYICONBYENTITYID_B__1_OFFSET UNITYSDK_OFFSET(0x14106BE0)

namespace MoleMole
{
	inline static constexpr unsigned int VOPerformSubSystem___c__DisplayClass67_0_TypeDefinitionIndex = 60222;

	class VOPerformSubSystem___c__DisplayClass67_0 : public ::System::Object
	{
	public:
		::MoleMole::Battle::Entity* entity; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM___C__DISPLAYCLASS67_0__CTOR_OFFSET))(this);
		}

		::System::Void __OperateNpcEntityIconByEntityID_b__0(::MoleMole::VOPerformSubSystem_NpcNameShowInfo& cur)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::VOPerformSubSystem_NpcNameShowInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM___C__DISPLAYCLASS67_0___OPERATENPCENTITYICONBYENTITYID_B__0_OFFSET))(this, cur);
		}

		::System::Void __OperateNpcEntityIconByEntityID_b__1(::MoleMole::VOPerformSubSystem_NpcNameShowInfo& cur)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::VOPerformSubSystem_NpcNameShowInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM___C__DISPLAYCLASS67_0___OPERATENPCENTITYICONBYENTITYID_B__1_OFFSET))(this, cur);
		}
	};
}
