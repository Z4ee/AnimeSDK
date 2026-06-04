#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueWorkbenchFuncType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETOURNWORKBENCHFUNCROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19BD1690)
#define RPG_GAMECORE_ROGUETOURNWORKBENCHFUNCROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19BD18F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournWorkbenchFuncRow_TypeDefinitionIndex = 14237;

	class RogueTournWorkbenchFuncRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID FuncDesc; // 0x10
		::RPG::GameCore::RogueWorkbenchFuncType FuncType; // 0x20
		::System::UInt32 FuncID; // 0x24
		::RPG::Client::TextID FuncName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNWORKBENCHFUNCROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournWorkbenchFuncRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournWorkbenchFuncRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNWORKBENCHFUNCROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
