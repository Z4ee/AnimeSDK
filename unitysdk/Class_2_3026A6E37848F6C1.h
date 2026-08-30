#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54_1.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

#define CLASS_2_3026A6E37848F6C1_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xB76B780)
#define CLASS_2_3026A6E37848F6C1_METHOD_2_601EF3E7226D7DC2_OFFSET UNITYSDK_OFFSET(0xB76B790)
#define CLASS_2_3026A6E37848F6C1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB76BAB0)
#define CLASS_2_3026A6E37848F6C1_METHOD_2_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0xB76BAF0)
#define CLASS_2_3026A6E37848F6C1__CTOR_OFFSET UNITYSDK_OFFSET(0xB76BCE0)

inline static constexpr unsigned int Class_2_3026A6E37848F6C1_TypeDefinitionIndex = 56295;

class Class_2_3026A6E37848F6C1 : public ::Class_1_0FEB237AF044DA54_1
{
public:
	::RPG::GameCore::FixPoint DFLENFKEMPM; // 0x10
	::RPG::GameCore::FixPoint OIEBGFOEOKG; // 0x18
	::RPG::GameCore::FixPoint BGOIDNBFIMC; // 0x20
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3026A6E37848F6C1__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3026A6E37848F6C1_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_601EF3E7226D7DC2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3026A6E37848F6C1_METHOD_2_601EF3E7226D7DC2_OFFSET))(this);
	}

	::System::Void Method_2_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3026A6E37848F6C1_METHOD_2_E41B6A823556FEEA_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3026A6E37848F6C1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
