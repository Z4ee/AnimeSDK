#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMAGICFINISH_METHOD_3_138EBE36D59461A9_OFFSET UNITYSDK_OFFSET(0x19B44D00)
#define RPG_GAMECORE_ROGUEMAGICFINISH_METHOD_3_8CF0929D2B41CD9D_OFFSET UNITYSDK_OFFSET(0x19B44E10)
#define RPG_GAMECORE_ROGUEMAGICFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x19B44DE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicFinish_TypeDefinitionIndex = 20899;

	class RogueMagicFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_138EBE36D59461A9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICFINISH_METHOD_3_138EBE36D59461A9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8CF0929D2B41CD9D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICFINISH_METHOD_3_8CF0929D2B41CD9D_OFFSET))(a1, a2);
		}
	};
}
