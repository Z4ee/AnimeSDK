#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54_1.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

namespace System { class String; }

#define CLASS_2_93E79F7657AE9322_5_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xBA74C30)
#define CLASS_2_93E79F7657AE9322_5_METHOD_2_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0xBA74C40)
#define CLASS_2_93E79F7657AE9322_5_METHOD_2_455E250D679F9642_OFFSET UNITYSDK_OFFSET(0xBA74E40)
#define CLASS_2_93E79F7657AE9322_5_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBA74E00)
#define CLASS_2_93E79F7657AE9322_5__CTOR_OFFSET UNITYSDK_OFFSET(0xBA74EC0)

inline static constexpr unsigned int Class_2_93E79F7657AE9322_5_TypeDefinitionIndex = 56345;

class Class_2_93E79F7657AE9322_5 : public ::Class_1_0FEB237AF044DA54_1
{
public:
	::System::String* DFJJIKBPJHP; // 0x10
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93E79F7657AE9322_5__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93E79F7657AE9322_5_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_4389275F4099DE36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93E79F7657AE9322_5_METHOD_2_4389275F4099DE36_OFFSET))(this);
	}

	::System::Void Method_2_455E250D679F9642()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93E79F7657AE9322_5_METHOD_2_455E250D679F9642_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93E79F7657AE9322_5_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
