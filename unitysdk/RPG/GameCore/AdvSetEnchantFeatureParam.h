#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_ADVSETENCHANTFEATUREPARAM_METHOD_3_2C541648389944B4_OFFSET UNITYSDK_OFFSET(0x1BE2D0C0)
#define RPG_GAMECORE_ADVSETENCHANTFEATUREPARAM_METHOD_3_84C5D2C03B9359CD_OFFSET UNITYSDK_OFFSET(0x1BE2D100)
#define RPG_GAMECORE_ADVSETENCHANTFEATUREPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE2D0F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSetEnchantFeatureParam_TypeDefinitionIndex = 21009;

	class AdvSetEnchantFeatureParam : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* StartChaseDistance; // 0x18
		::RPG::GameCore::DynamicFloat* StopChaseDistance; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETENCHANTFEATUREPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2C541648389944B4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetEnchantFeatureParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetEnchantFeatureParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETENCHANTFEATUREPARAM_METHOD_3_2C541648389944B4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_84C5D2C03B9359CD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetEnchantFeatureParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetEnchantFeatureParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETENCHANTFEATUREPARAM_METHOD_3_84C5D2C03B9359CD_OFFSET))(a1, a2);
		}
	};
}
