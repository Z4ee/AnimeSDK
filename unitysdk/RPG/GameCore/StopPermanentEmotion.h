#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_STOPPERMANENTEMOTION_METHOD_3_2F83F925DC017082_OFFSET UNITYSDK_OFFSET(0x1CAFDAC0)
#define RPG_GAMECORE_STOPPERMANENTEMOTION_METHOD_3_F39060B3E7B67AB5_OFFSET UNITYSDK_OFFSET(0x1CAFDB10)
#define RPG_GAMECORE_STOPPERMANENTEMOTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAFDB00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StopPermanentEmotion_TypeDefinitionIndex = 21641;

	class StopPermanentEmotion : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Single TransitTime; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPPERMANENTEMOTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2F83F925DC017082(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StopPermanentEmotion*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StopPermanentEmotion*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPPERMANENTEMOTION_METHOD_3_2F83F925DC017082_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F39060B3E7B67AB5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StopPermanentEmotion* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StopPermanentEmotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPPERMANENTEMOTION_METHOD_3_F39060B3E7B67AB5_OFFSET))(a1, a2);
		}
	};
}
