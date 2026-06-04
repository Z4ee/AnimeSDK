#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PRELOADBATTLEPERFORM_METHOD_3_033CD7743D618B1E_OFFSET UNITYSDK_OFFSET(0x19A819E0)
#define RPG_GAMECORE_PRELOADBATTLEPERFORM_METHOD_3_CB4823B9DB4D46EF_OFFSET UNITYSDK_OFFSET(0x19A81960)
#define RPG_GAMECORE_PRELOADBATTLEPERFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x19A819B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PreloadBattlePerform_TypeDefinitionIndex = 22102;

	class PreloadBattlePerform : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* BattlePerformPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRELOADBATTLEPERFORM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CB4823B9DB4D46EF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PreloadBattlePerform*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PreloadBattlePerform*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRELOADBATTLEPERFORM_METHOD_3_CB4823B9DB4D46EF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_033CD7743D618B1E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PreloadBattlePerform* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PreloadBattlePerform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRELOADBATTLEPERFORM_METHOD_3_033CD7743D618B1E_OFFSET))(a1, a2);
		}
	};
}
