#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEPVEMATCHTALKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17393940)
#define RPG_GAMECORE_MARBLEPVEMATCHTALKCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17393AD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarblePVEMatchTalkConfigRow_TypeDefinitionIndex = 10896;

	class MarblePVEMatchTalkConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TalkIDList; // 0x10
		::System::UInt32 MatchID; // 0x18
		::System::UInt32 SealID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEPVEMATCHTALKCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MarblePVEMatchTalkConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarblePVEMatchTalkConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEPVEMATCHTALKCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
