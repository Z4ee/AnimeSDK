#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54_1.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

#define CLASS_2_ED35EFBE77C8A17E_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x13A47CE0)
#define CLASS_2_ED35EFBE77C8A17E_METHOD_2_102A1038C38883F3_OFFSET UNITYSDK_OFFSET(0x13A47F80)
#define CLASS_2_ED35EFBE77C8A17E_METHOD_2_7C2C2820B36B9508_OFFSET UNITYSDK_OFFSET(0x13A47CF0)
#define CLASS_2_ED35EFBE77C8A17E_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13A47F40)
#define CLASS_2_ED35EFBE77C8A17E__CTOR_OFFSET UNITYSDK_OFFSET(0x13A48090)

inline static constexpr unsigned int Class_2_ED35EFBE77C8A17E_TypeDefinitionIndex = 56152;

class Class_2_ED35EFBE77C8A17E : public ::Class_1_0FEB237AF044DA54_1
{
public:
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x10
	::System::Int32 LAOACNPDOLD; // 0x14
	::System::UInt32 LBEFDGPIALG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED35EFBE77C8A17E__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED35EFBE77C8A17E_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_7C2C2820B36B9508()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED35EFBE77C8A17E_METHOD_2_7C2C2820B36B9508_OFFSET))(this);
	}

	::System::Void Method_2_102A1038C38883F3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED35EFBE77C8A17E_METHOD_2_102A1038C38883F3_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED35EFBE77C8A17E_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
