#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

namespace System { class String; }

#define CLASS_2_E8DC2692CD81C709_1_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x15E5B4D0)
#define CLASS_2_E8DC2692CD81C709_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15E5B740)
#define CLASS_2_E8DC2692CD81C709_1_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x15E5B780)
#define CLASS_2_E8DC2692CD81C709_1_METHOD_2_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0x15E5B4E0)
#define CLASS_2_E8DC2692CD81C709_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15E5B890)

inline static constexpr unsigned int Class_2_E8DC2692CD81C709_1_TypeDefinitionIndex = 53589;

class Class_2_E8DC2692CD81C709_1 : public ::Class_1_0FEB237AF044DA54
{
public:
	::System::String* Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18
	::System::Byte Field_2_2; // 0x20
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8DC2692CD81C709_1__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8DC2692CD81C709_1_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_E876C8B6D3B840A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8DC2692CD81C709_1_METHOD_2_E876C8B6D3B840A6_OFFSET))(this);
	}

	::System::Void Method_2_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8DC2692CD81C709_1_METHOD_2_E11AC65AA0DC2249_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8DC2692CD81C709_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
