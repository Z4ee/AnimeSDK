#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54_1.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

namespace System { class String; }

#define CLASS_2_93E79F7657AE9322_3_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1A7E3F30)
#define CLASS_2_93E79F7657AE9322_3_METHOD_2_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x1A7E3F40)
#define CLASS_2_93E79F7657AE9322_3_METHOD_2_455E250D679F9642_OFFSET UNITYSDK_OFFSET(0x1A7E4140)
#define CLASS_2_93E79F7657AE9322_3_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A7E4100)
#define CLASS_2_93E79F7657AE9322_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7E41C0)

inline static constexpr unsigned int Class_2_93E79F7657AE9322_3_TypeDefinitionIndex = 56316;

class Class_2_93E79F7657AE9322_3 : public ::Class_1_0FEB237AF044DA54_1
{
public:
	::System::String* HCOAKLFBOCK; // 0x10
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93E79F7657AE9322_3__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93E79F7657AE9322_3_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_4389275F4099DE36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93E79F7657AE9322_3_METHOD_2_4389275F4099DE36_OFFSET))(this);
	}

	::System::Void Method_2_455E250D679F9642()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93E79F7657AE9322_3_METHOD_2_455E250D679F9642_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93E79F7657AE9322_3_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
