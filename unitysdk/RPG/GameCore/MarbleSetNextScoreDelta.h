#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLESETNEXTSCOREDELTA_METHOD_3_08EE47FF281E430F_OFFSET UNITYSDK_OFFSET(0x1D4B2F60)
#define RPG_GAMECORE_MARBLESETNEXTSCOREDELTA_METHOD_3_F3DDF13BA85DB6B3_OFFSET UNITYSDK_OFFSET(0x1D4B2E60)
#define RPG_GAMECORE_MARBLESETNEXTSCOREDELTA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4B2F50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleSetNextScoreDelta_TypeDefinitionIndex = 16675;

	class MarbleSetNextScoreDelta : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::System::Int32 Score; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESETNEXTSCOREDELTA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F3DDF13BA85DB6B3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleSetNextScoreDelta*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleSetNextScoreDelta*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESETNEXTSCOREDELTA_METHOD_3_F3DDF13BA85DB6B3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_08EE47FF281E430F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleSetNextScoreDelta* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleSetNextScoreDelta*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESETNEXTSCOREDELTA_METHOD_3_08EE47FF281E430F_OFFSET))(a1, a2);
		}
	};
}
