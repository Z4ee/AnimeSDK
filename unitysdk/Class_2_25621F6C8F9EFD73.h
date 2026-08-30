#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8128411C248405F5.h"

namespace RPG::GameCore { class FiveDimMiniGameCollectCoinWave; }

#define CLASS_2_25621F6C8F9EFD73_METHOD_2_0629E2B4DCFB5D1F_OFFSET UNITYSDK_OFFSET(0xE026740)
#define CLASS_2_25621F6C8F9EFD73_METHOD_2_1792C5120856A2A7_OFFSET UNITYSDK_OFFSET(0xE026810)
#define CLASS_2_25621F6C8F9EFD73_METHOD_2_19F951B38D2C86E3_OFFSET UNITYSDK_OFFSET(0xE0272D0)
#define CLASS_2_25621F6C8F9EFD73_METHOD_2_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0xE027030)
#define CLASS_2_25621F6C8F9EFD73_METHOD_2_ECF5F67B910F12F7_OFFSET UNITYSDK_OFFSET(0xE0271C0)
#define CLASS_2_25621F6C8F9EFD73__CTOR_OFFSET UNITYSDK_OFFSET(0xE027460)

inline static constexpr unsigned int Class_2_25621F6C8F9EFD73_TypeDefinitionIndex = 76467;

class Class_2_25621F6C8F9EFD73 : public ::Class_1_8128411C248405F5
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_25621F6C8F9EFD73__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FiveDimMiniGameCollectCoinWave* Method_2_0629E2B4DCFB5D1F()
	{
		return ((::RPG::GameCore::FiveDimMiniGameCollectCoinWave*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_25621F6C8F9EFD73_METHOD_2_0629E2B4DCFB5D1F_OFFSET))(this);
	}

	::System::Boolean Method_2_1792C5120856A2A7(::RPG::GameCore::FiveDimMiniGameCollectCoinWave* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FiveDimMiniGameCollectCoinWave*))((::PBYTE)hIl2Cpp + CLASS_2_25621F6C8F9EFD73_METHOD_2_1792C5120856A2A7_OFFSET))(this, a1);
	}

	::System::Void Method_2_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_25621F6C8F9EFD73_METHOD_2_B7F8E0B4AF22DEA3_OFFSET))(this);
	}

	::System::Single Method_2_ECF5F67B910F12F7()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_25621F6C8F9EFD73_METHOD_2_ECF5F67B910F12F7_OFFSET))(this);
	}

	::System::Single Method_2_19F951B38D2C86E3()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_25621F6C8F9EFD73_METHOD_2_19F951B38D2C86E3_OFFSET))(this);
	}
};
