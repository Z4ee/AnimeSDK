#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PlayerReturnRecommendType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConditionParam; }
namespace System { class String; }

#define RPG_GAMECORE_PLAYERRETURNRECOMMENDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19A41DA0)
#define RPG_GAMECORE_PLAYERRETURNRECOMMENDCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19A420E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerReturnRecommendConfigRow_TypeDefinitionIndex = 13792;

	class PlayerReturnRecommendConfigRow : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* Condition; // 0x18
		::System::UInt32 GotoID; // 0x20
		::System::UInt32 Weight; // 0x24
		::System::UInt32 PanelID; // 0x28
		::System::UInt32 GachaID; // 0x2C
		::RPG::Client::TextID Title; // 0x30
		::System::UInt32 RecommendID; // 0x40
		::RPG::GameCore::PlayerReturnRecommendType Type; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNRECOMMENDCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerReturnRecommendConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerReturnRecommendConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNRECOMMENDCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
