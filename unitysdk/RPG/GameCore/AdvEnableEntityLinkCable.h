#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENABLEENTITYLINKCABLE_METHOD_3_1CCEAB5281E3B157_OFFSET UNITYSDK_OFFSET(0x1D6B5340)
#define RPG_GAMECORE_ADVENABLEENTITYLINKCABLE_METHOD_3_20537F954DE51328_OFFSET UNITYSDK_OFFSET(0x1D6B5380)
#define RPG_GAMECORE_ADVENABLEENTITYLINKCABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B5370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvEnableEntityLinkCable_TypeDefinitionIndex = 21565;

	class AdvEnableEntityLinkCable : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Enable; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENABLEENTITYLINKCABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1CCEAB5281E3B157(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvEnableEntityLinkCable*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvEnableEntityLinkCable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENABLEENTITYLINKCABLE_METHOD_3_1CCEAB5281E3B157_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_20537F954DE51328(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvEnableEntityLinkCable* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvEnableEntityLinkCable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENABLEENTITYLINKCABLE_METHOD_3_20537F954DE51328_OFFSET))(a1, a2);
		}
	};
}
