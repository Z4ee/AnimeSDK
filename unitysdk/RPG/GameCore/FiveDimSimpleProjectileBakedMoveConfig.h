#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimPropBakedMoveConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILEBAKEDMOVECONFIG_METHOD_3_4A723DFA1E19FC6A_OFFSET UNITYSDK_OFFSET(0x1D0FAAC0)
#define RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILEBAKEDMOVECONFIG_METHOD_3_4E4E802A480F33AB_OFFSET UNITYSDK_OFFSET(0x1D102750)
#define RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILEBAKEDMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0FAAB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSimpleProjectileBakedMoveConfig_TypeDefinitionIndex = 16510;

	class FiveDimSimpleProjectileBakedMoveConfig : public ::RPG::GameCore::FiveDimPropBakedMoveConfig
	{
	public:
		::RPG::MVector3 CreationOffset; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILEBAKEDMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4E4E802A480F33AB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSimpleProjectileBakedMoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSimpleProjectileBakedMoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILEBAKEDMOVECONFIG_METHOD_3_4E4E802A480F33AB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4A723DFA1E19FC6A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSimpleProjectileBakedMoveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSimpleProjectileBakedMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILEBAKEDMOVECONFIG_METHOD_3_4A723DFA1E19FC6A_OFFSET))(a1, a2);
		}
	};
}
