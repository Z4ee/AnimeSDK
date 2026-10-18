#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B6AB561EB80E0B93.h"
#include "unitysdk/RPG/GameCore/ActivitySubModeType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"

namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class PVEGameStatistics; }

#define CLASS_2_4AE2E2446E21EF55_1_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0x15AD2300)
#define CLASS_2_4AE2E2446E21EF55_1_GET_ACTIVITYSUBMODETYPE_OFFSET UNITYSDK_OFFSET(0x15AD22F0)
#define CLASS_2_4AE2E2446E21EF55_1_METHOD_2_4ED9AC70395CC495_OFFSET UNITYSDK_OFFSET(0x15AD27D0)
#define CLASS_2_4AE2E2446E21EF55_1_METHOD_2_6BEE8F49A8C0FB3E_OFFSET UNITYSDK_OFFSET(0x15AD25E0)
#define CLASS_2_4AE2E2446E21EF55_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15AD2860)

inline static constexpr unsigned int Class_2_4AE2E2446E21EF55_1_TypeDefinitionIndex = 56013;

class Class_2_4AE2E2446E21EF55_1 : public ::Class_1_B6AB561EB80E0B93
{
public:
	::RPG::GameCore::FixPoint CMANCKIBBHP; // 0x38
	::RPG::GameCore::FixPoint BLECGLCDDCE; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4AE2E2446E21EF55_1__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::ActivitySubModeType get_ActivitySubModeType()
	{
		return ((::RPG::GameCore::ActivitySubModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4AE2E2446E21EF55_1_GET_ACTIVITYSUBMODETYPE_OFFSET))(this);
	}

	::System::Void GenStatistics(::RPG::GameCore::PVEGameStatistics* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + CLASS_2_4AE2E2446E21EF55_1_GENSTATISTICS_OFFSET))(this, a1);
	}

	::System::Void Method_2_6BEE8F49A8C0FB3E(::RPG::GameCore::JsonEnum* a1, ::RPG::GameCore::PropertyModifyFunction a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::JsonEnum*, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_4AE2E2446E21EF55_1_METHOD_2_6BEE8F49A8C0FB3E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_4ED9AC70395CC495(::RPG::GameCore::FixPoint& a1, ::RPG::GameCore::PropertyModifyFunction a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint&, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_4AE2E2446E21EF55_1_METHOD_2_4ED9AC70395CC495_OFFSET))(this, a1, a2, a3);
	}
};
