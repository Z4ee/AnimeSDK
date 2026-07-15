#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CHARAEYEBLINKSTATESTOP_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x191FEDA0)
#define RPG_CLIENT_CHARAEYEBLINKSTATESTOP_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x191FEE30)
#define RPG_CLIENT_CHARAEYEBLINKSTATESTOP_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x191FEDF0)
#define RPG_CLIENT_CHARAEYEBLINKSTATESTOP_TICK_OFFSET UNITYSDK_OFFSET(0x191FEE70)
#define RPG_CLIENT_CHARAEYEBLINKSTATESTOP__CTOR_OFFSET UNITYSDK_OFFSET(0x191FEED0)

namespace RPG::Client
{
	inline static constexpr unsigned int CharaEyeBlinkStateStop_TypeDefinitionIndex = 65330;

	class CharaEyeBlinkStateStop : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARAEYEBLINKSTATESTOP__CTOR_OFFSET))(this);
		}

		::System::Single Method_1_A36150C5DCC8409E()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARAEYEBLINKSTATESTOP_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARAEYEBLINKSTATESTOP_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARAEYEBLINKSTATESTOP_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARAEYEBLINKSTATESTOP_TICK_OFFSET))(this, a1);
		}
	};
}
