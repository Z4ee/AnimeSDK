#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUESTART_METHOD_3_6423E739BC064B12_OFFSET UNITYSDK_OFFSET(0x1BB6AB20)
#define RPG_GAMECORE_ROGUESTART_METHOD_3_D0F5743148F054EF_OFFSET UNITYSDK_OFFSET(0x1BB6AB60)
#define RPG_GAMECORE_ROGUESTART__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB6AB50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueStart_TypeDefinitionIndex = 21459;

	class RogueStart : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* AvatarIDList; // 0x18
		::Il2CppArray<::System::UInt32>* SpecialAvatarIDList; // 0x20
		::System::UInt32 AreaID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUESTART__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6423E739BC064B12(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueStart*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueStart*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUESTART_METHOD_3_6423E739BC064B12_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D0F5743148F054EF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueStart* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueStart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUESTART_METHOD_3_D0F5743148F054EF_OFFSET))(a1, a2);
		}
	};
}
