#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54_1.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
#include "unitysdk/Struct_2_9E453D160BF69F98.h"

#define CLASS_2_B1F3DF6FC495A448_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1549CD50)
#define CLASS_2_B1F3DF6FC495A448_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1549CFA0)
#define CLASS_2_B1F3DF6FC495A448_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x1549CFE0)
#define CLASS_2_B1F3DF6FC495A448_METHOD_2_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0x1549CD60)
#define CLASS_2_B1F3DF6FC495A448__CTOR_OFFSET UNITYSDK_OFFSET(0x1549D0E0)

inline static constexpr unsigned int Class_2_B1F3DF6FC495A448_TypeDefinitionIndex = 56348;

class Class_2_B1F3DF6FC495A448 : public ::Class_1_0FEB237AF044DA54_1
{
public:
	::Struct_2_9E453D160BF69F98 GPKCGOLOJKC; // 0x10
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x28
	::System::Byte LAOACNPDOLD; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B1F3DF6FC495A448__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B1F3DF6FC495A448_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_E876C8B6D3B840A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B1F3DF6FC495A448_METHOD_2_E876C8B6D3B840A6_OFFSET))(this);
	}

	::System::Void Method_2_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B1F3DF6FC495A448_METHOD_2_E11AC65AA0DC2249_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B1F3DF6FC495A448_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
