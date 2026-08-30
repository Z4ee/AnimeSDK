#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_APPLYSWORDTRAININGOPTIONSTRATEGY_METHOD_3_147EF097F3114BC8_OFFSET UNITYSDK_OFFSET(0x1C56F460)
#define RPG_GAMECORE_APPLYSWORDTRAININGOPTIONSTRATEGY_METHOD_3_608E92DD1FDA9E45_OFFSET UNITYSDK_OFFSET(0x1C56F390)
#define RPG_GAMECORE_APPLYSWORDTRAININGOPTIONSTRATEGY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C56F450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ApplySwordTrainingOptionStrategy_TypeDefinitionIndex = 20610;

	class ApplySwordTrainingOptionStrategy : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_APPLYSWORDTRAININGOPTIONSTRATEGY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_608E92DD1FDA9E45(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ApplySwordTrainingOptionStrategy*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ApplySwordTrainingOptionStrategy*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_APPLYSWORDTRAININGOPTIONSTRATEGY_METHOD_3_608E92DD1FDA9E45_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_147EF097F3114BC8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ApplySwordTrainingOptionStrategy* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ApplySwordTrainingOptionStrategy*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_APPLYSWORDTRAININGOPTIONSTRATEGY_METHOD_3_147EF097F3114BC8_OFFSET))(a1, a2);
		}
	};
}
