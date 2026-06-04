#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_OPTICALILLUSIONBUBBLE_METHOD_3_743D12A132072FDE_OFFSET UNITYSDK_OFFSET(0x199D9BD0)
#define RPG_GAMECORE_OPTICALILLUSIONBUBBLE_METHOD_3_BEF41EA9F7679924_OFFSET UNITYSDK_OFFSET(0x199D9D20)
#define RPG_GAMECORE_OPTICALILLUSIONBUBBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x199D9C90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OpticalIllusionBubble_TypeDefinitionIndex = 21001;

	class OpticalIllusionBubble : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::UInt32 SentenceId; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTICALILLUSIONBUBBLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_743D12A132072FDE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpticalIllusionBubble*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpticalIllusionBubble*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTICALILLUSIONBUBBLE_METHOD_3_743D12A132072FDE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BEF41EA9F7679924(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpticalIllusionBubble* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpticalIllusionBubble*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTICALILLUSIONBUBBLE_METHOD_3_BEF41EA9F7679924_OFFSET))(a1, a2);
		}
	};
}
