#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CDA44BE4158CAA8A.h"
#include "unitysdk/Enum_3_E64C24AE0799EB7C.h"

namespace MoleMole { class SystemSettingEntryBase; }

#define CLASS_2_10B60098A2F46A6F_METHOD_2_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x12F12C60)
#define CLASS_2_10B60098A2F46A6F_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x12F12D30)
#define CLASS_2_10B60098A2F46A6F_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x12F12C10)
#define CLASS_2_10B60098A2F46A6F_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12F12CF0)
#define CLASS_2_10B60098A2F46A6F__CTOR_OFFSET UNITYSDK_OFFSET(0x12F12C20)

inline static constexpr unsigned int Class_2_10B60098A2F46A6F_TypeDefinitionIndex = 44213;

class Class_2_10B60098A2F46A6F : public ::Class_1_CDA44BE4158CAA8A
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + CLASS_2_10B60098A2F46A6F__CTOR_OFFSET))(this, a1);
	}

	::Enum_3_E64C24AE0799EB7C Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_E64C24AE0799EB7C(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10B60098A2F46A6F_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_10B60098A2F46A6F_METHOD_2_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10B60098A2F46A6F_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_10B60098A2F46A6F_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}
};
