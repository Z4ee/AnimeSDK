#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_DDE1D61870C38FA1.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_BC950E36747FB4C9.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_0_16E4307DCC419505_452;
class Class_1_7043F373F25220E6;

#define CLASS_3_1CE712B787965408_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x183733C0)
#define CLASS_3_1CE712B787965408_METHOD_3_765AA9E3DE4EA73F_OFFSET UNITYSDK_OFFSET(0x183731C0)
#define CLASS_3_1CE712B787965408_METHOD_3_FAA945ED465745BC_OFFSET UNITYSDK_OFFSET(0x18372AB0)
#define CLASS_3_1CE712B787965408__CHECKNEEDREBUILD_OFFSET UNITYSDK_OFFSET(0x18372B40)
#define CLASS_3_1CE712B787965408__CTOR_OFFSET UNITYSDK_OFFSET(0x183729D0)
#define CLASS_3_1CE712B787965408__REBUILD_OFFSET UNITYSDK_OFFSET(0x18372BB0)

inline static constexpr unsigned int Class_3_1CE712B787965408_TypeDefinitionIndex = 62784;

class Class_3_1CE712B787965408 : public ::Class_2_DDE1D61870C38FA1
{
public:
	::Class_0_16E4307DCC419505_452* BBHLBMONOIJ; // 0x28
	::Class_1_7043F373F25220E6* ELJAHHOIABP; // 0x30
	::System::ValueTuple_3<::System::UInt32, ::System::UInt32, ::System::UInt32> LDMKNOIOFLI; // 0x38
	::Struct_2_BC950E36747FB4C9 ODMGLBEOBDP; // 0x44

	::System::Void _ctor(::Struct_2_BC950E36747FB4C9& a1, ::Class_1_7043F373F25220E6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BC950E36747FB4C9&, ::Class_1_7043F373F25220E6*))((::PBYTE)hIl2Cpp + CLASS_3_1CE712B787965408__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_FAA945ED465745BC(::Class_0_16E4307DCC419505_452* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_452*))((::PBYTE)hIl2Cpp + CLASS_3_1CE712B787965408_METHOD_3_FAA945ED465745BC_OFFSET))(this, a1);
	}

	::System::Boolean _CheckNeedRebuild()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1CE712B787965408__CHECKNEEDREBUILD_OFFSET))(this);
	}

	::System::Void _Rebuild()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1CE712B787965408__REBUILD_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_3_765AA9E3DE4EA73F(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_3_1CE712B787965408_METHOD_3_765AA9E3DE4EA73F_OFFSET))(this, a1);
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1CE712B787965408_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}
};
