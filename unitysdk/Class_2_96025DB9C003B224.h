#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54_1.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

namespace System { class String; }

#define CLASS_2_96025DB9C003B224_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x155A41F0)
#define CLASS_2_96025DB9C003B224_METHOD_2_601EF3E7226D7DC2_OFFSET UNITYSDK_OFFSET(0x155A4200)
#define CLASS_2_96025DB9C003B224_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x155A44D0)
#define CLASS_2_96025DB9C003B224_METHOD_2_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x155A4510)
#define CLASS_2_96025DB9C003B224__CTOR_OFFSET UNITYSDK_OFFSET(0x155A46B0)

inline static constexpr unsigned int Class_2_96025DB9C003B224_TypeDefinitionIndex = 56118;

class Class_2_96025DB9C003B224 : public ::Class_1_0FEB237AF044DA54_1
{
public:
	::System::String* KMCAMMNBLGI; // 0x10
	::System::String* BBMMBAKDJBC; // 0x18
	::System::Int32 GADJHNPODIP; // 0x20
	::System::UInt32 FJEHBAMMNEG; // 0x24
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x28
	::System::Int32 PJFCFDKMALA; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96025DB9C003B224__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96025DB9C003B224_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_601EF3E7226D7DC2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96025DB9C003B224_METHOD_2_601EF3E7226D7DC2_OFFSET))(this);
	}

	::System::Void Method_2_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96025DB9C003B224_METHOD_2_E41B6A823556FEEA_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96025DB9C003B224_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
