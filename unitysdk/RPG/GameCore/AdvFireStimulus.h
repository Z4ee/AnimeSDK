#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StimulusPositionType.h"
#include "unitysdk/RPG/GameCore/StimulusTargetType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ADVFIRESTIMULUS_METHOD_3_342F725528EE2359_OFFSET UNITYSDK_OFFSET(0x16F2E940)
#define RPG_GAMECORE_ADVFIRESTIMULUS_METHOD_3_CB520C00632F5636_OFFSET UNITYSDK_OFFSET(0x16F2E8C0)
#define RPG_GAMECORE_ADVFIRESTIMULUS__CTOR_OFFSET UNITYSDK_OFFSET(0x16F2E910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvFireStimulus_TypeDefinitionIndex = 18866;

	class AdvFireStimulus : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* StimulusName; // 0x18
		::RPG::GameCore::TargetEvaluator* InstigatorType; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::RPG::GameCore::StimulusTargetType AssignTarget; // 0x30
		::RPG::GameCore::StimulusPositionType PositionType; // 0x34
		::System::Single OverrideRange; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVFIRESTIMULUS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CB520C00632F5636(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvFireStimulus*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvFireStimulus*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVFIRESTIMULUS_METHOD_3_CB520C00632F5636_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_342F725528EE2359(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvFireStimulus* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvFireStimulus*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVFIRESTIMULUS_METHOD_3_342F725528EE2359_OFFSET))(a1, a2);
		}
	};
}
