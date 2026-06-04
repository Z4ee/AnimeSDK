#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureAttackDetectShapeConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVENTUREATTACKDETECTBOXCONFIG_METHOD_3_9415467399FD0A2A_OFFSET UNITYSDK_OFFSET(0x1943FCD0)
#define RPG_GAMECORE_ADVENTUREATTACKDETECTBOXCONFIG_METHOD_3_B1DA636E205CE9BD_OFFSET UNITYSDK_OFFSET(0x1943FD10)
#define RPG_GAMECORE_ADVENTUREATTACKDETECTBOXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1943FD00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureAttackDetectBoxConfig_TypeDefinitionIndex = 15461;

	class AdventureAttackDetectBoxConfig : public ::RPG::GameCore::AdventureAttackDetectShapeConfig
	{
	public:
		::RPG::MVector3 Size; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREATTACKDETECTBOXCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9415467399FD0A2A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureAttackDetectBoxConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureAttackDetectBoxConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREATTACKDETECTBOXCONFIG_METHOD_3_9415467399FD0A2A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B1DA636E205CE9BD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureAttackDetectBoxConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureAttackDetectBoxConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREATTACKDETECTBOXCONFIG_METHOD_3_B1DA636E205CE9BD_OFFSET))(a1, a2);
		}
	};
}
