#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RTSTOPMOVE_METHOD_3_6AA04383F326CCD5_OFFSET UNITYSDK_OFFSET(0x1CCEFA40)
#define RPG_GAMECORE_RTSTOPMOVE_METHOD_3_70F2758990A5DDE4_OFFSET UNITYSDK_OFFSET(0x1CCEF9A0)
#define RPG_GAMECORE_RTSTOPMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCEFA00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtStopMove_TypeDefinitionIndex = 23842;

	class RtStopMove : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSTOPMOVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_70F2758990A5DDE4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtStopMove*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtStopMove*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSTOPMOVE_METHOD_3_70F2758990A5DDE4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6AA04383F326CCD5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtStopMove* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtStopMove*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSTOPMOVE_METHOD_3_6AA04383F326CCD5_OFFSET))(a1, a2);
		}
	};
}
