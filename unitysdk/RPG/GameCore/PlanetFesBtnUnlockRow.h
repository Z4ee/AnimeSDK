#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlanetFesBtnUnlockType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLANETFESBTNUNLOCKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18C03860)
#define RPG_GAMECORE_PLANETFESBTNUNLOCKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18C03960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesBtnUnlockRow_TypeDefinitionIndex = 11606;

	class PlanetFesBtnUnlockRow : public ::System::Object
	{
	public:
		::System::UInt32 UnlockQuestID; // 0x10
		::RPG::GameCore::PlanetFesBtnUnlockType ID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESBTNUNLOCKROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PlanetFesBtnUnlockRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlanetFesBtnUnlockRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESBTNUNLOCKROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
