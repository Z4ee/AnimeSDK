#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9E296C95827C90A8.h"
#include "unitysdk/RPG/GameCore/ActivityStatisticsType.h"
#include "unitysdk/RPG/GameCore/ActivitySubModeType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"

namespace RPG::GameCore { class PVEGameStatistics; }

#define CLASS_2_388BDB5757EEA0B9_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0x9513F50)
#define CLASS_2_388BDB5757EEA0B9_GET_ACTIVITYSUBMODETYPE_OFFSET UNITYSDK_OFFSET(0x9513F40)
#define CLASS_2_388BDB5757EEA0B9_METHOD_2_417B0842B5A9B96B_OFFSET UNITYSDK_OFFSET(0x9514380)
#define CLASS_2_388BDB5757EEA0B9_METHOD_2_48BA2F5A2F5F8B43_OFFSET UNITYSDK_OFFSET(0x95140F0)
#define CLASS_2_388BDB5757EEA0B9_METHOD_2_4ED9AC70395CC495_OFFSET UNITYSDK_OFFSET(0x9514260)
#define CLASS_2_388BDB5757EEA0B9__CTOR_OFFSET UNITYSDK_OFFSET(0x95142F0)
#define CLASS_2_388BDB5757EEA0B9___IFIXBASEPROXY_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0x9514310)

inline static constexpr unsigned int Class_2_388BDB5757EEA0B9_TypeDefinitionIndex = 51614;

class Class_2_388BDB5757EEA0B9 : public ::Class_1_9E296C95827C90A8
{
public:
	::RPG::GameCore::FixPoint Field_2_1; // 0x30
	::RPG::GameCore::FixPoint Field_2_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_388BDB5757EEA0B9__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::ActivitySubModeType get_ActivitySubModeType()
	{
		return ((::RPG::GameCore::ActivitySubModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_388BDB5757EEA0B9_GET_ACTIVITYSUBMODETYPE_OFFSET))(this);
	}

	::System::Void GenStatistics(::RPG::GameCore::PVEGameStatistics* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + CLASS_2_388BDB5757EEA0B9_GENSTATISTICS_OFFSET))(this, a1);
	}

	::System::Void Method_2_48BA2F5A2F5F8B43(::RPG::GameCore::ActivityStatisticsType a1, ::RPG::GameCore::PropertyModifyFunction a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityStatisticsType, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_388BDB5757EEA0B9_METHOD_2_48BA2F5A2F5F8B43_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_4ED9AC70395CC495(::RPG::GameCore::FixPoint& a1, ::RPG::GameCore::PropertyModifyFunction a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint&, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_388BDB5757EEA0B9_METHOD_2_4ED9AC70395CC495_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __iFixBaseProxy_GenStatistics(::RPG::GameCore::PVEGameStatistics* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + CLASS_2_388BDB5757EEA0B9___IFIXBASEPROXY_GENSTATISTICS_OFFSET))(this, P0);
	}

	::System::Void Method_2_417B0842B5A9B96B(::RPG::GameCore::ActivityStatisticsType P0, ::RPG::GameCore::PropertyModifyFunction P1, ::RPG::GameCore::FixPoint P2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityStatisticsType, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_388BDB5757EEA0B9_METHOD_2_417B0842B5A9B96B_OFFSET))(this, P0, P1, P2);
	}
};
