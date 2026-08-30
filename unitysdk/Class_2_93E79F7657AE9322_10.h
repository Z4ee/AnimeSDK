#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54_1.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

namespace System { class String; }

#define CLASS_2_93E79F7657AE9322_10_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x15761090)
#define CLASS_2_93E79F7657AE9322_10_METHOD_2_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x157610A0)
#define CLASS_2_93E79F7657AE9322_10_METHOD_2_455E250D679F9642_OFFSET UNITYSDK_OFFSET(0x157612A0)
#define CLASS_2_93E79F7657AE9322_10_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15761260)
#define CLASS_2_93E79F7657AE9322_10__CTOR_OFFSET UNITYSDK_OFFSET(0x15761320)

inline static constexpr unsigned int Class_2_93E79F7657AE9322_10_TypeDefinitionIndex = 56354;

class Class_2_93E79F7657AE9322_10 : public ::Class_1_0FEB237AF044DA54_1
{
public:
	::System::String* PBNGCKGAHLN; // 0x10
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93E79F7657AE9322_10__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93E79F7657AE9322_10_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_4389275F4099DE36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93E79F7657AE9322_10_METHOD_2_4389275F4099DE36_OFFSET))(this);
	}

	::System::Void Method_2_455E250D679F9642()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93E79F7657AE9322_10_METHOD_2_455E250D679F9642_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93E79F7657AE9322_10_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
