#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ILBattleAvatarTag.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ILBATTLEAVATARTAGCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D199C80)
#define RPG_GAMECORE_ILBATTLEAVATARTAGCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D199E80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ILBattleAvatarTagConfigRow_TypeDefinitionIndex = 13679;

	class ILBattleAvatarTagConfigRow : public ::System::Object
	{
	public:
		::System::String* AssociatedStatusId; // 0x10
		::System::String* IconPath; // 0x18
		::RPG::GameCore::ILBattleAvatarTag ID; // 0x20
		::RPG::Client::TextID Name; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ILBATTLEAVATARTAGCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ILBattleAvatarTagConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ILBattleAvatarTagConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ILBATTLEAVATARTAGCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
