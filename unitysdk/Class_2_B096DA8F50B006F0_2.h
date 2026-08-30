#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54_1.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

#define CLASS_2_B096DA8F50B006F0_2_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xC3672F0)
#define CLASS_2_B096DA8F50B006F0_2_METHOD_2_601EF3E7226D7DC2_OFFSET UNITYSDK_OFFSET(0xC367300)
#define CLASS_2_B096DA8F50B006F0_2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC367620)
#define CLASS_2_B096DA8F50B006F0_2_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0xC367660)
#define CLASS_2_B096DA8F50B006F0_2__CTOR_OFFSET UNITYSDK_OFFSET(0xC367850)

inline static constexpr unsigned int Class_2_B096DA8F50B006F0_2_TypeDefinitionIndex = 56336;

class Class_2_B096DA8F50B006F0_2 : public ::Class_1_0FEB237AF044DA54_1
{
public:
	::System::UInt32 BNCODJLHDMN; // 0x10
	::System::UInt32 AIMGACMOMDD; // 0x14
	::RPG::GameCore::FixPoint KHBBNDBJAFK; // 0x18
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x20
	::RPG::GameCore::FixPoint IFLBAAABKAI; // 0x28

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
