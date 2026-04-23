#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
#include "unitysdk/RPG/GameCore/StimulusPositionType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ST_SIDE_FIRESTIMULUS_METHOD_4_5D669E80881B7CAD_OFFSET UNITYSDK_OFFSET(0x18DF7520)
#define RPG_GAMECORE_ST_SIDE_FIRESTIMULUS_METHOD_4_A34EEC92A7BBDFCA_OFFSET UNITYSDK_OFFSET(0x18DF7450)
#define RPG_GAMECORE_ST_SIDE_FIRESTIMULUS__CTOR_OFFSET UNITYSDK_OFFSET(0x18DF74D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_FireStimulus_TypeDefinitionIndex = 19079;

	class ST_Side_FireStimulus : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::String* StimulusName; // 0x18
		::RPG::GameCore::TargetEvaluator* InstigatorType; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::RPG::GameCore::StimulusPositionType PositionType; // 0x30
		::System::Single OverrideRange; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_FIRESTIMULUS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A34EEC92A7BBDFCA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_FireStimulus*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_FireStimulus*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_FIRESTIMULUS_METHOD_4_A34EEC92A7BBDFCA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5D669E80881B7CAD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_FireStimulus* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_FireStimulus*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_FIRESTIMULUS_METHOD_4_5D669E80881B7CAD_OFFSET))(a1, a2);
		}
	};
}
