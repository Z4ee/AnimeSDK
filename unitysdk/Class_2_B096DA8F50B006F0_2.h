#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54_1.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

#define CLASS_2_B096DA8F50B006F0_2_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xC252D30)
#define CLASS_2_B096DA8F50B006F0_2_METHOD_2_601EF3E7226D7DC2_OFFSET UNITYSDK_OFFSET(0xC252D40)
#define CLASS_2_B096DA8F50B006F0_2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC253060)
#define CLASS_2_B096DA8F50B006F0_2_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0xC2530A0)
#define CLASS_2_B096DA8F50B006F0_2__CTOR_OFFSET UNITYSDK_OFFSET(0xC253290)

inline static constexpr unsigned int Class_2_B096DA8F50B006F0_2_TypeDefinitionIndex = 56149;

class Class_2_B096DA8F50B006F0_2 : public ::Class_1_0FEB237AF044DA54_1
{
public:
	::System::UInt32 BNCODJLHDMN; // 0x10
	::RPG::GameCore::FixPoint KHBBNDBJAFK; // 0x18
	::RPG::GameCore::FixPoint IFLBAAABKAI; // 0x20
	::System::UInt32 AIMGACMOMDD; // 0x28
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B096DA8F50B006F0_2__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B096DA8F50B006F0_2_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_601EF3E7226D7DC2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B096DA8F50B006F0_2_METHOD_2_601EF3E7226D7DC2_OFFSET))(this);
	}

	::System::Void Method_2_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B096DA8F50B006F0_2_METHOD_2_E11AC65AA0DC2249_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B096DA8F50B006F0_2_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
