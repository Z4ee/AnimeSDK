#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class HighLightAirCombatMonster; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_HIGHLIGHTAIRCOMBATMONSTERS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD6FDD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HighLightAirCombatMonsters_TypeDefinitionIndex = 70240;

	class HighLightAirCombatMonsters : public ::System::Object
	{
	public:
		::System::String* rootName; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::Config::HighLightAirCombatMonster*>* monsters; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HIGHLIGHTAIRCOMBATMONSTERS__CTOR_OFFSET))(this);
		}
	};
}
