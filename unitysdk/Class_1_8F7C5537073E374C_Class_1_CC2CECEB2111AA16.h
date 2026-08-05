#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_8F7C5537073E374C_Class_1_15AFC060DAD5051B;
namespace MoleMole::Config { class ConfigAbilityTargetData; }

#define CLASS_1_8F7C5537073E374C_CLASS_1_CC2CECEB2111AA16_METHOD_1_CE751B834E412A69_OFFSET UNITYSDK_OFFSET(0x12B0C040)
#define CLASS_1_8F7C5537073E374C_CLASS_1_CC2CECEB2111AA16__CTOR_OFFSET UNITYSDK_OFFSET(0x12B0C030)

inline static constexpr unsigned int Class_1_8F7C5537073E374C_Class_1_CC2CECEB2111AA16_TypeDefinitionIndex = 42327;

class Class_1_8F7C5537073E374C_Class_1_CC2CECEB2111AA16 : public ::System::Object
{
public:
	::Foundation::AssetPath Field_1_1; // 0x10
	::Class_1_8F7C5537073E374C_Class_1_15AFC060DAD5051B* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F7C5537073E374C_CLASS_1_CC2CECEB2111AA16__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CE751B834E412A69(::MoleMole::Config::ConfigAbilityTargetData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAbilityTargetData*))((::PBYTE)hIl2Cpp + CLASS_1_8F7C5537073E374C_CLASS_1_CC2CECEB2111AA16_METHOD_1_CE751B834E412A69_OFFSET))(this, a1);
	}
};
