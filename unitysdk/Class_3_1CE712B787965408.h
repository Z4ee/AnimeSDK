#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_DDE1D61870C38FA1.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_BC950E36747FB4C9.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_0_16E4307DCC419505_417;
class Class_1_7043F373F25220E6;

#define CLASS_3_1CE712B787965408_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x179EAF80)
#define CLASS_3_1CE712B787965408_METHOD_3_765AA9E3DE4EA73F_OFFSET UNITYSDK_OFFSET(0x179EAD80)
#define CLASS_3_1CE712B787965408_METHOD_3_FAA945ED465745BC_OFFSET UNITYSDK_OFFSET(0x179EA680)
#define CLASS_3_1CE712B787965408__CHECKNEEDREBUILD_OFFSET UNITYSDK_OFFSET(0x179EA710)
#define CLASS_3_1CE712B787965408__CTOR_OFFSET UNITYSDK_OFFSET(0x179EA5A0)
#define CLASS_3_1CE712B787965408__REBUILD_OFFSET UNITYSDK_OFFSET(0x179EA780)

inline static constexpr unsigned int Class_3_1CE712B787965408_TypeDefinitionIndex = 59938;

class Class_3_1CE712B787965408 : public ::Class_2_DDE1D61870C38FA1
{
public:
	::Class_0_16E4307DCC419505_417* Field_3_0; // 0x28
	::Class_1_7043F373F25220E6* Field_3_1; // 0x30
	::Struct_2_BC950E36747FB4C9 Field_3_2; // 0x38
	::System::ValueTuple_3<::System::UInt32, ::System::UInt32, ::System::UInt32> Field_3_3; // 0x40

	::System::Void _ctor(::Struct_2_BC950E36747FB4C9& a1, ::Class_1_7043F373F25220E6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BC950E36747FB4C9&, ::Class_1_7043F373F25220E6*))((::PBYTE)hIl2Cpp + CLASS_3_1CE712B787965408__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_FAA945ED465745BC(::Class_0_16E4307DCC419505_417* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_417*))((::PBYTE)hIl2Cpp + CLASS_3_1CE712B787965408_METHOD_3_FAA945ED465745BC_OFFSET))(this, a1);
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
