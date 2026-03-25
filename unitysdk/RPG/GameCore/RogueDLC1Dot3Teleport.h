#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEDLC1DOT3TELEPORT_METHOD_3_315AF0F7FEE48A72_OFFSET UNITYSDK_OFFSET(0x175F0900)
#define RPG_GAMECORE_ROGUEDLC1DOT3TELEPORT_METHOD_3_8924AEB8F62607DB_OFFSET UNITYSDK_OFFSET(0x175F0980)
#define RPG_GAMECORE_ROGUEDLC1DOT3TELEPORT__CTOR_OFFSET UNITYSDK_OFFSET(0x175F0950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLC1Dot3Teleport_TypeDefinitionIndex = 20480;

	class RogueDLC1Dot3Teleport : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* BeforeTeleport; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3TELEPORT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_315AF0F7FEE48A72(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDLC1Dot3Teleport*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLC1Dot3Teleport*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3TELEPORT_METHOD_3_315AF0F7FEE48A72_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8924AEB8F62607DB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDLC1Dot3Teleport* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLC1Dot3Teleport*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3TELEPORT_METHOD_3_8924AEB8F62607DB_OFFSET))(a1, a2);
		}
	};
}
