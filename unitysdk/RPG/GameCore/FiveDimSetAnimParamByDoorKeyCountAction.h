#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSETANIMPARAMBYDOORKEYCOUNTACTION_METHOD_3_28F0918EFB1C4397_OFFSET UNITYSDK_OFFSET(0x197531D0)
#define RPG_GAMECORE_FIVEDIMSETANIMPARAMBYDOORKEYCOUNTACTION_METHOD_3_45986B4675C9BFE6_OFFSET UNITYSDK_OFFSET(0x19753160)
#define RPG_GAMECORE_FIVEDIMSETANIMPARAMBYDOORKEYCOUNTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x197531B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetAnimParamByDoorKeyCountAction_TypeDefinitionIndex = 17745;

	class FiveDimSetAnimParamByDoorKeyCountAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean SyncToEffects; // 0x10
		::System::String* ParameterName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETANIMPARAMBYDOORKEYCOUNTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_45986B4675C9BFE6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetAnimParamByDoorKeyCountAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetAnimParamByDoorKeyCountAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETANIMPARAMBYDOORKEYCOUNTACTION_METHOD_3_45986B4675C9BFE6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_28F0918EFB1C4397(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetAnimParamByDoorKeyCountAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetAnimParamByDoorKeyCountAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETANIMPARAMBYDOORKEYCOUNTACTION_METHOD_3_28F0918EFB1C4397_OFFSET))(a1, a2);
		}
	};
}
