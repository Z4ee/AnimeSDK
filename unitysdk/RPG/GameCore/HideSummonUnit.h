#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_HIDESUMMONUNIT_METHOD_3_64798B691BF60D6F_OFFSET UNITYSDK_OFFSET(0x172AADB0)
#define RPG_GAMECORE_HIDESUMMONUNIT_METHOD_3_C5977F05A147DF4B_OFFSET UNITYSDK_OFFSET(0x172AAD30)
#define RPG_GAMECORE_HIDESUMMONUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x172AAD80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HideSummonUnit_TypeDefinitionIndex = 18652;

	class HideSummonUnit : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SummonUnit; // 0x18
		::System::Boolean Hide; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDESUMMONUNIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C5977F05A147DF4B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HideSummonUnit*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HideSummonUnit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDESUMMONUNIT_METHOD_3_C5977F05A147DF4B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_64798B691BF60D6F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HideSummonUnit* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HideSummonUnit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDESUMMONUNIT_METHOD_3_64798B691BF60D6F_OFFSET))(a1, a2);
		}
	};
}
