#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RTSTOPLOOKAT_METHOD_3_723E169B252CD59A_OFFSET UNITYSDK_OFFSET(0x1D4B29E0)
#define RPG_GAMECORE_RTSTOPLOOKAT_METHOD_3_D81F4A23335DD0A3_OFFSET UNITYSDK_OFFSET(0x1D4B2940)
#define RPG_GAMECORE_RTSTOPLOOKAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4B29A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtStopLookAt_TypeDefinitionIndex = 23860;

	class RtStopLookAt : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* PerformerType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSTOPLOOKAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D81F4A23335DD0A3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtStopLookAt*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtStopLookAt*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSTOPLOOKAT_METHOD_3_D81F4A23335DD0A3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_723E169B252CD59A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtStopLookAt* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtStopLookAt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSTOPLOOKAT_METHOD_3_723E169B252CD59A_OFFSET))(a1, a2);
		}
	};
}
