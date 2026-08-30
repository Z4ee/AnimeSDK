#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RESETTEAMMATEATTACKPERFORM_METHOD_3_7FBDD77E91FDB02E_OFFSET UNITYSDK_OFFSET(0x1DB94190)
#define RPG_GAMECORE_RESETTEAMMATEATTACKPERFORM_METHOD_3_886E7AFFB2547DED_OFFSET UNITYSDK_OFFSET(0x1DB94140)
#define RPG_GAMECORE_RESETTEAMMATEATTACKPERFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB94180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResetTeammateAttackPerform_TypeDefinitionIndex = 22243;

	class ResetTeammateAttackPerform : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETTEAMMATEATTACKPERFORM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_886E7AFFB2547DED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetTeammateAttackPerform*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetTeammateAttackPerform*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETTEAMMATEATTACKPERFORM_METHOD_3_886E7AFFB2547DED_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7FBDD77E91FDB02E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetTeammateAttackPerform* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetTeammateAttackPerform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETTEAMMATEATTACKPERFORM_METHOD_3_7FBDD77E91FDB02E_OFFSET))(a1, a2);
		}
	};
}
