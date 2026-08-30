#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STAGEINVASIONBUFFROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D558320)
#define RPG_GAMECORE_STAGEINVASIONBUFFROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5584E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageInvasionBuffRow_TypeDefinitionIndex = 14988;

	class StageInvasionBuffRow : public ::System::Object
	{
	public:
		::System::UInt32 MazeBuffID; // 0x10
		::System::UInt32 InvasionID; // 0x14
		::RPG::Client::TextID InvasionDesc; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINVASIONBUFFROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StageInvasionBuffRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageInvasionBuffRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINVASIONBUFFROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
