#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_HIDESUMMONUNIT_METHOD_3_64798B691BF60D6F_OFFSET UNITYSDK_OFFSET(0x1D18E400)
#define RPG_GAMECORE_HIDESUMMONUNIT_METHOD_3_8B83E6905F9B8838_OFFSET UNITYSDK_OFFSET(0x1D18E3B0)
#define RPG_GAMECORE_HIDESUMMONUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D18E3F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HideSummonUnit_TypeDefinitionIndex = 20124;

	class HideSummonUnit : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SummonUnit; // 0x18
		::System::Boolean Hide; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDESUMMONUNIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8B83E6905F9B8838(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HideSummonUnit*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HideSummonUnit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDESUMMONUNIT_METHOD_3_8B83E6905F9B8838_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_64798B691BF60D6F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HideSummonUnit* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HideSummonUnit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDESUMMONUNIT_METHOD_3_64798B691BF60D6F_OFFSET))(a1, a2);
		}
	};
}
