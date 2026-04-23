#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETOURNDIVISIONEFFECTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D72590)
#define RPG_GAMECORE_ROGUETOURNDIVISIONEFFECTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D72770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournDivisionEffectRow_TypeDefinitionIndex = 14156;

	class RogueTournDivisionEffectRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* DescParamList; // 0x10
		::System::UInt32 DivisionLevel; // 0x18
		::RPG::Client::TextID DescText; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNDIVISIONEFFECTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueTournDivisionEffectRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournDivisionEffectRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNDIVISIONEFFECTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
