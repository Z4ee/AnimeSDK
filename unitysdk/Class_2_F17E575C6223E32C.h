#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9E296C95827C90A8.h"
#include "unitysdk/RPG/GameCore/ActivityStatisticsType.h"
#include "unitysdk/RPG/GameCore/ActivitySubModeType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"

namespace RPG::GameCore { class PVEGameStatistics; }

#define CLASS_2_F17E575C6223E32C_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0x139D4340)
#define CLASS_2_F17E575C6223E32C_GET_ACTIVITYSUBMODETYPE_OFFSET UNITYSDK_OFFSET(0x139D4330)
#define CLASS_2_F17E575C6223E32C_METHOD_2_48BA2F5A2F5F8B43_OFFSET UNITYSDK_OFFSET(0x139D4620)
#define CLASS_2_F17E575C6223E32C_METHOD_2_4ED9AC70395CC495_OFFSET UNITYSDK_OFFSET(0x139D4790)
#define CLASS_2_F17E575C6223E32C_METHOD_2_CB21C488147ABF3E_OFFSET UNITYSDK_OFFSET(0x139D48A0)
#define CLASS_2_F17E575C6223E32C__CTOR_OFFSET UNITYSDK_OFFSET(0x139D4820)
#define CLASS_2_F17E575C6223E32C___IFIXBASEPROXY_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0x139D4840)

inline static constexpr unsigned int Class_2_F17E575C6223E32C_TypeDefinitionIndex = 52287;

class Class_2_F17E575C6223E32C : public ::Class_1_9E296C95827C90A8
{
public:
	::RPG::GameCore::FixPoint Field_2_0; // 0x30
	::RPG::GameCore::FixPoint Field_2_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F17E575C6223E32C__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::ActivitySubModeType get_ActivitySubModeType()
	{
		return ((::RPG::GameCore::ActivitySubModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F17E575C6223E32C_GET_ACTIVITYSUBMODETYPE_OFFSET))(this);
	}

	::System::Void GenStatistics(::RPG::GameCore::PVEGameStatistics* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + CLASS_2_F17E575C6223E32C_GENSTATISTICS_OFFSET))(this, a1);
	}

	::System::Void Method_2_48BA2F5A2F5F8B43(::RPG::GameCore::ActivityStatisticsType a1, ::RPG::GameCore::PropertyModifyFunction a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityStatisticsType, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_F17E575C6223E32C_METHOD_2_48BA2F5A2F5F8B43_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_4ED9AC70395CC495(::RPG::GameCore::FixPoint& a1, ::RPG::GameCore::PropertyModifyFunction a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint&, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_F17E575C6223E32C_METHOD_2_4ED9AC70395CC495_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __iFixBaseProxy_GenStatistics(::RPG::GameCore::PVEGameStatistics* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + CLASS_2_F17E575C6223E32C___IFIXBASEPROXY_GENSTATISTICS_OFFSET))(this, a1);
	}

	::System::Void Method_2_CB21C488147ABF3E(::RPG::GameCore::ActivityStatisticsType a1, ::RPG::GameCore::PropertyModifyFunction a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityStatisticsType, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_F17E575C6223E32C_METHOD_2_CB21C488147ABF3E_OFFSET))(this, a1, a2, a3);
	}
};
