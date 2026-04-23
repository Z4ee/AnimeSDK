#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RESETTEAMMATEATTACKPERFORM_METHOD_3_11C6876A19445AFF_OFFSET UNITYSDK_OFFSET(0x18CAB950)
#define RPG_GAMECORE_RESETTEAMMATEATTACKPERFORM_METHOD_3_7FBDD77E91FDB02E_OFFSET UNITYSDK_OFFSET(0x18CAB9E0)
#define RPG_GAMECORE_RESETTEAMMATEATTACKPERFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x18CAB9B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResetTeammateAttackPerform_TypeDefinitionIndex = 21375;

	class ResetTeammateAttackPerform : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETTEAMMATEATTACKPERFORM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_11C6876A19445AFF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetTeammateAttackPerform*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetTeammateAttackPerform*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETTEAMMATEATTACKPERFORM_METHOD_3_11C6876A19445AFF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7FBDD77E91FDB02E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetTeammateAttackPerform* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetTeammateAttackPerform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETTEAMMATEATTACKPERFORM_METHOD_3_7FBDD77E91FDB02E_OFFSET))(a1, a2);
		}
	};
}
