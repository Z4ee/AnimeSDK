#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54_1.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

namespace System { class String; }

#define CLASS_2_0B4FA7055B6DFCA6_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x18868FC0)
#define CLASS_2_0B4FA7055B6DFCA6_METHOD_2_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18868FD0)
#define CLASS_2_0B4FA7055B6DFCA6_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18869330)
#define CLASS_2_0B4FA7055B6DFCA6_METHOD_2_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x18869370)
#define CLASS_2_0B4FA7055B6DFCA6__CTOR_OFFSET UNITYSDK_OFFSET(0x188695B0)

inline static constexpr unsigned int Class_2_0B4FA7055B6DFCA6_TypeDefinitionIndex = 56311;

class Class_2_0B4FA7055B6DFCA6 : public ::Class_1_0FEB237AF044DA54_1
{
public:
	::System::String* BBMMBAKDJBC; // 0x10
	::System::String* IFNAGLOMHBK; // 0x18
	::System::String* DINBCKPJJEL; // 0x20
	::RPG::GameCore::FixPoint IHJPJGJDHNN; // 0x28
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x30
	::RPG::GameCore::FixPoint CEIFPNFFBPK; // 0x38
	::RPG::GameCore::FixPoint PIDECKOBKIJ; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0B4FA7055B6DFCA6__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0B4FA7055B6DFCA6_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0B4FA7055B6DFCA6_METHOD_2_6B72D4EE8C6E907F_OFFSET))(this);
	}

	::System::Void Method_2_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0B4FA7055B6DFCA6_METHOD_2_E41B6A823556FEEA_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0B4FA7055B6DFCA6_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
