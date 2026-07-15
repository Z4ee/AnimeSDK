#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALHPCONFIG_METHOD_6_568216F7E0A853DA_OFFSET UNITYSDK_OFFSET(0x1C5C11D0)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALHPCONFIG_METHOD_6_A6BF74DE76D04F9E_OFFSET UNITYSDK_OFFSET(0x1C5C1180)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALHPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5C11C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionAddGlobalHpConfig_TypeDefinitionIndex = 18540;

	class GridFightActionAddGlobalHpConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALHPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_A6BF74DE76D04F9E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionAddGlobalHpConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionAddGlobalHpConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALHPCONFIG_METHOD_6_A6BF74DE76D04F9E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_568216F7E0A853DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionAddGlobalHpConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionAddGlobalHpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALHPCONFIG_METHOD_6_568216F7E0A853DA_OFFSET))(a1, a2);
		}
	};
}
