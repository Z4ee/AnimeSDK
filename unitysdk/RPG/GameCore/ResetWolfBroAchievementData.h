#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RESETWOLFBROACHIEVEMENTDATA_METHOD_3_201A73B3F96978B8_OFFSET UNITYSDK_OFFSET(0x18CAC180)
#define RPG_GAMECORE_RESETWOLFBROACHIEVEMENTDATA_METHOD_3_D5C40B11C03D7AE4_OFFSET UNITYSDK_OFFSET(0x18CAC290)
#define RPG_GAMECORE_RESETWOLFBROACHIEVEMENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18CAC260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResetWolfBroAchievementData_TypeDefinitionIndex = 20849;

	class ResetWolfBroAchievementData : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETWOLFBROACHIEVEMENTDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_201A73B3F96978B8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetWolfBroAchievementData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetWolfBroAchievementData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETWOLFBROACHIEVEMENTDATA_METHOD_3_201A73B3F96978B8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D5C40B11C03D7AE4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetWolfBroAchievementData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetWolfBroAchievementData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETWOLFBROACHIEVEMENTDATA_METHOD_3_D5C40B11C03D7AE4_OFFSET))(a1, a2);
		}
	};
}
