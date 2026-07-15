#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
#include "unitysdk/Struct_2_9E453D160BF69F98.h"

#define CLASS_2_E181A07934D599F0_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x16BC2970)
#define CLASS_2_E181A07934D599F0_METHOD_2_6173AF17811AED4B_OFFSET UNITYSDK_OFFSET(0x16BC2980)
#define CLASS_2_E181A07934D599F0_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16BC2B50)
#define CLASS_2_E181A07934D599F0_METHOD_2_EBAC71FBE1837205_OFFSET UNITYSDK_OFFSET(0x16BC2B90)
#define CLASS_2_E181A07934D599F0__CTOR_OFFSET UNITYSDK_OFFSET(0x16BC2C10)

inline static constexpr unsigned int Class_2_E181A07934D599F0_TypeDefinitionIndex = 53582;

class Class_2_E181A07934D599F0 : public ::Class_1_0FEB237AF044DA54
{
public:
	::Struct_2_9E453D160BF69F98 Field_2_0; // 0x10
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E181A07934D599F0__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E181A07934D599F0_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_6173AF17811AED4B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E181A07934D599F0_METHOD_2_6173AF17811AED4B_OFFSET))(this);
	}

	::System::Void Method_2_EBAC71FBE1837205()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E181A07934D599F0_METHOD_2_EBAC71FBE1837205_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E181A07934D599F0_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
