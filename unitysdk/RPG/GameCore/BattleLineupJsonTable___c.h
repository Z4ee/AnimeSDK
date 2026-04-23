#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AvatarLineupKeyLevelConfig; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_GAMECORE_BATTLELINEUPJSONTABLE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB5D1E50)
#define RPG_GAMECORE_BATTLELINEUPJSONTABLE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB5D1E90)
#define RPG_GAMECORE_BATTLELINEUPJSONTABLE___C__LOADAVATARPRESETCONFIG_B__4_0_OFFSET UNITYSDK_OFFSET(0xB5D1EA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleLineupJsonTable___c_TypeDefinitionIndex = 52067;

	class BattleLineupJsonTable___c : public ::System::Object
	{
	public:
		static ::RPG::GameCore::BattleLineupJsonTable___c** StaticGet___9()
		{
			return (::RPG::GameCore::BattleLineupJsonTable___c**)Il2CppClass::FromTypeDefinitionIndex(BattleLineupJsonTable___c_TypeDefinitionIndex)->GetStaticField(0x44130);
		}
		static ::System::Comparison_1<::RPG::GameCore::AvatarLineupKeyLevelConfig*>** StaticGet___9__4_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::AvatarLineupKeyLevelConfig*>**)Il2CppClass::FromTypeDefinitionIndex(BattleLineupJsonTable___c_TypeDefinitionIndex)->GetStaticField(0x44138);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPJSONTABLE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPJSONTABLE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _LoadAvatarPresetConfig_b__4_0(::RPG::GameCore::AvatarLineupKeyLevelConfig* x, ::RPG::GameCore::AvatarLineupKeyLevelConfig* y)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::AvatarLineupKeyLevelConfig*, ::RPG::GameCore::AvatarLineupKeyLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLELINEUPJSONTABLE___C__LOADAVATARPRESETCONFIG_B__4_0_OFFSET))(this, x, y);
		}
	};
}
