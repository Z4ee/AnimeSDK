#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

namespace System { class String; }

#define CLASS_2_0B4FA7055B6DFCA6_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x170A1E60)
#define CLASS_2_0B4FA7055B6DFCA6_METHOD_2_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x170A1E70)
#define CLASS_2_0B4FA7055B6DFCA6_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x170A21D0)
#define CLASS_2_0B4FA7055B6DFCA6_METHOD_2_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x170A2210)
#define CLASS_2_0B4FA7055B6DFCA6__CTOR_OFFSET UNITYSDK_OFFSET(0x170A2450)

inline static constexpr unsigned int Class_2_0B4FA7055B6DFCA6_TypeDefinitionIndex = 53597;

class Class_2_0B4FA7055B6DFCA6 : public ::Class_1_0FEB237AF044DA54
{
public:
	::System::String* Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18
	::System::String* Field_2_2; // 0x20
	::RPG::GameCore::FixPoint Field_2_3; // 0x28
	::RPG::GameCore::FixPoint Field_2_4; // 0x30
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x38
	::RPG::GameCore::FixPoint Field_2_6; // 0x40

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
