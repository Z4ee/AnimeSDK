#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEMODIFIERMODIFYMASTERDAMAGECONFIG_METHOD_3_614B469B59A23D83_OFFSET UNITYSDK_OFFSET(0x188D55D0)
#define RPG_GAMECORE_FATEMODIFIERMODIFYMASTERDAMAGECONFIG_METHOD_3_6BFDC0F5AB0941CA_OFFSET UNITYSDK_OFFSET(0x188D6550)
#define RPG_GAMECORE_FATEMODIFIERMODIFYMASTERDAMAGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x188D5580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierModifyMasterDamageConfig_TypeDefinitionIndex = 18308;

	class FateModifierModifyMasterDamageConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMODIFYMASTERDAMAGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6BFDC0F5AB0941CA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierModifyMasterDamageConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierModifyMasterDamageConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMODIFYMASTERDAMAGECONFIG_METHOD_3_6BFDC0F5AB0941CA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_614B469B59A23D83(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierModifyMasterDamageConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierModifyMasterDamageConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMODIFYMASTERDAMAGECONFIG_METHOD_3_614B469B59A23D83_OFFSET))(a1, a2);
		}
	};
}
