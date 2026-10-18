#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54_1.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

namespace System { class String; }

#define CLASS_2_14B78F36D28047AC_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x16577980)
#define CLASS_2_14B78F36D28047AC_METHOD_2_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0x16577CA0)
#define CLASS_2_14B78F36D28047AC_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16577C60)
#define CLASS_2_14B78F36D28047AC_METHOD_2_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0x16577990)
#define CLASS_2_14B78F36D28047AC__CTOR_OFFSET UNITYSDK_OFFSET(0x16577E40)

inline static constexpr unsigned int Class_2_14B78F36D28047AC_TypeDefinitionIndex = 56114;

class Class_2_14B78F36D28047AC : public ::Class_1_0FEB237AF044DA54_1
{
public:
	::System::String* CIDCEJCGOGB; // 0x10
	::System::String* CJLKMGHEIGC; // 0x18
	::System::String* EOBLJJBOBIN; // 0x20
	::System::Byte JBCBONFABOM; // 0x28
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x2C
	::System::Int32 KBAPBCNJHDB; // 0x30

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
