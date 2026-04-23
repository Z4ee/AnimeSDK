#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/IdleLiveAvatarPropertyTargetType.h"
#include "unitysdk/RPG/GameCore/IdleLiveAvatarPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ILBATTLEAVATARPROMOTIONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A0AC30)
#define RPG_GAMECORE_ILBATTLEAVATARPROMOTIONCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A0B070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ILBattleAvatarPromotionConfigRow_TypeDefinitionIndex = 13054;

	class ILBattleAvatarPromotionConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x10
		::System::String* Trigger; // 0x18
		::RPG::GameCore::IdleLiveAvatarPropertyType PropertyType; // 0x20
		::RPG::GameCore::IdleLiveAvatarPropertyTargetType PropertyTarget; // 0x24
		::RPG::GameCore::FixPoint Param; // 0x28
		::RPG::Client::TextID PromotionDesc; // 0x30
		::System::UInt32 UnlockLevel; // 0x40
		::System::Boolean IsProperty; // 0x44
		::System::UInt32 AvatarID; // 0x48
		::System::UInt32 ID; // 0x4C
		::System::UInt32 UnlockStar; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ILBATTLEAVATARPROMOTIONCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ILBattleAvatarPromotionConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ILBattleAvatarPromotionConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ILBATTLEAVATARPROMOTIONCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
