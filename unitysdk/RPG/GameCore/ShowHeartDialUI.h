#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SHOWHEARTDIALUI_METHOD_3_007DF4107D975C66_OFFSET UNITYSDK_OFFSET(0x1D096770)
#define RPG_GAMECORE_SHOWHEARTDIALUI_METHOD_3_25CB8B555E4D31A5_OFFSET UNITYSDK_OFFSET(0x1D0967B0)
#define RPG_GAMECORE_SHOWHEARTDIALUI__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0967A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowHeartDialUI_TypeDefinitionIndex = 20977;

	class ShowHeartDialUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWHEARTDIALUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_007DF4107D975C66(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowHeartDialUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowHeartDialUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWHEARTDIALUI_METHOD_3_007DF4107D975C66_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_25CB8B555E4D31A5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowHeartDialUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowHeartDialUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWHEARTDIALUI_METHOD_3_25CB8B555E4D31A5_OFFSET))(a1, a2);
		}
	};
}
