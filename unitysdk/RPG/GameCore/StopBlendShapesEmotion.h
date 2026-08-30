#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_STOPBLENDSHAPESEMOTION_METHOD_3_99558EE6FA3D9E47_OFFSET UNITYSDK_OFFSET(0x1D56EF70)
#define RPG_GAMECORE_STOPBLENDSHAPESEMOTION_METHOD_3_F085E7CD6883CFD8_OFFSET UNITYSDK_OFFSET(0x1D56EFC0)
#define RPG_GAMECORE_STOPBLENDSHAPESEMOTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D56EFB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StopBlendShapesEmotion_TypeDefinitionIndex = 21643;

	class StopBlendShapesEmotion : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Single TransitTime; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPBLENDSHAPESEMOTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_99558EE6FA3D9E47(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StopBlendShapesEmotion*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StopBlendShapesEmotion*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPBLENDSHAPESEMOTION_METHOD_3_99558EE6FA3D9E47_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F085E7CD6883CFD8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StopBlendShapesEmotion* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StopBlendShapesEmotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPBLENDSHAPESEMOTION_METHOD_3_F085E7CD6883CFD8_OFFSET))(a1, a2);
		}
	};
}
