#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

namespace System { class String; }

#define CLASS_2_96025DB9C003B224_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x17E8BF90)
#define CLASS_2_96025DB9C003B224_METHOD_2_601EF3E7226D7DC2_OFFSET UNITYSDK_OFFSET(0x17E8BFA0)
#define CLASS_2_96025DB9C003B224_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17E8C270)
#define CLASS_2_96025DB9C003B224_METHOD_2_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x17E8C2B0)
#define CLASS_2_96025DB9C003B224__CTOR_OFFSET UNITYSDK_OFFSET(0x17E8C450)

inline static constexpr unsigned int Class_2_96025DB9C003B224_TypeDefinitionIndex = 53591;

class Class_2_96025DB9C003B224 : public ::Class_1_0FEB237AF044DA54
{
public:
	::System::String* Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18
	::System::Int32 Field_2_2; // 0x20
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x24
	::System::Int32 Field_2_4; // 0x28
	::System::UInt32 Field_2_5; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96025DB9C003B224__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96025DB9C003B224_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_601EF3E7226D7DC2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96025DB9C003B224_METHOD_2_601EF3E7226D7DC2_OFFSET))(this);
	}

	::System::Void Method_2_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96025DB9C003B224_METHOD_2_E41B6A823556FEEA_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96025DB9C003B224_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
