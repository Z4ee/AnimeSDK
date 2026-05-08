#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/VOPerformSubSystem_NpcNameShowInfo.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_VOPERFORMSUBSYSTEM___C__DISPLAYCLASS56_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE866290)
#define MOLEMOLE_VOPERFORMSUBSYSTEM___C__DISPLAYCLASS56_0___OPERATENPCENTITYNAMEBYENTITY_B__1_OFFSET UNITYSDK_OFFSET(0xE8662A0)

namespace MoleMole
{
	inline static constexpr unsigned int VOPerformSubSystem___c__DisplayClass56_0_TypeDefinitionIndex = 54624;

	class VOPerformSubSystem___c__DisplayClass56_0 : public ::System::Object
	{
	public:
		::MoleMole::EntityHandle targetEntity; // 0x10
		::System::Boolean isShow; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM___C__DISPLAYCLASS56_0__CTOR_OFFSET))(this);
		}

		::System::Void __OperateNpcEntityNameByEntity_b__1(::MoleMole::VOPerformSubSystem_NpcNameShowInfo& cur)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::VOPerformSubSystem_NpcNameShowInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM___C__DISPLAYCLASS56_0___OPERATENPCENTITYNAMEBYENTITY_B__1_OFFSET))(this, cur);
		}
	};
}
