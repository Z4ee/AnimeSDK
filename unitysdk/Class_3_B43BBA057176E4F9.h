#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimPlayerResetMode.h"
#include "unitysdk/RPG/GameCore/FiveDimPlayerResetSweepDirection.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_B43BBA057176E4F9_METHOD_3_400CD15A8456AED9_OFFSET UNITYSDK_OFFSET(0x1D6BA5E0)
#define CLASS_3_B43BBA057176E4F9_METHOD_3_7F22A781A9156478_OFFSET UNITYSDK_OFFSET(0x1D6BA640)
#define CLASS_3_B43BBA057176E4F9__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6BA620)

inline static constexpr unsigned int Class_3_B43BBA057176E4F9_TypeDefinitionIndex = 21219;

class Class_3_B43BBA057176E4F9 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Single GADCHMOGPAO; // 0x18
	::RPG::GameCore::FiveDimPlayerResetMode FCGFFAJIBKA; // 0x1C
	::RPG::GameCore::FiveDimPlayerResetSweepDirection OJPNBGDKPJP; // 0x20
	::System::Single NIDNKPMPIHL; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B43BBA057176E4F9__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_400CD15A8456AED9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_B43BBA057176E4F9*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_B43BBA057176E4F9*&))((::PBYTE)hIl2Cpp + CLASS_3_B43BBA057176E4F9_METHOD_3_400CD15A8456AED9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7F22A781A9156478(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_B43BBA057176E4F9* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_B43BBA057176E4F9*))((::PBYTE)hIl2Cpp + CLASS_3_B43BBA057176E4F9_METHOD_3_7F22A781A9156478_OFFSET))(a1, a2);
	}
};
