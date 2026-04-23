#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_COMPONENTCONFIG_METHOD_2_A8EBF78230E22F38_OFFSET UNITYSDK_OFFSET(0x18830B50)
#define RPG_GAMECORE_COMPONENTCONFIG_METHOD_2_F366EDE048C147AD_OFFSET UNITYSDK_OFFSET(0x188306C0)
#define RPG_GAMECORE_COMPONENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18830B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComponentConfig_TypeDefinitionIndex = 15676;

	class ComponentConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPONENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F366EDE048C147AD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComponentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComponentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPONENTCONFIG_METHOD_2_F366EDE048C147AD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_A8EBF78230E22F38(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComponentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPONENTCONFIG_METHOD_2_A8EBF78230E22F38_OFFSET))(a1, a2);
		}
	};
}
