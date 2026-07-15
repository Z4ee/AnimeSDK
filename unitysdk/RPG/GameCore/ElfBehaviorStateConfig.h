#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ElfBehaviorState; }

#define RPG_GAMECORE_ELFBEHAVIORSTATECONFIG_METHOD_2_C5251FE71F28AB33_OFFSET UNITYSDK_OFFSET(0x1BB34A50)
#define RPG_GAMECORE_ELFBEHAVIORSTATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB34B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfBehaviorStateConfig_TypeDefinitionIndex = 17767;

	class ElfBehaviorStateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ElfBehaviorState* BehaviorState; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFBEHAVIORSTATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C5251FE71F28AB33(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfBehaviorStateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfBehaviorStateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFBEHAVIORSTATECONFIG_METHOD_2_C5251FE71F28AB33_OFFSET))(a1, a2);
		}
	};
}
