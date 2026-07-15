#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

namespace System { class String; }

#define CLASS_2_93E79F7657AE9322_2_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x16EF7410)
#define CLASS_2_93E79F7657AE9322_2_METHOD_2_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x16EF7420)
#define CLASS_2_93E79F7657AE9322_2_METHOD_2_455E250D679F9642_OFFSET UNITYSDK_OFFSET(0x16EF7620)
#define CLASS_2_93E79F7657AE9322_2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16EF75E0)
#define CLASS_2_93E79F7657AE9322_2__CTOR_OFFSET UNITYSDK_OFFSET(0x16EF76A0)

inline static constexpr unsigned int Class_2_93E79F7657AE9322_2_TypeDefinitionIndex = 53595;

class Class_2_93E79F7657AE9322_2 : public ::Class_1_0FEB237AF044DA54
{
public:
	::System::String* Field_2_0; // 0x10
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93E79F7657AE9322_2__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93E79F7657AE9322_2_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_4389275F4099DE36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93E79F7657AE9322_2_METHOD_2_4389275F4099DE36_OFFSET))(this);
	}

	::System::Void Method_2_455E250D679F9642()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93E79F7657AE9322_2_METHOD_2_455E250D679F9642_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93E79F7657AE9322_2_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
