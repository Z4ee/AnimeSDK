#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_COMPONENTCONFIG_METHOD_2_A8EBF78230E22F38_OFFSET UNITYSDK_OFFSET(0x1D9ADA40)
#define RPG_GAMECORE_COMPONENTCONFIG_METHOD_2_BB5D9120237356F8_OFFSET UNITYSDK_OFFSET(0x1D9AD6C0)
#define RPG_GAMECORE_COMPONENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A5BD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComponentConfig_TypeDefinitionIndex = 16384;

	class ComponentConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPONENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_BB5D9120237356F8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComponentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComponentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPONENTCONFIG_METHOD_2_BB5D9120237356F8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_A8EBF78230E22F38(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComponentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPONENTCONFIG_METHOD_2_A8EBF78230E22F38_OFFSET))(a1, a2);
		}
	};
}
