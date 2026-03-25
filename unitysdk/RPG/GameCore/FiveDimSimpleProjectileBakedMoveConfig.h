#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimPropBakedMoveConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILEBAKEDMOVECONFIG_METHOD_3_52034573CA466F85_OFFSET UNITYSDK_OFFSET(0x17204470)
#define RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILEBAKEDMOVECONFIG_METHOD_3_8481EA49A3240EF4_OFFSET UNITYSDK_OFFSET(0x1720BA50)
#define RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILEBAKEDMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17204460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSimpleProjectileBakedMoveConfig_TypeDefinitionIndex = 15290;

	class FiveDimSimpleProjectileBakedMoveConfig : public ::RPG::GameCore::FiveDimPropBakedMoveConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILEBAKEDMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8481EA49A3240EF4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSimpleProjectileBakedMoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSimpleProjectileBakedMoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILEBAKEDMOVECONFIG_METHOD_3_8481EA49A3240EF4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_52034573CA466F85(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSimpleProjectileBakedMoveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSimpleProjectileBakedMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILEBAKEDMOVECONFIG_METHOD_3_52034573CA466F85_OFFSET))(a1, a2);
		}
	};
}
