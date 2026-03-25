#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MonopolyGameType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MONOPOLYGAMECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1743A5A0)
#define RPG_GAMECORE_MONOPOLYGAMECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1743A980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyGameConfigRow_TypeDefinitionIndex = 11038;

	class MonopolyGameConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* GameResourceIDList; // 0x10
		::System::String* GameIcon; // 0x18
		::System::String* ParamStr1; // 0x20
		::System::String* ParamStr2; // 0x28
		::System::UInt32 GameID; // 0x30
		::System::UInt32 RaiseCurveID; // 0x34
		::RPG::Client::TextID Name; // 0x38
		::RPG::Client::TextID IntroDesc; // 0x48
		::RPG::GameCore::MonopolyGameType GameType; // 0x58
		::System::UInt32 BaseRaiseMaxValue; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYGAMECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MonopolyGameConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyGameConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYGAMECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
