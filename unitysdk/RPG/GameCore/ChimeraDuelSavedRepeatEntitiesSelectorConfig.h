#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelEntitiesSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELSAVEDREPEATENTITIESSELECTORCONFIG_METHOD_3_848B755EE2213234_OFFSET UNITYSDK_OFFSET(0x170A5500)
#define RPG_GAMECORE_CHIMERADUELSAVEDREPEATENTITIESSELECTORCONFIG_METHOD_3_944D63DB01AD6C89_OFFSET UNITYSDK_OFFSET(0x170A55A0)
#define RPG_GAMECORE_CHIMERADUELSAVEDREPEATENTITIESSELECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x170A5590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelSavedRepeatEntitiesSelectorConfig_TypeDefinitionIndex = 14626;

	class ChimeraDuelSavedRepeatEntitiesSelectorConfig : public ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSAVEDREPEATENTITIESSELECTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_848B755EE2213234(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelSavedRepeatEntitiesSelectorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelSavedRepeatEntitiesSelectorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSAVEDREPEATENTITIESSELECTORCONFIG_METHOD_3_848B755EE2213234_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_944D63DB01AD6C89(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelSavedRepeatEntitiesSelectorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelSavedRepeatEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSAVEDREPEATENTITIESSELECTORCONFIG_METHOD_3_944D63DB01AD6C89_OFFSET))(a1, a2);
		}
	};
}
