#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEMODIFIERMODIFYMASTERDAMAGECONFIG_METHOD_3_614B469B59A23D83_OFFSET UNITYSDK_OFFSET(0x1E0CDF70)
#define RPG_GAMECORE_FATEMODIFIERMODIFYMASTERDAMAGECONFIG_METHOD_3_A194DEDFCA12147F_OFFSET UNITYSDK_OFFSET(0x1E0CDF20)
#define RPG_GAMECORE_FATEMODIFIERMODIFYMASTERDAMAGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0CDF60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierModifyMasterDamageConfig_TypeDefinitionIndex = 19040;

	class FateModifierModifyMasterDamageConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMODIFYMASTERDAMAGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A194DEDFCA12147F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierModifyMasterDamageConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierModifyMasterDamageConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMODIFYMASTERDAMAGECONFIG_METHOD_3_A194DEDFCA12147F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_614B469B59A23D83(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierModifyMasterDamageConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierModifyMasterDamageConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMODIFYMASTERDAMAGECONFIG_METHOD_3_614B469B59A23D83_OFFSET))(a1, a2);
		}
	};
}
