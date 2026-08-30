#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTaskConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_CLIENT_ROADRASHGAMEMODIFIER_SETATTRIBUTEFIXPOINT_METHOD_4_A0DB0AB31051AEEA_OFFSET UNITYSDK_OFFSET(0x1CD5F840)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_SETATTRIBUTEFIXPOINT_METHOD_4_D2E2A8B0BA70008F_OFFSET UNITYSDK_OFFSET(0x1CD5F880)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_SETATTRIBUTEFIXPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD5F870)

namespace RPG::Client
{
	inline static constexpr unsigned int RoadRashGameModifier_SetAttributeFixPoint_TypeDefinitionIndex = 10288;

	class RoadRashGameModifier_SetAttributeFixPoint : public ::RPG::GameCore::BaseLittleGameAbilityTaskConfig
	{
	public:
		::System::String* AttributeName; // 0x18
		::RPG::GameCore::FixPoint Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_SETATTRIBUTEFIXPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A0DB0AB31051AEEA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::RoadRashGameModifier_SetAttributeFixPoint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::RoadRashGameModifier_SetAttributeFixPoint*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_SETATTRIBUTEFIXPOINT_METHOD_4_A0DB0AB31051AEEA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D2E2A8B0BA70008F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::RoadRashGameModifier_SetAttributeFixPoint* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::RoadRashGameModifier_SetAttributeFixPoint*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_SETATTRIBUTEFIXPOINT_METHOD_4_D2E2A8B0BA70008F_OFFSET))(a1, a2);
		}
	};
}
