#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYMAINMISSIONFINISH_METHOD_4_724AEBA713197D9D_OFFSET UNITYSDK_OFFSET(0x17036A20)
#define RPG_GAMECORE_BYMAINMISSIONFINISH_METHOD_4_73E29FBDB861606F_OFFSET UNITYSDK_OFFSET(0x17036950)
#define RPG_GAMECORE_BYMAINMISSIONFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x170369D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByMainMissionFinish_TypeDefinitionIndex = 18775;

	class ByMainMissionFinish : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 MainMissionID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYMAINMISSIONFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_73E29FBDB861606F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByMainMissionFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByMainMissionFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYMAINMISSIONFINISH_METHOD_4_73E29FBDB861606F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_724AEBA713197D9D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByMainMissionFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByMainMissionFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYMAINMISSIONFINISH_METHOD_4_724AEBA713197D9D_OFFSET))(a1, a2);
		}
	};
}
