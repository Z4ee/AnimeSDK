#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54_1.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
#include "unitysdk/Struct_2_9E453D160BF69F98.h"

namespace System { class String; }

#define CLASS_2_36C03C1C7D9A365D_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x19AA3390)
#define CLASS_2_36C03C1C7D9A365D_METHOD_2_7778ABE51AFDB516_OFFSET UNITYSDK_OFFSET(0x19AA3660)
#define CLASS_2_36C03C1C7D9A365D_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x19AA3620)
#define CLASS_2_36C03C1C7D9A365D_METHOD_2_D460587695D41831_OFFSET UNITYSDK_OFFSET(0x19AA33A0)
#define CLASS_2_36C03C1C7D9A365D__CTOR_OFFSET UNITYSDK_OFFSET(0x19AA37B0)

inline static constexpr unsigned int Class_2_36C03C1C7D9A365D_TypeDefinitionIndex = 56341;

class Class_2_36C03C1C7D9A365D : public ::Class_1_0FEB237AF044DA54_1
{
public:
	::Struct_2_9E453D160BF69F98 GPKCGOLOJKC; // 0x10
	::System::String* AFHDFCPCKGF; // 0x28
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x30
	::RPG::GameCore::FixPoint KHBBNDBJAFK; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36C03C1C7D9A365D__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36C03C1C7D9A365D_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_D460587695D41831()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36C03C1C7D9A365D_METHOD_2_D460587695D41831_OFFSET))(this);
	}

	::System::Void Method_2_7778ABE51AFDB516()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36C03C1C7D9A365D_METHOD_2_7778ABE51AFDB516_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36C03C1C7D9A365D_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
