#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PIXAIRENEMYDISPLAYCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B4CAA90)
#define RPG_GAMECORE_PIXAIRENEMYDISPLAYCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4CAEE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirEnemyDisplayConfigRow_TypeDefinitionIndex = 11677;

	class PixAirEnemyDisplayConfigRow : public ::System::Object
	{
	public:
		::System::String* PrefabPath; // 0x10
		::System::String* EnemyIcon; // 0x18
		::RPG::Client::TextID EnemyTrashTalk; // 0x20
		::RPG::Client::TextID EnemyDesc; // 0x30
		::RPG::Client::TextID EnemyName; // 0x40
		::System::UInt32 EnemyDisplayID; // 0x50
		::RPG::Client::TextID PlayerTrashTalk; // 0x58
		::RPG::Client::TextID EnemyDeadTalk; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRENEMYDISPLAYCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PixAirEnemyDisplayConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PixAirEnemyDisplayConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRENEMYDISPLAYCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
