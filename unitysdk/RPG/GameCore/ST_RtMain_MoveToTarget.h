#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtBattleMoveStopType.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ST_RTMAIN_MOVETOTARGET_METHOD_4_13D7FFD184A41025_OFFSET UNITYSDK_OFFSET(0x1DB409D0)
#define RPG_GAMECORE_ST_RTMAIN_MOVETOTARGET_METHOD_4_95C80C8AA072E390_OFFSET UNITYSDK_OFFSET(0x1DB40A10)
#define RPG_GAMECORE_ST_RTMAIN_MOVETOTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB40A00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_RtMain_MoveToTarget_TypeDefinitionIndex = 23801;

	class ST_RtMain_MoveToTarget : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::RtBattleMoveStopType StopType; // 0x20
		::RPG::GameCore::DynamicFloat* StopDistance; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_RTMAIN_MOVETOTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_13D7FFD184A41025(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_RtMain_MoveToTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_RtMain_MoveToTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_RTMAIN_MOVETOTARGET_METHOD_4_13D7FFD184A41025_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_95C80C8AA072E390(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_RtMain_MoveToTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_RtMain_MoveToTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_RTMAIN_MOVETOTARGET_METHOD_4_95C80C8AA072E390_OFFSET))(a1, a2);
		}
	};
}
