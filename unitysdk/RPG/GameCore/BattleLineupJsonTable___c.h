#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AvatarLineupKeyLevelConfig; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_GAMECORE_BATTLELINEUPJSONTABLE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCD37700)
#define RPG_GAMECORE_BATTLELINEUPJSONTABLE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCD37740)
#define RPG_GAMECORE_BATTLELINEUPJSONTABLE___C__LOADAVATARPRESETCONFIG_B__4_0_OFFSET UNITYSDK_OFFSET(0xCD37750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleLineupJsonTable___c_TypeDefinitionIndex = 52741;

	class BattleLineupJsonTable___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::GameCore::AvatarLineupKeyLevelConfig*>** StaticGet___9__4_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::AvatarLineupKeyLevelConfig*>**)Il2CppClass::FromTypeDefinitionIndex(BattleLineupJsonTable___c_TypeDefinitionIndex)->GetStaticField(0x662F0);
		}
		static ::RPG::GameCore::BattleLineupJsonTable___c** StaticGet___9()
		{
			return (::RPG::GameCore::BattleLineupJsonTable___c**)Il2CppClass::FromTypeDefinitionIndex(BattleLineupJsonTable___c_TypeDefinitionIndex)->GetStaticField(0x662F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPJSONTABLE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPJSONTABLE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _LoadAvatarPresetConfig_b__4_0(::RPG::GameCore::AvatarLineupKeyLevelConfig* a1, ::RPG::GameCore::AvatarLineupKeyLevelConfig* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::AvatarLineupKeyLevelConfig*, ::RPG::GameCore::AvatarLineupKeyLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPJSONTABLE___C__LOADAVATARPRESETCONFIG_B__4_0_OFFSET))(this, a1, a2);
		}
	};
}
