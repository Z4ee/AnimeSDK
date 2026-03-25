#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class NewProjectileConfig; }

#define RPG_GAMECORE_NEWPROJECTILEDATALIST_METHOD_2_568EEE53FC74949D_OFFSET UNITYSDK_OFFSET(0x17473C80)
#define RPG_GAMECORE_NEWPROJECTILEDATALIST__CTOR_OFFSET UNITYSDK_OFFSET(0x17473E00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NewProjectileDataList_TypeDefinitionIndex = 20769;

	class NewProjectileDataList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 RepeatCount; // 0x10
		::RPG::GameCore::NewProjectileConfig* NewProjectile; // 0x18
		::System::Single Interval; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NEWPROJECTILEDATALIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_568EEE53FC74949D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NewProjectileDataList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NewProjectileDataList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NEWPROJECTILEDATALIST_METHOD_2_568EEE53FC74949D_OFFSET))(a1, a2);
		}
	};
}
