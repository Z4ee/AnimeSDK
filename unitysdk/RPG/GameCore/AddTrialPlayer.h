#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADDTRIALPLAYER_METHOD_3_20E82DC97ECBE28F_OFFSET UNITYSDK_OFFSET(0x1D6A6220)
#define RPG_GAMECORE_ADDTRIALPLAYER_METHOD_3_74CF21ADE502DA8B_OFFSET UNITYSDK_OFFSET(0x1D6A61D0)
#define RPG_GAMECORE_ADDTRIALPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A6210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddTrialPlayer_TypeDefinitionIndex = 21356;

	class AddTrialPlayer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDTRIALPLAYER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_74CF21ADE502DA8B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddTrialPlayer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddTrialPlayer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDTRIALPLAYER_METHOD_3_74CF21ADE502DA8B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_20E82DC97ECBE28F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddTrialPlayer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddTrialPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDTRIALPLAYER_METHOD_3_20E82DC97ECBE28F_OFFSET))(a1, a2);
		}
	};
}
