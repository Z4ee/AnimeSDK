#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Battle/InspireZoneOperationType.h"

namespace MoleMole::Config { class ConfigInspireZoneOperation; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGTEAMINSPIREZONE__CTOR_OFFSET UNITYSDK_OFFSET(0x19FF26C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigTeamInspireZone_TypeDefinitionIndex = 86713;

	class ConfigTeamInspireZone : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Int32 ComboShowNumUpperLimit; // 0x58
		::System::Single ComboHoldTime; // 0x5C
		::System::Collections::Generic::List_1<::System::String*>* ComboNumSpritePathList; // 0x60
		::System::Collections::Generic::Dictionary_2<::MoleMole::Battle::InspireZoneOperationType, ::MoleMole::Config::ConfigInspireZoneOperation*>* OperationDict; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTEAMINSPIREZONE__CTOR_OFFSET))(this);
		}
	};
}
