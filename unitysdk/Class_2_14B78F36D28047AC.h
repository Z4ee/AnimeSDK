#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

namespace System { class String; }

#define CLASS_2_14B78F36D28047AC_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x15B1F190)
#define CLASS_2_14B78F36D28047AC_METHOD_2_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0x15B1F4B0)
#define CLASS_2_14B78F36D28047AC_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15B1F470)
#define CLASS_2_14B78F36D28047AC_METHOD_2_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0x15B1F1A0)
#define CLASS_2_14B78F36D28047AC__CTOR_OFFSET UNITYSDK_OFFSET(0x15B1F650)

inline static constexpr unsigned int Class_2_14B78F36D28047AC_TypeDefinitionIndex = 53587;

class Class_2_14B78F36D28047AC : public ::Class_1_0FEB237AF044DA54
{
public:
	::System::String* Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18
	::System::String* Field_2_2; // 0x20
	::System::Byte Field_2_3; // 0x28
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x2C
	::System::Int32 Field_2_5; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14B78F36D28047AC__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14B78F36D28047AC_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_E876C8B6D3B840A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14B78F36D28047AC_METHOD_2_E876C8B6D3B840A6_OFFSET))(this);
	}

	::System::Void Method_2_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14B78F36D28047AC_METHOD_2_B387E1AED8A8F880_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14B78F36D28047AC_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
