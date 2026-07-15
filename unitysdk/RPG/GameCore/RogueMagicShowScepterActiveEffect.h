#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUEMAGICSHOWSCEPTERACTIVEEFFECT_METHOD_3_87E1233BED894235_OFFSET UNITYSDK_OFFSET(0x1CFB7D20)
#define RPG_GAMECORE_ROGUEMAGICSHOWSCEPTERACTIVEEFFECT_METHOD_3_A3724E4BC50811D0_OFFSET UNITYSDK_OFFSET(0x1CFB7D60)
#define RPG_GAMECORE_ROGUEMAGICSHOWSCEPTERACTIVEEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFB7D50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicShowScepterActiveEffect_TypeDefinitionIndex = 22479;

	class RogueMagicShowScepterActiveEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ScepterID; // 0x18
		::RPG::GameCore::DynamicFloat* Level; // 0x20
		::System::String* ImagePath; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICSHOWSCEPTERACTIVEEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_87E1233BED894235(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicShowScepterActiveEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicShowScepterActiveEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICSHOWSCEPTERACTIVEEFFECT_METHOD_3_87E1233BED894235_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A3724E4BC50811D0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicShowScepterActiveEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicShowScepterActiveEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICSHOWSCEPTERACTIVEEFFECT_METHOD_3_A3724E4BC50811D0_OFFSET))(a1, a2);
		}
	};
}
