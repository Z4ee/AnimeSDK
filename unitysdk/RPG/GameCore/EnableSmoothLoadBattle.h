#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ENABLESMOOTHLOADBATTLE_METHOD_3_55CA621CDEB379B2_OFFSET UNITYSDK_OFFSET(0x188A7A50)
#define RPG_GAMECORE_ENABLESMOOTHLOADBATTLE_METHOD_3_B00DA771B7E0E0E3_OFFSET UNITYSDK_OFFSET(0x188A79C0)
#define RPG_GAMECORE_ENABLESMOOTHLOADBATTLE__CTOR_OFFSET UNITYSDK_OFFSET(0x188A7A20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnableSmoothLoadBattle_TypeDefinitionIndex = 22298;

	class EnableSmoothLoadBattle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18
		::System::Single FrameBudgetScale; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLESMOOTHLOADBATTLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B00DA771B7E0E0E3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableSmoothLoadBattle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableSmoothLoadBattle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLESMOOTHLOADBATTLE_METHOD_3_B00DA771B7E0E0E3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_55CA621CDEB379B2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableSmoothLoadBattle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableSmoothLoadBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLESMOOTHLOADBATTLE_METHOD_3_55CA621CDEB379B2_OFFSET))(a1, a2);
		}
	};
}
