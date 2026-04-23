#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ElfFoodEventConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ELFCHEFCONFIG_METHOD_2_B61EE8BEEFC32242_OFFSET UNITYSDK_OFFSET(0x1889A710)
#define RPG_GAMECORE_ELFCHEFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1889A8E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfChefConfig_TypeDefinitionIndex = 17539;

	class ElfChefConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single CookBaseSpeed; // 0x10
		::Il2CppArray<::RPG::GameCore::ElfFoodEventConfig*>* Events; // 0x18
		::System::String* PerfectEfffectPath; // 0x20
		::System::UInt32 MaxWaitCookCount; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFCHEFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B61EE8BEEFC32242(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfChefConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfChefConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFCHEFCONFIG_METHOD_2_B61EE8BEEFC32242_OFFSET))(a1, a2);
		}
	};
}
