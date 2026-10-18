#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ClockParkCardTipsTypeEnum.h"
#include "unitysdk/RPG/GameCore/ClockParkCardType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CLOCKPARKCARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D58CC40)
#define RPG_GAMECORE_CLOCKPARKCARDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D58D110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkCardRow_TypeDefinitionIndex = 11171;

	class ClockParkCardRow : public ::System::Object
	{
	public:
		::System::String* ForeImgPath; // 0x10
		::Il2CppArray<::System::UInt32>* CardActionList; // 0x18
		::Il2CppArray<::System::UInt32>* CardConflictTagList; // 0x20
		::System::String* ImgPath; // 0x28
		::System::UInt32 CardID; // 0x30
		::System::UInt32 CardDiceNum; // 0x34
		::RPG::Client::TextID CardTag; // 0x38
		::System::UInt32 Priority; // 0x48
		::RPG::GameCore::ClockParkCardType CardType; // 0x4C
		::System::UInt32 CardOriginalParam; // 0x50
		::RPG::Client::TextID CardDesc; // 0x58
		::RPG::GameCore::ClockParkCardTipsTypeEnum CardTips; // 0x68
		::System::UInt32 CardTipsParam; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCARDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClockParkCardRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClockParkCardRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCARDROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
