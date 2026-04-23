#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_961;
namespace RPG::GameCore { class TarotBookEnergyRow; }

#define RPG_CLIENT_TAROTBOOKENERGYGOTHINT_CREATE_OFFSET UNITYSDK_OFFSET(0xB28BD80)
#define RPG_CLIENT_TAROTBOOKENERGYGOTHINT_GET_ENERGYCOUNT_OFFSET UNITYSDK_OFFSET(0xB28BCF0)
#define RPG_CLIENT_TAROTBOOKENERGYGOTHINT_GET_HINT_OFFSET UNITYSDK_OFFSET(0xB28BD50)
#define RPG_CLIENT_TAROTBOOKENERGYGOTHINT_GET_ISSHOWMOVEEFFECT_OFFSET UNITYSDK_OFFSET(0xB28BD30)
#define RPG_CLIENT_TAROTBOOKENERGYGOTHINT_GET_ISSILENCE_OFFSET UNITYSDK_OFFSET(0xB28BD10)
#define RPG_CLIENT_TAROTBOOKENERGYGOTHINT_SET_ENERGYCOUNT_OFFSET UNITYSDK_OFFSET(0xB28BD00)
#define RPG_CLIENT_TAROTBOOKENERGYGOTHINT__CTOR_OFFSET UNITYSDK_OFFSET(0xB28BE40)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotBookEnergyGotHint_TypeDefinitionIndex = 62744;

	class TarotBookEnergyGotHint : public ::System::Object
	{
	public:
		::RPG::GameCore::TarotBookEnergyRow* _Meta; // 0x10
		::System::UInt32 _EnergyCount_k__BackingField; // 0x18

		::System::Void _ctor(::RPG::GameCore::TarotBookEnergyRow* meta, ::System::UInt32 energyCount)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TarotBookEnergyRow*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKENERGYGOTHINT__CTOR_OFFSET))(this, meta, energyCount);
		}

		::System::UInt32 get_EnergyCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKENERGYGOTHINT_GET_ENERGYCOUNT_OFFSET))(this);
		}

		::System::Void set_EnergyCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKENERGYGOTHINT_SET_ENERGYCOUNT_OFFSET))(this, value);
		}

		::System::Boolean get_IsSilence()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKENERGYGOTHINT_GET_ISSILENCE_OFFSET))(this);
		}

		::System::Boolean get_IsShowMoveEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKENERGYGOTHINT_GET_ISSHOWMOVEEFFECT_OFFSET))(this);
		}

		::RPG::Client::TextID get_Hint()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKENERGYGOTHINT_GET_HINT_OFFSET))(this);
		}

		static ::RPG::Client::TarotBookEnergyGotHint* Create(::Class_1_D17272E82AE804C2_961* notify)
		{
			return ((::RPG::Client::TarotBookEnergyGotHint*(*)(::Class_1_D17272E82AE804C2_961*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKENERGYGOTHINT_CREATE_OFFSET))(notify);
		}
	};
}
