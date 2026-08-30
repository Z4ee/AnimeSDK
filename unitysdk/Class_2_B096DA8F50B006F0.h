#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54_1.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

#define CLASS_2_B096DA8F50B006F0_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xB4E2790)
#define CLASS_2_B096DA8F50B006F0_METHOD_2_601EF3E7226D7DC2_OFFSET UNITYSDK_OFFSET(0xB4E27A0)
#define CLASS_2_B096DA8F50B006F0_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB4E2AC0)
#define CLASS_2_B096DA8F50B006F0_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0xB4E2B00)
#define CLASS_2_B096DA8F50B006F0__CTOR_OFFSET UNITYSDK_OFFSET(0xB4E2CF0)

inline static constexpr unsigned int Class_2_B096DA8F50B006F0_TypeDefinitionIndex = 56334;

class Class_2_B096DA8F50B006F0 : public ::Class_1_0FEB237AF044DA54_1
{
public:
	::RPG::GameCore::FixPoint IFLBAAABKAI; // 0x10
	::RPG::GameCore::FixPoint KHBBNDBJAFK; // 0x18
	::System::UInt32 BNCODJLHDMN; // 0x20
	::System::UInt32 AIMGACMOMDD; // 0x24
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B096DA8F50B006F0__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B096DA8F50B006F0_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_601EF3E7226D7DC2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B096DA8F50B006F0_METHOD_2_601EF3E7226D7DC2_OFFSET))(this);
	}

	::System::Void Method_2_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B096DA8F50B006F0_METHOD_2_E11AC65AA0DC2249_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B096DA8F50B006F0_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
