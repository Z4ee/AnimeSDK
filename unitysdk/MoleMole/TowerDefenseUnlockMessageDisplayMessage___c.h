#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_TOWERDEFENSEUNLOCKMESSAGEDISPLAYMESSAGE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x197A3FE0)
#define MOLEMOLE_TOWERDEFENSEUNLOCKMESSAGEDISPLAYMESSAGE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x197A4020)
#define MOLEMOLE_TOWERDEFENSEUNLOCKMESSAGEDISPLAYMESSAGE___C__ONPROCESS_B__3_0_OFFSET UNITYSDK_OFFSET(0x197A4030)

namespace MoleMole
{
	inline static constexpr unsigned int TowerDefenseUnlockMessageDisplayMessage___c_TypeDefinitionIndex = 88519;

	class TowerDefenseUnlockMessageDisplayMessage___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__3_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(TowerDefenseUnlockMessageDisplayMessage___c_TypeDefinitionIndex)->GetStaticField(0x42880);
		}
		static ::MoleMole::TowerDefenseUnlockMessageDisplayMessage___c** StaticGet___9()
		{
			return (::MoleMole::TowerDefenseUnlockMessageDisplayMessage___c**)Il2CppClass::FromTypeDefinitionIndex(TowerDefenseUnlockMessageDisplayMessage___c_TypeDefinitionIndex)->GetStaticField(0x42888);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TOWERDEFENSEUNLOCKMESSAGEDISPLAYMESSAGE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TOWERDEFENSEUNLOCKMESSAGEDISPLAYMESSAGE___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnProcess_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TOWERDEFENSEUNLOCKMESSAGEDISPLAYMESSAGE___C__ONPROCESS_B__3_0_OFFSET))(this);
		}
	};
}
