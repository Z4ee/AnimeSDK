#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ClockParkCardTipsTypeEnum.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CLOCKPARKCARDTIPSTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x196577F0)
#define RPG_GAMECORE_CLOCKPARKCARDTIPSTYPEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19657ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkCardTipsTypeRow_TypeDefinitionIndex = 10733;

	class ClockParkCardTipsTypeRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID CardTips; // 0x10
		::RPG::GameCore::ClockParkCardTipsTypeEnum CardTipsTypeID; // 0x20
		::RPG::Client::TextID CardTips_Detail; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCARDTIPSTYPEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClockParkCardTipsTypeRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClockParkCardTipsTypeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCARDTIPSTYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
