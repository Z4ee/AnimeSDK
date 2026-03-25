#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYLOCALPLAYERISFAKEAVATAR_METHOD_4_72D1198EC2C9203A_OFFSET UNITYSDK_OFFSET(0x170363F0)
#define RPG_GAMECORE_BYLOCALPLAYERISFAKEAVATAR_METHOD_4_D27BC0D2787C9510_OFFSET UNITYSDK_OFFSET(0x17036320)
#define RPG_GAMECORE_BYLOCALPLAYERISFAKEAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x170363A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByLocalPlayerIsFakeAvatar_TypeDefinitionIndex = 18892;

	class ByLocalPlayerIsFakeAvatar : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLOCALPLAYERISFAKEAVATAR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D27BC0D2787C9510(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByLocalPlayerIsFakeAvatar*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByLocalPlayerIsFakeAvatar*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLOCALPLAYERISFAKEAVATAR_METHOD_4_D27BC0D2787C9510_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_72D1198EC2C9203A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByLocalPlayerIsFakeAvatar* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByLocalPlayerIsFakeAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLOCALPLAYERISFAKEAVATAR_METHOD_4_72D1198EC2C9203A_OFFSET))(a1, a2);
		}
	};
}
