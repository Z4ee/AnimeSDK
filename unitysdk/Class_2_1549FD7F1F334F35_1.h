#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54_1.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

namespace System { class String; }

#define CLASS_2_1549FD7F1F334F35_1_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1915A400)
#define CLASS_2_1549FD7F1F334F35_1_METHOD_2_102A1038C38883F3_OFFSET UNITYSDK_OFFSET(0x1915A710)
#define CLASS_2_1549FD7F1F334F35_1_METHOD_2_601EF3E7226D7DC2_OFFSET UNITYSDK_OFFSET(0x1915A410)
#define CLASS_2_1549FD7F1F334F35_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1915A6D0)
#define CLASS_2_1549FD7F1F334F35_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1915A8A0)

inline static constexpr unsigned int Class_2_1549FD7F1F334F35_1_TypeDefinitionIndex = 56338;

class Class_2_1549FD7F1F334F35_1 : public ::Class_1_0FEB237AF044DA54_1
{
public:
	::System::String* MFIEDDGBIPH; // 0x10
	::RPG::GameCore::FixPoint FOBILLOEFJK; // 0x18
	::RPG::GameCore::FixPoint KHBBNDBJAFK; // 0x20
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1549FD7F1F334F35_1__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1549FD7F1F334F35_1_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_601EF3E7226D7DC2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1549FD7F1F334F35_1_METHOD_2_601EF3E7226D7DC2_OFFSET))(this);
	}

	::System::Void Method_2_102A1038C38883F3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1549FD7F1F334F35_1_METHOD_2_102A1038C38883F3_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1549FD7F1F334F35_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
