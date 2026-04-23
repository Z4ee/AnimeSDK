#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMADDDYNAMICCOLLIDERDETECTACTION_METHOD_3_0B36A2F53958A998_OFFSET UNITYSDK_OFFSET(0x188EA100)
#define RPG_GAMECORE_FIVEDIMADDDYNAMICCOLLIDERDETECTACTION_METHOD_3_C4F06A2C68F8240C_OFFSET UNITYSDK_OFFSET(0x188E9FD0)
#define RPG_GAMECORE_FIVEDIMADDDYNAMICCOLLIDERDETECTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x188EA0E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimAddDynamicColliderDetectAction_TypeDefinitionIndex = 17826;

	class FiveDimAddDynamicColliderDetectAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean Enable; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMADDDYNAMICCOLLIDERDETECTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C4F06A2C68F8240C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimAddDynamicColliderDetectAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimAddDynamicColliderDetectAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMADDDYNAMICCOLLIDERDETECTACTION_METHOD_3_C4F06A2C68F8240C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0B36A2F53958A998(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimAddDynamicColliderDetectAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimAddDynamicColliderDetectAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMADDDYNAMICCOLLIDERDETECTACTION_METHOD_3_0B36A2F53958A998_OFFSET))(a1, a2);
		}
	};
}
