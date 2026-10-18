#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMAUDIOSETSTATEACTION_METHOD_4_011F7A02C4F3B59C_OFFSET UNITYSDK_OFFSET(0x1D6AFA70)
#define RPG_GAMECORE_FIVEDIMAUDIOSETSTATEACTION_METHOD_4_9A16294A87CE61AB_OFFSET UNITYSDK_OFFSET(0x1D6AFA30)
#define RPG_GAMECORE_FIVEDIMAUDIOSETSTATEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6AFA60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimAudioSetStateAction_TypeDefinitionIndex = 18720;

	class FiveDimAudioSetStateAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::String* StateGroup; // 0x10
		::System::String* State; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMAUDIOSETSTATEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9A16294A87CE61AB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimAudioSetStateAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimAudioSetStateAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMAUDIOSETSTATEACTION_METHOD_4_9A16294A87CE61AB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_011F7A02C4F3B59C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimAudioSetStateAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimAudioSetStateAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMAUDIOSETSTATEACTION_METHOD_4_011F7A02C4F3B59C_OFFSET))(a1, a2);
		}
	};
}
