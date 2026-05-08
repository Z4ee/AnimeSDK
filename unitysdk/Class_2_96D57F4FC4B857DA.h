#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D9F0098D327651E7.h"
#include "unitysdk/Enum_3_96F6662CA3713095_8.h"

class Class_4_8927E79549C0BD80;

#define CLASS_2_96D57F4FC4B857DA_METHOD_2_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A73B7C0)
#define CLASS_2_96D57F4FC4B857DA_METHOD_2_184AE6D5B1216FA2_OFFSET UNITYSDK_OFFSET(0x1A73B6E0)
#define CLASS_2_96D57F4FC4B857DA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A73B7B0)

inline static constexpr unsigned int Class_2_96D57F4FC4B857DA_TypeDefinitionIndex = 83860;

class Class_2_96D57F4FC4B857DA : public ::Class_1_D9F0098D327651E7
{
public:
	::Class_4_8927E79549C0BD80* Field_2_1; // 0x68
	::Enum_3_96F6662CA3713095_8 Field_2_0; // 0x70
	::System::Boolean Field_2_3; // 0x74
	::System::UInt32 Field_2_2; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96D57F4FC4B857DA__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_2_184AE6D5B1216FA2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96D57F4FC4B857DA_METHOD_2_184AE6D5B1216FA2_OFFSET))(this);
	}

	::System::UInt32 Method_2_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96D57F4FC4B857DA_METHOD_2_02A3D10A9D535169_OFFSET))(this);
	}
};
