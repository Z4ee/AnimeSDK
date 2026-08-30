#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_41E07A9DDAB7FC78.h"
#include "unitysdk/Enum_3_75A1C8C41006A504.h"

class Class_1_190BB2A3D431BCD2_1;

#define CLASS_2_BCCFF2D8183D94E4_METHOD_2_07880C3C85D28804_OFFSET UNITYSDK_OFFSET(0x17A79820)
#define CLASS_2_BCCFF2D8183D94E4_UPDATEADDROLE_OFFSET UNITYSDK_OFFSET(0x17A799A0)
#define CLASS_2_BCCFF2D8183D94E4_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x17A799F0)
#define CLASS_2_BCCFF2D8183D94E4__CTOR_OFFSET UNITYSDK_OFFSET(0x17A79A60)

inline static constexpr unsigned int Class_2_BCCFF2D8183D94E4_TypeDefinitionIndex = 65161;

class Class_2_BCCFF2D8183D94E4 : public ::Class_1_41E07A9DDAB7FC78
{
public:
	::System::UInt32 GAJICDKPHPA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCCFF2D8183D94E4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_07880C3C85D28804(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_BCCFF2D8183D94E4_METHOD_2_07880C3C85D28804_OFFSET))(this, a1);
	}

	::System::Void UpdateAddRole(::Class_1_190BB2A3D431BCD2_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_190BB2A3D431BCD2_1*))((::PBYTE)hIl2Cpp + CLASS_2_BCCFF2D8183D94E4_UPDATEADDROLE_OFFSET))(this, a1);
	}

	::System::Void UpdateAfter(::Enum_3_75A1C8C41006A504 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A1C8C41006A504))((::PBYTE)hIl2Cpp + CLASS_2_BCCFF2D8183D94E4_UPDATEAFTER_OFFSET))(this, a1);
	}
};
