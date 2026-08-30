#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraWorkRoundOptionType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERAWORKROUNDOPTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CFD5C70)
#define RPG_GAMECORE_CHIMERAWORKROUNDOPTIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFD5DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraWorkRoundOptionRow_TypeDefinitionIndex = 12919;

	class ChimeraWorkRoundOptionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ParamList; // 0x10
		::System::UInt32 OptionID; // 0x18
		::RPG::GameCore::ChimeraWorkRoundOptionType Type; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAWORKROUNDOPTIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraWorkRoundOptionRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraWorkRoundOptionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAWORKROUNDOPTIONROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
