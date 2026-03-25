#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueWorkbenchFuncType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETOURNWORKBENCHFUNCROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x176707C0)
#define RPG_GAMECORE_ROGUETOURNWORKBENCHFUNCROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17670A20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournWorkbenchFuncRow_TypeDefinitionIndex = 13706;

	class RogueTournWorkbenchFuncRow : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueWorkbenchFuncType FuncType; // 0x10
		::System::UInt32 FuncID; // 0x14
		::RPG::Client::TextID FuncName; // 0x18
		::RPG::Client::TextID FuncDesc; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNWORKBENCHFUNCROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueTournWorkbenchFuncRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournWorkbenchFuncRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNWORKBENCHFUNCROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
