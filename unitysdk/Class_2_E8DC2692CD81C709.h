#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

namespace System { class String; }

#define CLASS_2_E8DC2692CD81C709_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1744BD40)
#define CLASS_2_E8DC2692CD81C709_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1744BF90)
#define CLASS_2_E8DC2692CD81C709_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x1744BFD0)
#define CLASS_2_E8DC2692CD81C709_METHOD_2_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0x1744BD50)
#define CLASS_2_E8DC2692CD81C709__CTOR_OFFSET UNITYSDK_OFFSET(0x1744C0D0)

inline static constexpr unsigned int Class_2_E8DC2692CD81C709_TypeDefinitionIndex = 53586;

class Class_2_E8DC2692CD81C709 : public ::Class_1_0FEB237AF044DA54
{
public:
	::System::String* Field_2_0; // 0x10
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x18
	::System::Byte Field_2_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8DC2692CD81C709__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8DC2692CD81C709_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_E876C8B6D3B840A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8DC2692CD81C709_METHOD_2_E876C8B6D3B840A6_OFFSET))(this);
	}

	::System::Void Method_2_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8DC2692CD81C709_METHOD_2_E11AC65AA0DC2249_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8DC2692CD81C709_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
