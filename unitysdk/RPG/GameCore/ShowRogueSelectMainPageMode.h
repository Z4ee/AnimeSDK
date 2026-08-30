#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ShowRogueSelectMainPageModeType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWROGUESELECTMAINPAGEMODE_METHOD_3_71C3E230FBB042C0_OFFSET UNITYSDK_OFFSET(0x1D52ED20)
#define RPG_GAMECORE_SHOWROGUESELECTMAINPAGEMODE_METHOD_3_E57D57BAF04B621B_OFFSET UNITYSDK_OFFSET(0x1D52ED70)
#define RPG_GAMECORE_SHOWROGUESELECTMAINPAGEMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D52ED60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowRogueSelectMainPageMode_TypeDefinitionIndex = 24029;

	class ShowRogueSelectMainPageMode : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::ShowRogueSelectMainPageModeType Mode; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWROGUESELECTMAINPAGEMODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_71C3E230FBB042C0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowRogueSelectMainPageMode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowRogueSelectMainPageMode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWROGUESELECTMAINPAGEMODE_METHOD_3_71C3E230FBB042C0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E57D57BAF04B621B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowRogueSelectMainPageMode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowRogueSelectMainPageMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWROGUESELECTMAINPAGEMODE_METHOD_3_E57D57BAF04B621B_OFFSET))(a1, a2);
		}
	};
}
