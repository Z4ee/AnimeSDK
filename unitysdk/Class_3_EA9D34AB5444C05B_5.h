#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A78FC80A78B3367C.h"
#include "unitysdk/Enum_3_4D23D4D1211777E9.h"
#include "unitysdk/MoleMole/EntityHandle.h"

#define CLASS_3_EA9D34AB5444C05B_5_METHOD_3_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0x1674FD30)
#define CLASS_3_EA9D34AB5444C05B_5_METHOD_3_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1674FD20)
#define CLASS_3_EA9D34AB5444C05B_5__CTOR_OFFSET UNITYSDK_OFFSET(0x16750040)

inline static constexpr unsigned int Class_3_EA9D34AB5444C05B_5_TypeDefinitionIndex = 75548;

class Class_3_EA9D34AB5444C05B_5 : public ::Class_2_A78FC80A78B3367C<::MoleMole::EntityHandle>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA9D34AB5444C05B_5__CTOR_OFFSET))(this);
	}

	::Enum_3_4D23D4D1211777E9 Method_3_A96DCA30C6927810()
	{
		return ((::Enum_3_4D23D4D1211777E9(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA9D34AB5444C05B_5_METHOD_3_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_3_460F8AE6EF9687FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA9D34AB5444C05B_5_METHOD_3_460F8AE6EF9687FD_OFFSET))(this);
	}
};
