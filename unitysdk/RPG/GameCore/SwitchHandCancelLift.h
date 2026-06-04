#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SWITCHHANDCANCELLIFT_METHOD_3_3A8BF88266B135C1_OFFSET UNITYSDK_OFFSET(0x19CDA240)
#define RPG_GAMECORE_SWITCHHANDCANCELLIFT_METHOD_3_C66D751A40A88AD5_OFFSET UNITYSDK_OFFSET(0x19CDA350)
#define RPG_GAMECORE_SWITCHHANDCANCELLIFT__CTOR_OFFSET UNITYSDK_OFFSET(0x19CDA320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchHandCancelLift_TypeDefinitionIndex = 19816;

	class SwitchHandCancelLift : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDCANCELLIFT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3A8BF88266B135C1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchHandCancelLift*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchHandCancelLift*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDCANCELLIFT_METHOD_3_3A8BF88266B135C1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C66D751A40A88AD5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchHandCancelLift* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchHandCancelLift*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDCANCELLIFT_METHOD_3_C66D751A40A88AD5_OFFSET))(a1, a2);
		}
	};
}
