#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMAPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CFBBDA0)
#define RPG_GAMECORE_ROGUEMAPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFBCAC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMapRow_TypeDefinitionIndex = 14122;

	class RogueMapRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* NextSiteIDList; // 0x10
		::System::Single PosY; // 0x18
		::System::Single MonsterWarningRatio; // 0x1C
		::System::Boolean IsStart; // 0x20
		::System::Single PosX; // 0x24
		::System::UInt32 SiteID; // 0x28
		::System::UInt32 RogueMapID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMapRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMapRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAPROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
