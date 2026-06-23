#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HackerGameBaseDamage.h"
#include "unitysdk/MoleMole/HackerGameDamageData.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_HACKERGAMEMULTIDAMAGE_APPLY_OFFSET UNITYSDK_OFFSET(0x11622830)
#define MOLEMOLE_HACKERGAMEMULTIDAMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x116229D0)

namespace MoleMole
{
	inline static constexpr unsigned int HackerGameMultiDamage_TypeDefinitionIndex = 70341;

	class HackerGameMultiDamage : public ::MoleMole::HackerGameBaseDamage
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::HackerGameBaseDamage*>* Damages; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMEMULTIDAMAGE__CTOR_OFFSET))(this);
		}

		::System::Void Apply(::MoleMole::HackerGameDamageData damageData)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HackerGameDamageData))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMEMULTIDAMAGE_APPLY_OFFSET))(this, damageData);
		}
	};
}
