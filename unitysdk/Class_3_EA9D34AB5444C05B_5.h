#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_FB50CDBDDEDBBCC8.h"
#include "unitysdk/Enum_3_22DDD7B50F316EE2.h"
#include "unitysdk/MoleMole/EntityHandle.h"

#define CLASS_3_EA9D34AB5444C05B_5_METHOD_3_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0x1769EED0)
#define CLASS_3_EA9D34AB5444C05B_5_METHOD_3_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1769EEC0)
#define CLASS_3_EA9D34AB5444C05B_5__CTOR_OFFSET UNITYSDK_OFFSET(0x1769F1E0)

inline static constexpr unsigned int Class_3_EA9D34AB5444C05B_5_TypeDefinitionIndex = 76762;

class Class_3_EA9D34AB5444C05B_5 : public ::Class_2_FB50CDBDDEDBBCC8<::MoleMole::EntityHandle>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA9D34AB5444C05B_5__CTOR_OFFSET))(this);
	}

	::Enum_3_22DDD7B50F316EE2 Method_3_A96DCA30C6927810()
	{
		return ((::Enum_3_22DDD7B50F316EE2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA9D34AB5444C05B_5_METHOD_3_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_3_460F8AE6EF9687FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA9D34AB5444C05B_5_METHOD_3_460F8AE6EF9687FD_OFFSET))(this);
	}
};
