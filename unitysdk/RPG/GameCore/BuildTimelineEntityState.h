#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BUILDTIMELINEENTITYSTATE_METHOD_3_2F71B2B277E96AF3_OFFSET UNITYSDK_OFFSET(0x1871CF50)
#define RPG_GAMECORE_BUILDTIMELINEENTITYSTATE_METHOD_3_4C50DE6F2E42FA17_OFFSET UNITYSDK_OFFSET(0x1871CFD0)
#define RPG_GAMECORE_BUILDTIMELINEENTITYSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1871CFA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BuildTimelineEntityState_TypeDefinitionIndex = 19608;

	class BuildTimelineEntityState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::RPG::GameCore::DynamicString* StateName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUILDTIMELINEENTITYSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2F71B2B277E96AF3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BuildTimelineEntityState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BuildTimelineEntityState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUILDTIMELINEENTITYSTATE_METHOD_3_2F71B2B277E96AF3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4C50DE6F2E42FA17(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BuildTimelineEntityState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BuildTimelineEntityState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUILDTIMELINEENTITYSTATE_METHOD_3_4C50DE6F2E42FA17_OFFSET))(a1, a2);
		}
	};
}
