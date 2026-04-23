#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtTimeScope.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_VE_RTTIMESTAMP_METHOD_3_6D6C4632245F3768_OFFSET UNITYSDK_OFFSET(0x190EFA30)
#define RPG_GAMECORE_VE_RTTIMESTAMP_METHOD_3_A92CE5981A3B093D_OFFSET UNITYSDK_OFFSET(0x190EFAD0)
#define RPG_GAMECORE_VE_RTTIMESTAMP__CTOR_OFFSET UNITYSDK_OFFSET(0x190EFA90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_RtTimeStamp_TypeDefinitionIndex = 23285;

	class VE_RtTimeStamp : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::RPG::GameCore::RtTimeScope TimeScope; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTTIMESTAMP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6D6C4632245F3768(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_RtTimeStamp*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_RtTimeStamp*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTTIMESTAMP_METHOD_3_6D6C4632245F3768_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A92CE5981A3B093D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_RtTimeStamp* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_RtTimeStamp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTTIMESTAMP_METHOD_3_A92CE5981A3B093D_OFFSET))(a1, a2);
		}
	};
}
