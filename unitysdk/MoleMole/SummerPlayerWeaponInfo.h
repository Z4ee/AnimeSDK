#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class SummerWeaponConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SUMMERPLAYERWEAPONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x11DFABA0)

namespace MoleMole
{
	inline static constexpr unsigned int SummerPlayerWeaponInfo_TypeDefinitionIndex = 51253;

	class SummerPlayerWeaponInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::SummerWeaponConfig*>* WeaponsList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERPLAYERWEAPONINFO__CTOR_OFFSET))(this);
		}
	};
}
