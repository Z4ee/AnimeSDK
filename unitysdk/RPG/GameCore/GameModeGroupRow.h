#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameModeType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GAMEMODEGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D13D850)
#define RPG_GAMECORE_GAMEMODEGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D13D9A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameModeGroupRow_TypeDefinitionIndex = 12791;

	class GameModeGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::GameModeType>* GamemodeList; // 0x10
		::System::UInt32 GameModeGroupID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEMODEGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GameModeGroupRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GameModeGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEMODEGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
