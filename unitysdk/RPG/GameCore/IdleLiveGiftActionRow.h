#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/IdleLiveGiftEffectType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVEGIFTACTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A11D80)
#define RPG_GAMECORE_IDLELIVEGIFTACTIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A11F60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveGiftActionRow_TypeDefinitionIndex = 11245;

	class IdleLiveGiftActionRow : public ::System::Object
	{
	public:
		::System::String* AbilityName; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* AbilityParam; // 0x18
		::RPG::GameCore::IdleLiveGiftEffectType EffectType; // 0x20
		::System::UInt32 ID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEGIFTACTIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::IdleLiveGiftActionRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveGiftActionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEGIFTACTIONROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
