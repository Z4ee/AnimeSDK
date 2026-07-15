#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
#include "unitysdk/Struct_2_9E453D160BF69F98.h"

namespace System { class String; }

#define CLASS_2_3A3F8E1FCEE2B520_3_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x18BAF400)
#define CLASS_2_3A3F8E1FCEE2B520_3_METHOD_2_455E250D679F9642_OFFSET UNITYSDK_OFFSET(0x18BAF630)
#define CLASS_2_3A3F8E1FCEE2B520_3_METHOD_2_630A3B9C63A23882_OFFSET UNITYSDK_OFFSET(0x18BAF410)
#define CLASS_2_3A3F8E1FCEE2B520_3_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18BAF5F0)
#define CLASS_2_3A3F8E1FCEE2B520_3__CTOR_OFFSET UNITYSDK_OFFSET(0x18BAF6C0)

inline static constexpr unsigned int Class_2_3A3F8E1FCEE2B520_3_TypeDefinitionIndex = 53615;

class Class_2_3A3F8E1FCEE2B520_3 : public ::Class_1_0FEB237AF044DA54
{
public:
	::Struct_2_9E453D160BF69F98 Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x28
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A3F8E1FCEE2B520_3__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A3F8E1FCEE2B520_3_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_630A3B9C63A23882()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A3F8E1FCEE2B520_3_METHOD_2_630A3B9C63A23882_OFFSET))(this);
	}

	::System::Void Method_2_455E250D679F9642()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A3F8E1FCEE2B520_3_METHOD_2_455E250D679F9642_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A3F8E1FCEE2B520_3_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
