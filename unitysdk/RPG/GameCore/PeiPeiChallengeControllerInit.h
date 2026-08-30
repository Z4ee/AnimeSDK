#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PeiPeiChallengeCheckPoint; }

#define RPG_GAMECORE_PEIPEICHALLENGECONTROLLERINIT_METHOD_3_07F0B989C1555615_OFFSET UNITYSDK_OFFSET(0x1D41A700)
#define RPG_GAMECORE_PEIPEICHALLENGECONTROLLERINIT_METHOD_3_0B1E01C0557AB31C_OFFSET UNITYSDK_OFFSET(0x1D41A740)
#define RPG_GAMECORE_PEIPEICHALLENGECONTROLLERINIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D41A730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PeiPeiChallengeControllerInit_TypeDefinitionIndex = 20946;

	class PeiPeiChallengeControllerInit : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::PeiPeiChallengeCheckPoint* CheckPoint01; // 0x18
		::RPG::GameCore::PeiPeiChallengeCheckPoint* CheckPoint02; // 0x20
		::RPG::GameCore::PeiPeiChallengeCheckPoint* CheckPoint03; // 0x28
		::RPG::GameCore::PeiPeiChallengeCheckPoint* CheckPoint04; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PEIPEICHALLENGECONTROLLERINIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_07F0B989C1555615(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PeiPeiChallengeControllerInit*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PeiPeiChallengeControllerInit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PEIPEICHALLENGECONTROLLERINIT_METHOD_3_07F0B989C1555615_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0B1E01C0557AB31C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PeiPeiChallengeControllerInit* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PeiPeiChallengeControllerInit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PEIPEICHALLENGECONTROLLERINIT_METHOD_3_0B1E01C0557AB31C_OFFSET))(a1, a2);
		}
	};
}
