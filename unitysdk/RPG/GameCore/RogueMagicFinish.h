#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMAGICFINISH_METHOD_3_8CF0929D2B41CD9D_OFFSET UNITYSDK_OFFSET(0x1D93AB40)
#define RPG_GAMECORE_ROGUEMAGICFINISH_METHOD_3_EA636EC7428981E0_OFFSET UNITYSDK_OFFSET(0x1D93AA70)
#define RPG_GAMECORE_ROGUEMAGICFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x1D93AB30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicFinish_TypeDefinitionIndex = 21875;

	class RogueMagicFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EA636EC7428981E0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICFINISH_METHOD_3_EA636EC7428981E0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8CF0929D2B41CD9D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICFINISH_METHOD_3_8CF0929D2B41CD9D_OFFSET))(a1, a2);
		}
	};
}
