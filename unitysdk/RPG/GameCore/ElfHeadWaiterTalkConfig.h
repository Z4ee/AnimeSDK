#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ElfHeadWaiterTalkConfigItem; }

#define RPG_GAMECORE_ELFHEADWAITERTALKCONFIG_METHOD_2_50BC829834E3C8D3_OFFSET UNITYSDK_OFFSET(0x1889C670)
#define RPG_GAMECORE_ELFHEADWAITERTALKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1889C7C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfHeadWaiterTalkConfig_TypeDefinitionIndex = 17532;

	class ElfHeadWaiterTalkConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single CD; // 0x10
		::Il2CppArray<::RPG::GameCore::ElfHeadWaiterTalkConfigItem*>* ConfigList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFHEADWAITERTALKCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_50BC829834E3C8D3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfHeadWaiterTalkConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfHeadWaiterTalkConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFHEADWAITERTALKCONFIG_METHOD_2_50BC829834E3C8D3_OFFSET))(a1, a2);
		}
	};
}
