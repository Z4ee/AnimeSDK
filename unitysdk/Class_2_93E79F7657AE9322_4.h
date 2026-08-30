#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54_1.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

namespace System { class String; }

#define CLASS_2_93E79F7657AE9322_4_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xD22F6F0)
#define CLASS_2_93E79F7657AE9322_4_METHOD_2_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0xD22F700)
#define CLASS_2_93E79F7657AE9322_4_METHOD_2_455E250D679F9642_OFFSET UNITYSDK_OFFSET(0xD22F900)
#define CLASS_2_93E79F7657AE9322_4_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD22F8C0)
#define CLASS_2_93E79F7657AE9322_4__CTOR_OFFSET UNITYSDK_OFFSET(0xD22F980)

inline static constexpr unsigned int Class_2_93E79F7657AE9322_4_TypeDefinitionIndex = 56324;

class Class_2_93E79F7657AE9322_4 : public ::Class_1_0FEB237AF044DA54_1
{
public:
	::System::String* KNJOABFKMHD; // 0x10
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93E79F7657AE9322_4__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93E79F7657AE9322_4_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_4389275F4099DE36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93E79F7657AE9322_4_METHOD_2_4389275F4099DE36_OFFSET))(this);
	}

	::System::Void Method_2_455E250D679F9642()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93E79F7657AE9322_4_METHOD_2_455E250D679F9642_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93E79F7657AE9322_4_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
