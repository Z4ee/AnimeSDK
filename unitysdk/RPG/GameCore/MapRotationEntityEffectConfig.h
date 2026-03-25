#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MapRotationEntityEffect; }

#define RPG_GAMECORE_MAPROTATIONENTITYEFFECTCONFIG_METHOD_2_22A76BFFD271BCEF_OFFSET UNITYSDK_OFFSET(0x1737FEA0)
#define RPG_GAMECORE_MAPROTATIONENTITYEFFECTCONFIG_METHOD_2_59320B6C98F8EA42_OFFSET UNITYSDK_OFFSET(0x1737FD10)
#define RPG_GAMECORE_MAPROTATIONENTITYEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1737FE90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapRotationEntityEffectConfig_TypeDefinitionIndex = 15593;

	class MapRotationEntityEffectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MapRotationEntityEffect*>* EffectsOnHide; // 0x10
		::Il2CppArray<::RPG::GameCore::MapRotationEntityEffect*>* EffectsOnInactive; // 0x18
		::Il2CppArray<::RPG::GameCore::MapRotationEntityEffect*>* EffectsOnActive; // 0x20
		::Il2CppArray<::RPG::GameCore::MapRotationEntityEffect*>* EffectsOnDelete; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONENTITYEFFECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_59320B6C98F8EA42(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MapRotationEntityEffectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MapRotationEntityEffectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONENTITYEFFECTCONFIG_METHOD_2_59320B6C98F8EA42_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_22A76BFFD271BCEF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MapRotationEntityEffectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MapRotationEntityEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONENTITYEFFECTCONFIG_METHOD_2_22A76BFFD271BCEF_OFFSET))(a1, a2);
		}
	};
}
