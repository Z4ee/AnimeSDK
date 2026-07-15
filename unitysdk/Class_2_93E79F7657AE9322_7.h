#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

namespace System { class String; }

#define CLASS_2_93E79F7657AE9322_7_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x15EF9FB0)
#define CLASS_2_93E79F7657AE9322_7_METHOD_2_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x15EF9FC0)
#define CLASS_2_93E79F7657AE9322_7_METHOD_2_455E250D679F9642_OFFSET UNITYSDK_OFFSET(0x15EFA1C0)
#define CLASS_2_93E79F7657AE9322_7_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15EFA180)
#define CLASS_2_93E79F7657AE9322_7__CTOR_OFFSET UNITYSDK_OFFSET(0x15EFA240)

inline static constexpr unsigned int Class_2_93E79F7657AE9322_7_TypeDefinitionIndex = 53637;

class Class_2_93E79F7657AE9322_7 : public ::Class_1_0FEB237AF044DA54
{
public:
	::System::String* Field_2_0; // 0x10
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93E79F7657AE9322_7__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93E79F7657AE9322_7_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_4389275F4099DE36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93E79F7657AE9322_7_METHOD_2_4389275F4099DE36_OFFSET))(this);
	}

	::System::Void Method_2_455E250D679F9642()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93E79F7657AE9322_7_METHOD_2_455E250D679F9642_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93E79F7657AE9322_7_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
