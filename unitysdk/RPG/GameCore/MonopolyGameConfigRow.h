#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MonopolyGameType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MONOPOLYGAMECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B1B3A60)
#define RPG_GAMECORE_MONOPOLYGAMECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1B3E40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyGameConfigRow_TypeDefinitionIndex = 11586;

	class MonopolyGameConfigRow : public ::System::Object
	{
	public:
		::System::String* ParamStr2; // 0x10
		::System::String* GameIcon; // 0x18
		::System::String* ParamStr1; // 0x20
		::Il2CppArray<::System::UInt32>* GameResourceIDList; // 0x28
		::RPG::GameCore::MonopolyGameType GameType; // 0x30
		::System::UInt32 BaseRaiseMaxValue; // 0x34
		::System::UInt32 GameID; // 0x38
		::System::UInt32 RaiseCurveID; // 0x3C
		::RPG::Client::TextID IntroDesc; // 0x40
		::RPG::Client::TextID Name; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYGAMECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyGameConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyGameConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYGAMECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
