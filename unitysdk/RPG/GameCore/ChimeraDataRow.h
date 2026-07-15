#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraEyeDetailType.h"
#include "unitysdk/RPG/GameCore/ChimeraHornsPartType.h"
#include "unitysdk/RPG/GameCore/ChimeraMaterialType.h"
#include "unitysdk/RPG/GameCore/ChimeraMemberType.h"
#include "unitysdk/RPG/GameCore/ChimeraTailPartType.h"
#include "unitysdk/RPG/GameCore/ChimeraWingsPartType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHIMERADATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C38FE90)
#define RPG_GAMECORE_CHIMERADATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3902B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDataRow_TypeDefinitionIndex = 12520;

	class ChimeraDataRow : public ::System::Object
	{
	public:
		::System::String* DataJson; // 0x10
		::System::String* ChimeraIcon; // 0x18
		::System::String* VoiceType; // 0x20
		::RPG::GameCore::ChimeraMaterialType Body; // 0x28
		::System::UInt32 DisplayID; // 0x2C
		::System::UInt32 RaritySetting; // 0x30
		::System::UInt32 ChimeraID; // 0x34
		::RPG::GameCore::ChimeraTailPartType Tail; // 0x38
		::RPG::GameCore::ChimeraWingsPartType Wing; // 0x3C
		::RPG::GameCore::ChimeraHornsPartType Horn; // 0x40
		::RPG::GameCore::ChimeraEyeDetailType Eye; // 0x44
		::RPG::GameCore::ChimeraMemberType Type; // 0x48
		::System::Single Sort; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADATAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDataRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDataRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADATAROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
