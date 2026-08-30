#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CONTAINERSTATETOSEEDSTATECONFIG_METHOD_2_CB3ED24E05147DB9_OFFSET UNITYSDK_OFFSET(0x1D000330)
#define RPG_GAMECORE_CONTAINERSTATETOSEEDSTATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D000460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ContainerStateToSeedStateConfig_TypeDefinitionIndex = 17362;

	class ContainerStateToSeedStateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* ContainerStateName; // 0x10
		::System::String* SeedStateName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONTAINERSTATETOSEEDSTATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_CB3ED24E05147DB9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ContainerStateToSeedStateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ContainerStateToSeedStateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONTAINERSTATETOSEEDSTATECONFIG_METHOD_2_CB3ED24E05147DB9_OFFSET))(a1, a2);
		}
	};
}
