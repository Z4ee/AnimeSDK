#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSTARTMUSICACTION_METHOD_4_22007A426B803F54_OFFSET UNITYSDK_OFFSET(0x1D6B0E40)
#define RPG_GAMECORE_FIVEDIMSTARTMUSICACTION_METHOD_4_FB452CCF48465129_OFFSET UNITYSDK_OFFSET(0x1D6B0DC0)
#define RPG_GAMECORE_FIVEDIMSTARTMUSICACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B0E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimStartMusicAction_TypeDefinitionIndex = 18698;

	class FiveDimStartMusicAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTMUSICACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_FB452CCF48465129(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimStartMusicAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimStartMusicAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTMUSICACTION_METHOD_4_FB452CCF48465129_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_22007A426B803F54(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimStartMusicAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimStartMusicAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTMUSICACTION_METHOD_4_22007A426B803F54_OFFSET))(a1, a2);
		}
	};
}
