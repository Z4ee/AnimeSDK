#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_152;

#define CLASS_1_59F064CC78086962_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1C529320)
#define CLASS_1_59F064CC78086962_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1C529310)
#define CLASS_1_59F064CC78086962_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1C529390)
#define CLASS_1_59F064CC78086962_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1C529330)
#define CLASS_1_59F064CC78086962_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1C5114D0)
#define CLASS_1_59F064CC78086962_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1C5293A0)
#define CLASS_1_59F064CC78086962__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5293B0)

inline static constexpr unsigned int Class_1_59F064CC78086962_TypeDefinitionIndex = 41877;

class Class_1_59F064CC78086962 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_152* _Config_k__BackingField; // 0x10
	::System::Boolean _IsActive_k__BackingField; // 0x18
	::System::UInt32 _Identifier_k__BackingField; // 0x1C

	::System::Void _ctor(::System::UInt32 a1, ::Class_0_16E4307DCC419505_152* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_0_16E4307DCC419505_152*))((::PBYTE)hIl2Cpp + CLASS_1_59F064CC78086962__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt32 get_Identifier()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59F064CC78086962_GET_IDENTIFIER_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_152* get_Config()
	{
		return ((::Class_0_16E4307DCC419505_152*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59F064CC78086962_GET_CONFIG_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59F064CC78086962_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean get_IsActive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59F064CC78086962_GET_ISACTIVE_OFFSET))(this);
	}

	::System::Void set_IsActive(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_59F064CC78086962_SET_ISACTIVE_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59F064CC78086962_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
