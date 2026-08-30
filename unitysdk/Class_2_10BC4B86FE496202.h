#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54_1.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

namespace System { class String; }

#define CLASS_2_10BC4B86FE496202_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xC44C1A0)
#define CLASS_2_10BC4B86FE496202_METHOD_2_102A1038C38883F3_OFFSET UNITYSDK_OFFSET(0xC44C420)
#define CLASS_2_10BC4B86FE496202_METHOD_2_51BBA01F511E6107_OFFSET UNITYSDK_OFFSET(0xC44C1B0)
#define CLASS_2_10BC4B86FE496202_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC44C3E0)
#define CLASS_2_10BC4B86FE496202__CTOR_OFFSET UNITYSDK_OFFSET(0xC44C500)

inline static constexpr unsigned int Class_2_10BC4B86FE496202_TypeDefinitionIndex = 56313;

class Class_2_10BC4B86FE496202 : public ::Class_1_0FEB237AF044DA54_1
{
public:
	::System::String* IFNAGLOMHBK; // 0x10
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x18
	::System::Boolean ICMOLOJEKDF; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10BC4B86FE496202__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10BC4B86FE496202_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_51BBA01F511E6107()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10BC4B86FE496202_METHOD_2_51BBA01F511E6107_OFFSET))(this);
	}

	::System::Void Method_2_102A1038C38883F3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10BC4B86FE496202_METHOD_2_102A1038C38883F3_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10BC4B86FE496202_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
