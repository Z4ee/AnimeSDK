#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D9F0098D327651E7.h"
#include "unitysdk/Enum_3_96F6662CA3713095_6.h"

class Class_4_8927E79549C0BD80;

#define CLASS_2_96D57F4FC4B857DA_METHOD_2_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1EE08720)
#define CLASS_2_96D57F4FC4B857DA_METHOD_2_4628F59881B23161_OFFSET UNITYSDK_OFFSET(0x1EE08640)
#define CLASS_2_96D57F4FC4B857DA__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE08710)

inline static constexpr unsigned int Class_2_96D57F4FC4B857DA_TypeDefinitionIndex = 93022;

class Class_2_96D57F4FC4B857DA : public ::Class_1_D9F0098D327651E7
{
public:
	::Class_4_8927E79549C0BD80* Field_2_7; // 0x68
	::Enum_3_96F6662CA3713095_6 Field_2_0; // 0x70
	::System::UInt32 Field_2_6; // 0x74
	::System::Boolean Field_2_5; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96D57F4FC4B857DA__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_2_4628F59881B23161()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96D57F4FC4B857DA_METHOD_2_4628F59881B23161_OFFSET))(this);
	}

	::System::UInt32 Method_2_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96D57F4FC4B857DA_METHOD_2_02A3D10A9D535169_OFFSET))(this);
	}
};
