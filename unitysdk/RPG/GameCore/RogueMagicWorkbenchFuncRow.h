#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueWorkbenchFuncType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUEMAGICWORKBENCHFUNCROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CFBA0C0)
#define RPG_GAMECORE_ROGUEMAGICWORKBENCHFUNCROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFBA370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicWorkbenchFuncRow_TypeDefinitionIndex = 14287;

	class RogueMagicWorkbenchFuncRow : public ::System::Object
	{
	public:
		::System::String* FuncIcon; // 0x10
		::RPG::Client::TextID FuncName; // 0x18
		::RPG::GameCore::RogueWorkbenchFuncType FuncType; // 0x28
		::System::UInt32 FuncID; // 0x2C
		::RPG::Client::TextID FuncDesc; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICWORKBENCHFUNCROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicWorkbenchFuncRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicWorkbenchFuncRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICWORKBENCHFUNCROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
