#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SWORDTRAININGUNLOCKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D598BF0)
#define RPG_GAMECORE_SWORDTRAININGUNLOCKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D598DB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingUnlockRow_TypeDefinitionIndex = 12376;

	class SwordTrainingUnlockRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID UnlockDesc; // 0x10
		::System::UInt32 UnlockID; // 0x20
		::System::UInt32 FinishWayID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGUNLOCKROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwordTrainingUnlockRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingUnlockRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGUNLOCKROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
