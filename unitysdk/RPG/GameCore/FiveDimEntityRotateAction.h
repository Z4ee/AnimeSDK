#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimEntityRotateConfig; }

#define RPG_GAMECORE_FIVEDIMENTITYROTATEACTION_METHOD_3_2042BD14151A532D_OFFSET UNITYSDK_OFFSET(0x1BA93650)
#define RPG_GAMECORE_FIVEDIMENTITYROTATEACTION_METHOD_3_B4A0EE9E455A866E_OFFSET UNITYSDK_OFFSET(0x1BA93690)
#define RPG_GAMECORE_FIVEDIMENTITYROTATEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA93680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEntityRotateAction_TypeDefinitionIndex = 18017;

	class FiveDimEntityRotateAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean IsStop; // 0x10
		::RPG::GameCore::FiveDimEntityRotateConfig* RotateConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTITYROTATEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2042BD14151A532D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEntityRotateAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEntityRotateAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTITYROTATEACTION_METHOD_3_2042BD14151A532D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B4A0EE9E455A866E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEntityRotateAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEntityRotateAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTITYROTATEACTION_METHOD_3_B4A0EE9E455A866E_OFFSET))(a1, a2);
		}
	};
}
