#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUEWOLFGUNRANDOMCASE_METHOD_3_4233021C414BD2D9_OFFSET UNITYSDK_OFFSET(0x18D80650)
#define RPG_GAMECORE_ROGUEWOLFGUNRANDOMCASE_METHOD_3_B44B1EB81C16ADE0_OFFSET UNITYSDK_OFFSET(0x18D805D0)
#define RPG_GAMECORE_ROGUEWOLFGUNRANDOMCASE__CTOR_OFFSET UNITYSDK_OFFSET(0x18D80620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueWolfGunRandomCase_TypeDefinitionIndex = 21192;

	class RogueWolfGunRandomCase : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::String*>* CustomStringList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWOLFGUNRANDOMCASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B44B1EB81C16ADE0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueWolfGunRandomCase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueWolfGunRandomCase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWOLFGUNRANDOMCASE_METHOD_3_B44B1EB81C16ADE0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4233021C414BD2D9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueWolfGunRandomCase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueWolfGunRandomCase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWOLFGUNRANDOMCASE_METHOD_3_4233021C414BD2D9_OFFSET))(a1, a2);
		}
	};
}
