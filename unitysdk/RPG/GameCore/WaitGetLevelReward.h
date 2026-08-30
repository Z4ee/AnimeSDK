#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITGETLEVELREWARD_METHOD_3_60831042F2ED0202_OFFSET UNITYSDK_OFFSET(0x1DEB95E0)
#define RPG_GAMECORE_WAITGETLEVELREWARD_METHOD_3_AAFFE0A2DD6BDB3F_OFFSET UNITYSDK_OFFSET(0x1DEB96B0)
#define RPG_GAMECORE_WAITGETLEVELREWARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEB96A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitGetLevelReward_TypeDefinitionIndex = 20999;

	class WaitGetLevelReward : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITGETLEVELREWARD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_60831042F2ED0202(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitGetLevelReward*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitGetLevelReward*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITGETLEVELREWARD_METHOD_3_60831042F2ED0202_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AAFFE0A2DD6BDB3F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitGetLevelReward* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitGetLevelReward*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITGETLEVELREWARD_METHOD_3_AAFFE0A2DD6BDB3F_OFFSET))(a1, a2);
		}
	};
}
