#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54_1.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
#include "unitysdk/Struct_2_9E453D160BF69F98.h"

namespace System { class String; }

#define CLASS_2_10BC4B86FE496202_1_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xBA26330)
#define CLASS_2_10BC4B86FE496202_1_METHOD_2_102A1038C38883F3_OFFSET UNITYSDK_OFFSET(0xBA265D0)
#define CLASS_2_10BC4B86FE496202_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBA26590)
#define CLASS_2_10BC4B86FE496202_1_METHOD_2_ED65AE7582736594_OFFSET UNITYSDK_OFFSET(0xBA26340)
#define CLASS_2_10BC4B86FE496202_1__CTOR_OFFSET UNITYSDK_OFFSET(0xBA266E0)

inline static constexpr unsigned int Class_2_10BC4B86FE496202_1_TypeDefinitionIndex = 56145;

class Class_2_10BC4B86FE496202_1 : public ::Class_1_0FEB237AF044DA54_1
{
public:
	::Struct_2_9E453D160BF69F98 GPKCGOLOJKC; // 0x10
	::System::String* DEPNEJJMIJM; // 0x28
	::System::Boolean KMDFIPAGIAF; // 0x30
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10BC4B86FE496202_1__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10BC4B86FE496202_1_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_ED65AE7582736594()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10BC4B86FE496202_1_METHOD_2_ED65AE7582736594_OFFSET))(this);
	}

	::System::Void Method_2_102A1038C38883F3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10BC4B86FE496202_1_METHOD_2_102A1038C38883F3_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10BC4B86FE496202_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
