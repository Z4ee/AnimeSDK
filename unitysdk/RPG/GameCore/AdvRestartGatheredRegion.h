#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVRESTARTGATHEREDREGION_METHOD_3_791814B4F7CBA720_OFFSET UNITYSDK_OFFSET(0x1CDD6F20)
#define RPG_GAMECORE_ADVRESTARTGATHEREDREGION_METHOD_3_FAC64EAC561EA5E3_OFFSET UNITYSDK_OFFSET(0x1CDD6EE0)
#define RPG_GAMECORE_ADVRESTARTGATHEREDREGION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDD6F10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvRestartGatheredRegion_TypeDefinitionIndex = 20762;

	class AdvRestartGatheredRegion : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SummonUnit; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVRESTARTGATHEREDREGION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FAC64EAC561EA5E3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvRestartGatheredRegion*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvRestartGatheredRegion*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVRESTARTGATHEREDREGION_METHOD_3_FAC64EAC561EA5E3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_791814B4F7CBA720(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvRestartGatheredRegion* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvRestartGatheredRegion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVRESTARTGATHEREDREGION_METHOD_3_791814B4F7CBA720_OFFSET))(a1, a2);
		}
	};
}
