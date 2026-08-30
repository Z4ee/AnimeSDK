#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54_1.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

namespace System { class String; }

#define CLASS_2_93E79F7657AE9322_9_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x177CC4E0)
#define CLASS_2_93E79F7657AE9322_9_METHOD_2_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x177CC4F0)
#define CLASS_2_93E79F7657AE9322_9_METHOD_2_455E250D679F9642_OFFSET UNITYSDK_OFFSET(0x177CC6F0)
#define CLASS_2_93E79F7657AE9322_9_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x177CC6B0)
#define CLASS_2_93E79F7657AE9322_9__CTOR_OFFSET UNITYSDK_OFFSET(0x177CC770)

inline static constexpr unsigned int Class_2_93E79F7657AE9322_9_TypeDefinitionIndex = 56353;

class Class_2_93E79F7657AE9322_9 : public ::Class_1_0FEB237AF044DA54_1
{
public:
	::System::String* PBNGCKGAHLN; // 0x10
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93E79F7657AE9322_9__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93E79F7657AE9322_9_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_4389275F4099DE36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93E79F7657AE9322_9_METHOD_2_4389275F4099DE36_OFFSET))(this);
	}

	::System::Void Method_2_455E250D679F9642()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93E79F7657AE9322_9_METHOD_2_455E250D679F9642_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93E79F7657AE9322_9_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
