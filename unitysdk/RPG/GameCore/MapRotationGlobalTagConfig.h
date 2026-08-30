#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HoyoTagContainer; }

#define RPG_GAMECORE_MAPROTATIONGLOBALTAGCONFIG_METHOD_2_7E7021334659E8DC_OFFSET UNITYSDK_OFFSET(0x1D49C170)
#define RPG_GAMECORE_MAPROTATIONGLOBALTAGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D49C2F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapRotationGlobalTagConfig_TypeDefinitionIndex = 16847;

	class MapRotationGlobalTagConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::HoyoTagContainer* NoHideNPCTag; // 0x10
		::RPG::GameCore::HoyoTagContainer* NoRotateBlockTag; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONGLOBALTAGCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_7E7021334659E8DC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MapRotationGlobalTagConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MapRotationGlobalTagConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONGLOBALTAGCONFIG_METHOD_2_7E7021334659E8DC_OFFSET))(a1, a2);
		}
	};
}
