#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PRELOADBATTLEPERFORM_METHOD_3_033CD7743D618B1E_OFFSET UNITYSDK_OFFSET(0x1D35A370)
#define RPG_GAMECORE_PRELOADBATTLEPERFORM_METHOD_3_296B640AE6FF23DD_OFFSET UNITYSDK_OFFSET(0x1D35A340)
#define RPG_GAMECORE_PRELOADBATTLEPERFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D35A480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PreloadBattlePerform_TypeDefinitionIndex = 23115;

	class PreloadBattlePerform : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* BattlePerformPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRELOADBATTLEPERFORM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_296B640AE6FF23DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PreloadBattlePerform*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PreloadBattlePerform*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRELOADBATTLEPERFORM_METHOD_3_296B640AE6FF23DD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_033CD7743D618B1E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PreloadBattlePerform* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PreloadBattlePerform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRELOADBATTLEPERFORM_METHOD_3_033CD7743D618B1E_OFFSET))(a1, a2);
		}
	};
}
