#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MapRotationEntityEffect; }

#define RPG_GAMECORE_MAPROTATIONENTITYEFFECTCONFIG_METHOD_2_237C6CD412A34839_OFFSET UNITYSDK_OFFSET(0x1D49B7D0)
#define RPG_GAMECORE_MAPROTATIONENTITYEFFECTCONFIG_METHOD_2_B28EAC3C4A8DDF34_OFFSET UNITYSDK_OFFSET(0x1D49B640)
#define RPG_GAMECORE_MAPROTATIONENTITYEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D49B7C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapRotationEntityEffectConfig_TypeDefinitionIndex = 16835;

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

		static ::System::Void Method_2_B28EAC3C4A8DDF34(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MapRotationEntityEffectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MapRotationEntityEffectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONENTITYEFFECTCONFIG_METHOD_2_B28EAC3C4A8DDF34_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_237C6CD412A34839(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MapRotationEntityEffectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MapRotationEntityEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONENTITYEFFECTCONFIG_METHOD_2_237C6CD412A34839_OFFSET))(a1, a2);
		}
	};
}
