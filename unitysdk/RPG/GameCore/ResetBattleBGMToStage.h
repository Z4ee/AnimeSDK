#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RESETBATTLEBGMTOSTAGE_METHOD_3_93CD9AC7281E3D38_OFFSET UNITYSDK_OFFSET(0x19ACE5C0)
#define RPG_GAMECORE_RESETBATTLEBGMTOSTAGE_METHOD_3_DA3816C81B3AF991_OFFSET UNITYSDK_OFFSET(0x19ACE540)
#define RPG_GAMECORE_RESETBATTLEBGMTOSTAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x19ACE590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResetBattleBGMToStage_TypeDefinitionIndex = 21713;

	class ResetBattleBGMToStage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::String*>* ResetStateNames; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETBATTLEBGMTOSTAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DA3816C81B3AF991(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetBattleBGMToStage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetBattleBGMToStage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETBATTLEBGMTOSTAGE_METHOD_3_DA3816C81B3AF991_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_93CD9AC7281E3D38(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetBattleBGMToStage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetBattleBGMToStage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETBATTLEBGMTOSTAGE_METHOD_3_93CD9AC7281E3D38_OFFSET))(a1, a2);
		}
	};
}
