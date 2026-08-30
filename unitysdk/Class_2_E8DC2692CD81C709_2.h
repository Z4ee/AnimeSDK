#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54_1.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

namespace System { class String; }

#define CLASS_2_E8DC2692CD81C709_2_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x18372630)
#define CLASS_2_E8DC2692CD81C709_2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18372880)
#define CLASS_2_E8DC2692CD81C709_2_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x183728C0)
#define CLASS_2_E8DC2692CD81C709_2_METHOD_2_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0x18372640)
#define CLASS_2_E8DC2692CD81C709_2__CTOR_OFFSET UNITYSDK_OFFSET(0x183729C0)

inline static constexpr unsigned int Class_2_E8DC2692CD81C709_2_TypeDefinitionIndex = 56312;

class Class_2_E8DC2692CD81C709_2 : public ::Class_1_0FEB237AF044DA54_1
{
public:
	::System::String* JEEOMGHKDNB; // 0x10
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x18
	::System::Byte GHGOBIACNDM; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8DC2692CD81C709_2__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8DC2692CD81C709_2_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_E876C8B6D3B840A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8DC2692CD81C709_2_METHOD_2_E876C8B6D3B840A6_OFFSET))(this);
	}

	::System::Void Method_2_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8DC2692CD81C709_2_METHOD_2_E11AC65AA0DC2249_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8DC2692CD81C709_2_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
