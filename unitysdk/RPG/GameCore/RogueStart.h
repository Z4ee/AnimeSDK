#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUESTART_METHOD_3_BF883BE0C5DD94DC_OFFSET UNITYSDK_OFFSET(0x1765AB20)
#define RPG_GAMECORE_ROGUESTART_METHOD_3_CE6523B372114ECD_OFFSET UNITYSDK_OFFSET(0x1765ABA0)
#define RPG_GAMECORE_ROGUESTART__CTOR_OFFSET UNITYSDK_OFFSET(0x1765AB70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueStart_TypeDefinitionIndex = 20462;

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

		static ::System::Void Method_3_BF883BE0C5DD94DC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueStart*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueStart*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUESTART_METHOD_3_BF883BE0C5DD94DC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CE6523B372114ECD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueStart* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueStart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUESTART_METHOD_3_CE6523B372114ECD_OFFSET))(a1, a2);
		}
	};
}
