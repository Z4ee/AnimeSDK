#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B6AB561EB80E0B93.h"
#include "unitysdk/RPG/GameCore/ActivitySubModeType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"

namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class PVEGameStatistics; }

#define CLASS_2_4AE2E2446E21EF55_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0xB21FCD0)
#define CLASS_2_4AE2E2446E21EF55_GET_ACTIVITYSUBMODETYPE_OFFSET UNITYSDK_OFFSET(0xB21FCC0)
#define CLASS_2_4AE2E2446E21EF55_METHOD_2_4ED9AC70395CC495_OFFSET UNITYSDK_OFFSET(0xB220200)
#define CLASS_2_4AE2E2446E21EF55_METHOD_2_5A63F04E0FA4300F_OFFSET UNITYSDK_OFFSET(0xB21FFC0)
#define CLASS_2_4AE2E2446E21EF55__CTOR_OFFSET UNITYSDK_OFFSET(0xB220290)

inline static constexpr unsigned int Class_2_4AE2E2446E21EF55_TypeDefinitionIndex = 56012;

class Class_2_4AE2E2446E21EF55 : public ::Class_1_B6AB561EB80E0B93
{
public:
	::RPG::GameCore::FixPoint AAKMJDFLJPE; // 0x38
	::RPG::GameCore::FixPoint GMDJCPPJABE; // 0x40
	::RPG::GameCore::FixPoint LAPLACLGGHB; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4AE2E2446E21EF55__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::ActivitySubModeType get_ActivitySubModeType()
	{
		return ((::RPG::GameCore::ActivitySubModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4AE2E2446E21EF55_GET_ACTIVITYSUBMODETYPE_OFFSET))(this);
	}

	::System::Void GenStatistics(::RPG::GameCore::PVEGameStatistics* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + CLASS_2_4AE2E2446E21EF55_GENSTATISTICS_OFFSET))(this, a1);
	}

	::System::Void Method_2_5A63F04E0FA4300F(::RPG::GameCore::JsonEnum* a1, ::RPG::GameCore::PropertyModifyFunction a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::JsonEnum*, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_4AE2E2446E21EF55_METHOD_2_5A63F04E0FA4300F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_4ED9AC70395CC495(::RPG::GameCore::FixPoint& a1, ::RPG::GameCore::PropertyModifyFunction a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint&, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_4AE2E2446E21EF55_METHOD_2_4ED9AC70395CC495_OFFSET))(this, a1, a2, a3);
	}
};
