#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETTIMELINEENTITYSTATE_METHOD_3_887DD9289E15961D_OFFSET UNITYSDK_OFFSET(0x1C60E460)
#define RPG_GAMECORE_SETTIMELINEENTITYSTATE_METHOD_3_9C2D3C534837FEDC_OFFSET UNITYSDK_OFFSET(0x1C60E4B0)
#define RPG_GAMECORE_SETTIMELINEENTITYSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C60E4A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTimelineEntityState_TypeDefinitionIndex = 19852;

	class SetTimelineEntityState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::RPG::GameCore::DynamicString* StateName; // 0x20
		::System::Boolean CutIn; // 0x28
		::System::Boolean SaveToServerOnEnd; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTIMELINEENTITYSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_887DD9289E15961D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTimelineEntityState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTimelineEntityState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTIMELINEENTITYSTATE_METHOD_3_887DD9289E15961D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9C2D3C534837FEDC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTimelineEntityState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTimelineEntityState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTIMELINEENTITYSTATE_METHOD_3_9C2D3C534837FEDC_OFFSET))(a1, a2);
		}
	};
}
