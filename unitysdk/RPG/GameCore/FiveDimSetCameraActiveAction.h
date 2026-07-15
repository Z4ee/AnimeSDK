#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSETCAMERAACTIVEACTION_METHOD_3_5A74C665AA7AE3A6_OFFSET UNITYSDK_OFFSET(0x1BEB0180)
#define RPG_GAMECORE_FIVEDIMSETCAMERAACTIVEACTION_METHOD_3_DEFC5F375773BAA3_OFFSET UNITYSDK_OFFSET(0x1BEB00A0)
#define RPG_GAMECORE_FIVEDIMSETCAMERAACTIVEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEB0170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetCameraActiveAction_TypeDefinitionIndex = 18002;

	class FiveDimSetCameraActiveAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean Active; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETCAMERAACTIVEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DEFC5F375773BAA3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetCameraActiveAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetCameraActiveAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETCAMERAACTIVEACTION_METHOD_3_DEFC5F375773BAA3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5A74C665AA7AE3A6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetCameraActiveAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetCameraActiveAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETCAMERAACTIVEACTION_METHOD_3_5A74C665AA7AE3A6_OFFSET))(a1, a2);
		}
	};
}
