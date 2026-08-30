#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define RPG_CLIENT_CHARAEYEBLINKSTATERANDOM_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x1AD74490)
#define RPG_CLIENT_CHARAEYEBLINKSTATERANDOM_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1AD73F40)
#define RPG_CLIENT_CHARAEYEBLINKSTATERANDOM_METHOD_1_9D1353263EAF48A2_OFFSET UNITYSDK_OFFSET(0x1AD74280)
#define RPG_CLIENT_CHARAEYEBLINKSTATERANDOM_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x1AD73E40)
#define RPG_CLIENT_CHARAEYEBLINKSTATERANDOM_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1AD73FC0)
#define RPG_CLIENT_CHARAEYEBLINKSTATERANDOM_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x1AD741D0)
#define RPG_CLIENT_CHARAEYEBLINKSTATERANDOM_METHOD_1_D0CD9A971CA3B1CF_OFFSET UNITYSDK_OFFSET(0x1AD73E90)
#define RPG_CLIENT_CHARAEYEBLINKSTATERANDOM_METHOD_1_FE327FD0760E1514_OFFSET UNITYSDK_OFFSET(0x1AD74360)
#define RPG_CLIENT_CHARAEYEBLINKSTATERANDOM_TICK_OFFSET UNITYSDK_OFFSET(0x1AD74010)
#define RPG_CLIENT_CHARAEYEBLINKSTATERANDOM__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD74510)

namespace RPG::Client
{
	inline static constexpr unsigned int CharaEyeBlinkStateRandom_TypeDefinitionIndex = 68343;

	class CharaEyeBlinkStateRandom : public ::System::Object
	{
	public:
		::System::Single KeepOnProbability; // 0x10
		::UnityEngine::Vector2 KeepOnDuration; // 0x14
		::System::Single KeepOnCoolDown; // 0x1C
		::UnityEngine::Vector2 OnDuration; // 0x20
		::UnityEngine::Vector2 OffDuration; // 0x28
		::System::Single OnValue; // 0x30
		::System::Single OffValue; // 0x34
		::System::Boolean Lerp; // 0x38
		::System::Boolean _IsOn; // 0x39
		::System::Single _ChangeTimer; // 0x3C
		::System::Single _KeepTimer; // 0x40
		::System::Single _KeepCd; // 0x44
		::System::Single _LerpTimer; // 0x48
		::System::Single _LerpDuration; // 0x4C
		::System::Single _LerpTargetEyeIntensity; // 0x50
		::System::Single _EyeIntensity; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARAEYEBLINKSTATERANDOM__CTOR_OFFSET))(this);
		}

		::System::Single Method_1_A36150C5DCC8409E()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARAEYEBLINKSTATERANDOM_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
		}

		::System::Void Method_1_D0CD9A971CA3B1CF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARAEYEBLINKSTATERANDOM_METHOD_1_D0CD9A971CA3B1CF_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARAEYEBLINKSTATERANDOM_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARAEYEBLINKSTATERANDOM_TICK_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_9D1353263EAF48A2(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARAEYEBLINKSTATERANDOM_METHOD_1_9D1353263EAF48A2_OFFSET))(this, a1);
		}

		::System::Void Method_1_FE327FD0760E1514(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARAEYEBLINKSTATERANDOM_METHOD_1_FE327FD0760E1514_OFFSET))(this, a1);
		}

		::System::Void Method_1_CA6BDDCC5F7CE11E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARAEYEBLINKSTATERANDOM_METHOD_1_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
		}

		::System::Void Method_1_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARAEYEBLINKSTATERANDOM_METHOD_1_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_1_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARAEYEBLINKSTATERANDOM_METHOD_1_4343F372F34C05BF_1_OFFSET))(this);
		}
	};
}
