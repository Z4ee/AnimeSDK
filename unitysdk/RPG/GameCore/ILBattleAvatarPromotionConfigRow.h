#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/IdleLiveAvatarPropertyTargetType.h"
#include "unitysdk/RPG/GameCore/IdleLiveAvatarPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ILBATTLEAVATARPROMOTIONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1983CFB0)
#define RPG_GAMECORE_ILBATTLEAVATARPROMOTIONCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1983D3F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ILBattleAvatarPromotionConfigRow_TypeDefinitionIndex = 13135;

	class ILBattleAvatarPromotionConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x10
		::System::String* Trigger; // 0x18
		::RPG::Client::TextID PromotionDesc; // 0x20
		::System::UInt32 ID; // 0x30
		::System::UInt32 UnlockLevel; // 0x34
		::RPG::GameCore::FixPoint Param; // 0x38
		::RPG::GameCore::IdleLiveAvatarPropertyTargetType PropertyTarget; // 0x40
		::System::UInt32 UnlockStar; // 0x44
		::System::UInt32 AvatarID; // 0x48
		::System::Boolean IsProperty; // 0x4C
		::RPG::GameCore::IdleLiveAvatarPropertyType PropertyType; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ILBATTLEAVATARPROMOTIONCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ILBattleAvatarPromotionConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ILBattleAvatarPromotionConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ILBATTLEAVATARPROMOTIONCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
