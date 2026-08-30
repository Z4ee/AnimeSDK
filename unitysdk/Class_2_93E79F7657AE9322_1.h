#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54_1.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

namespace System { class String; }

#define CLASS_2_93E79F7657AE9322_1_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x156BCF00)
#define CLASS_2_93E79F7657AE9322_1_METHOD_2_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x156BCF10)
#define CLASS_2_93E79F7657AE9322_1_METHOD_2_455E250D679F9642_OFFSET UNITYSDK_OFFSET(0x156BD110)
#define CLASS_2_93E79F7657AE9322_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x156BD0D0)
#define CLASS_2_93E79F7657AE9322_1__CTOR_OFFSET UNITYSDK_OFFSET(0x156BD190)

inline static constexpr unsigned int Class_2_93E79F7657AE9322_1_TypeDefinitionIndex = 56307;

class Class_2_93E79F7657AE9322_1 : public ::Class_1_0FEB237AF044DA54_1
{
public:
	::System::String* GIHGIIBPBMP; // 0x10
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93E79F7657AE9322_1__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93E79F7657AE9322_1_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_4389275F4099DE36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93E79F7657AE9322_1_METHOD_2_4389275F4099DE36_OFFSET))(this);
	}

	::System::Void Method_2_455E250D679F9642()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93E79F7657AE9322_1_METHOD_2_455E250D679F9642_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93E79F7657AE9322_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
