#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMADDDYNAMICCOLLIDERDETECTACTION_METHOD_4_31E7ADB0227779AC_OFFSET UNITYSDK_OFFSET(0x1D6ADF50)
#define RPG_GAMECORE_FIVEDIMADDDYNAMICCOLLIDERDETECTACTION_METHOD_4_AD96FBF8C0945869_OFFSET UNITYSDK_OFFSET(0x1D6AE030)
#define RPG_GAMECORE_FIVEDIMADDDYNAMICCOLLIDERDETECTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6AE020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimAddDynamicColliderDetectAction_TypeDefinitionIndex = 18763;

	class FiveDimAddDynamicColliderDetectAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean Enable; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMADDDYNAMICCOLLIDERDETECTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_31E7ADB0227779AC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimAddDynamicColliderDetectAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimAddDynamicColliderDetectAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMADDDYNAMICCOLLIDERDETECTACTION_METHOD_4_31E7ADB0227779AC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AD96FBF8C0945869(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimAddDynamicColliderDetectAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimAddDynamicColliderDetectAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMADDDYNAMICCOLLIDERDETECTACTION_METHOD_4_AD96FBF8C0945869_OFFSET))(a1, a2);
		}
	};
}
