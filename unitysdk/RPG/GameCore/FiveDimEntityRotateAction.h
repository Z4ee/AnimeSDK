#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimEntityRotateConfig; }

#define RPG_GAMECORE_FIVEDIMENTITYROTATEACTION_METHOD_3_0484B2FE21A5BE3F_OFFSET UNITYSDK_OFFSET(0x188FF3B0)
#define RPG_GAMECORE_FIVEDIMENTITYROTATEACTION_METHOD_3_B4A0EE9E455A866E_OFFSET UNITYSDK_OFFSET(0x188F4F80)
#define RPG_GAMECORE_FIVEDIMENTITYROTATEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x188F4F60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEntityRotateAction_TypeDefinitionIndex = 17813;

	class FiveDimEntityRotateAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean IsStop; // 0x10
		::RPG::GameCore::FiveDimEntityRotateConfig* RotateConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTITYROTATEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0484B2FE21A5BE3F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEntityRotateAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEntityRotateAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTITYROTATEACTION_METHOD_3_0484B2FE21A5BE3F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B4A0EE9E455A866E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEntityRotateAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEntityRotateAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTITYROTATEACTION_METHOD_3_B4A0EE9E455A866E_OFFSET))(a1, a2);
		}
	};
}
