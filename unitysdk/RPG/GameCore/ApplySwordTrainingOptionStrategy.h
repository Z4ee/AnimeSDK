#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_APPLYSWORDTRAININGOPTIONSTRATEGY_METHOD_3_147EF097F3114BC8_OFFSET UNITYSDK_OFFSET(0x1947CE60)
#define RPG_GAMECORE_APPLYSWORDTRAININGOPTIONSTRATEGY_METHOD_3_DFCC468B6C3D7BFC_OFFSET UNITYSDK_OFFSET(0x1947CD50)
#define RPG_GAMECORE_APPLYSWORDTRAININGOPTIONSTRATEGY__CTOR_OFFSET UNITYSDK_OFFSET(0x1947CE30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ApplySwordTrainingOptionStrategy_TypeDefinitionIndex = 19704;

	class ApplySwordTrainingOptionStrategy : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_APPLYSWORDTRAININGOPTIONSTRATEGY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DFCC468B6C3D7BFC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ApplySwordTrainingOptionStrategy*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ApplySwordTrainingOptionStrategy*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_APPLYSWORDTRAININGOPTIONSTRATEGY_METHOD_3_DFCC468B6C3D7BFC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_147EF097F3114BC8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ApplySwordTrainingOptionStrategy* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ApplySwordTrainingOptionStrategy*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_APPLYSWORDTRAININGOPTIONSTRATEGY_METHOD_3_147EF097F3114BC8_OFFSET))(a1, a2);
		}
	};
}
