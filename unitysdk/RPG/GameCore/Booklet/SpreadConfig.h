#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore::Booklet { class SpreadStepConfig; }

#define RPG_GAMECORE_BOOKLET_SPREADCONFIG_METHOD_2_C8B49C11501EC34F_OFFSET UNITYSDK_OFFSET(0x1CE8D450)
#define RPG_GAMECORE_BOOKLET_SPREADCONFIG_METHOD_2_CE31A495A297B288_OFFSET UNITYSDK_OFFSET(0x1CE8D2E0)
#define RPG_GAMECORE_BOOKLET_SPREADCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE8D440)

namespace RPG::GameCore::Booklet
{
	inline static constexpr unsigned int SpreadConfig_TypeDefinitionIndex = 24680;

	class SpreadConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::RPG::GameCore::Booklet::SpreadStepConfig* SpreadStepConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_SPREADCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_CE31A495A297B288(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Booklet::SpreadConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Booklet::SpreadConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_SPREADCONFIG_METHOD_2_CE31A495A297B288_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_C8B49C11501EC34F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Booklet::SpreadConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Booklet::SpreadConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_SPREADCONFIG_METHOD_2_C8B49C11501EC34F_OFFSET))(a1, a2);
		}
	};
}
