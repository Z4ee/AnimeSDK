#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54_1.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
#include "unitysdk/RPG/GameCore/TurnState.h"

#define CLASS_2_7876B4BBAB5639D4_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x160ECDA0)
#define CLASS_2_7876B4BBAB5639D4_METHOD_2_98060E4D16CBDFE4_OFFSET UNITYSDK_OFFSET(0x160ED020)
#define CLASS_2_7876B4BBAB5639D4_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x160ECFE0)
#define CLASS_2_7876B4BBAB5639D4_METHOD_2_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0x160ECDB0)
#define CLASS_2_7876B4BBAB5639D4__CTOR_OFFSET UNITYSDK_OFFSET(0x160ED100)

inline static constexpr unsigned int Class_2_7876B4BBAB5639D4_TypeDefinitionIndex = 56319;

class Class_2_7876B4BBAB5639D4 : public ::Class_1_0FEB237AF044DA54_1
{
public:
	::RPG::GameCore::TurnState PIGMOFHJCOG; // 0x10
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7876B4BBAB5639D4__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7876B4BBAB5639D4_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_E876C8B6D3B840A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7876B4BBAB5639D4_METHOD_2_E876C8B6D3B840A6_OFFSET))(this);
	}

	::System::Void Method_2_98060E4D16CBDFE4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7876B4BBAB5639D4_METHOD_2_98060E4D16CBDFE4_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7876B4BBAB5639D4_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
