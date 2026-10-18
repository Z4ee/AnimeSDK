#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimEntityRotateConfig; }

#define RPG_GAMECORE_FIVEDIMENTITYROTATEACTION_METHOD_4_09C34F9B2D4BED53_OFFSET UNITYSDK_OFFSET(0x1D68DDF0)
#define RPG_GAMECORE_FIVEDIMENTITYROTATEACTION_METHOD_4_EE7F5B67C624B3C0_OFFSET UNITYSDK_OFFSET(0x1D68DDB0)
#define RPG_GAMECORE_FIVEDIMENTITYROTATEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D68DDE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEntityRotateAction_TypeDefinitionIndex = 18750;

	class FiveDimEntityRotateAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean IsStop; // 0x10
		::RPG::GameCore::FiveDimEntityRotateConfig* RotateConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTITYROTATEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_EE7F5B67C624B3C0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEntityRotateAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEntityRotateAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTITYROTATEACTION_METHOD_4_EE7F5B67C624B3C0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_09C34F9B2D4BED53(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEntityRotateAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEntityRotateAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTITYROTATEACTION_METHOD_4_09C34F9B2D4BED53_OFFSET))(a1, a2);
		}
	};
}
