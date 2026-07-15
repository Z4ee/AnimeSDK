#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

namespace System { class String; }

#define CLASS_2_B799564AAEC95D03_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1872F080)
#define CLASS_2_B799564AAEC95D03_METHOD_2_2B66C008535F8B01_OFFSET UNITYSDK_OFFSET(0x1872F230)
#define CLASS_2_B799564AAEC95D03_METHOD_2_8A8F4D8840527053_OFFSET UNITYSDK_OFFSET(0x1872F090)
#define CLASS_2_B799564AAEC95D03_METHOD_2_EB1549E9C6E3B4E9_OFFSET UNITYSDK_OFFSET(0x1872F2E0)
#define CLASS_2_B799564AAEC95D03__CTOR_OFFSET UNITYSDK_OFFSET(0x1872F330)

inline static constexpr unsigned int Class_2_B799564AAEC95D03_TypeDefinitionIndex = 53596;

class Class_2_B799564AAEC95D03 : public ::Class_1_0FEB237AF044DA54
{
public:
	::System::String* Field_2_0; // 0x10
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B799564AAEC95D03__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B799564AAEC95D03_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_8A8F4D8840527053()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B799564AAEC95D03_METHOD_2_8A8F4D8840527053_OFFSET))(this);
	}

	::System::Void Method_2_2B66C008535F8B01()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B799564AAEC95D03_METHOD_2_2B66C008535F8B01_OFFSET))(this);
	}

	::System::Void Method_2_EB1549E9C6E3B4E9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B799564AAEC95D03_METHOD_2_EB1549E9C6E3B4E9_OFFSET))(this);
	}
};
