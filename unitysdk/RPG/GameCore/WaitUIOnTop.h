#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TutorialGuideUIContextConfig; }

#define RPG_GAMECORE_WAITUIONTOP_METHOD_3_2633D076D54ABB8B_OFFSET UNITYSDK_OFFSET(0x1DEC4BB0)
#define RPG_GAMECORE_WAITUIONTOP_METHOD_3_B140B82F8DA3FF78_OFFSET UNITYSDK_OFFSET(0x1DEC4B70)
#define RPG_GAMECORE_WAITUIONTOP__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEC4BA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitUIOnTop_TypeDefinitionIndex = 24102;

	class WaitUIOnTop : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TutorialGuideUIContextConfig* TargetUI; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITUIONTOP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B140B82F8DA3FF78(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitUIOnTop*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitUIOnTop*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITUIONTOP_METHOD_3_B140B82F8DA3FF78_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2633D076D54ABB8B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitUIOnTop* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitUIOnTop*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITUIONTOP_METHOD_3_2633D076D54ABB8B_OFFSET))(a1, a2);
		}
	};
}
