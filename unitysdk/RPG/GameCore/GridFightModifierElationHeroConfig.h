#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERELATIONHEROCONFIG_METHOD_3_44832369F6D445CF_OFFSET UNITYSDK_OFFSET(0x189BB880)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERELATIONHEROCONFIG_METHOD_3_F112771C33DB7CA6_OFFSET UNITYSDK_OFFSET(0x189B7FB0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERELATIONHEROCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x189B7F60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierElationHeroConfig_TypeDefinitionIndex = 18503;

	class GridFightModifierElationHeroConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERELATIONHEROCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_44832369F6D445CF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierElationHeroConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierElationHeroConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERELATIONHEROCONFIG_METHOD_3_44832369F6D445CF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F112771C33DB7CA6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierElationHeroConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierElationHeroConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERELATIONHEROCONFIG_METHOD_3_F112771C33DB7CA6_OFFSET))(a1, a2);
		}
	};
}
