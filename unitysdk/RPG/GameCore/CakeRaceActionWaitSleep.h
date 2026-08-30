#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEACTIONWAITSLEEP_METHOD_3_35035B103A57B7A6_OFFSET UNITYSDK_OFFSET(0x1CF70F20)
#define RPG_GAMECORE_CAKERACEACTIONWAITSLEEP_METHOD_3_5A4E78D65011ACE6_OFFSET UNITYSDK_OFFSET(0x1CF70EC0)
#define RPG_GAMECORE_CAKERACEACTIONWAITSLEEP__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF70F10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceActionWaitSleep_TypeDefinitionIndex = 18135;

	class CakeRaceActionWaitSleep : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::System::UInt32 MinWaitTime; // 0x10
		::System::UInt32 MaxWaitTime; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONWAITSLEEP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5A4E78D65011ACE6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionWaitSleep*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionWaitSleep*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONWAITSLEEP_METHOD_3_5A4E78D65011ACE6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_35035B103A57B7A6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionWaitSleep* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionWaitSleep*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONWAITSLEEP_METHOD_3_35035B103A57B7A6_OFFSET))(a1, a2);
		}
	};
}
