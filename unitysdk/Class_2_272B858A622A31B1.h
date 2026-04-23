#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9E296C95827C90A8.h"
#include "unitysdk/RPG/GameCore/ActivitySubModeType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RogueTournTitanFloorType.h"

namespace RPG::GameCore { class LevelGlobalActionDelayChanged; }
namespace RPG::GameCore { class PVEGameStatistics; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_272B858A622A31B1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11A5E2A0)
#define CLASS_2_272B858A622A31B1_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0x11A5E350)
#define CLASS_2_272B858A622A31B1_GET_ACTIVITYSUBMODETYPE_OFFSET UNITYSDK_OFFSET(0x11A5E290)
#define CLASS_2_272B858A622A31B1_GET_DISABLETITANBLESS_OFFSET UNITYSDK_OFFSET(0x11A5E750)
#define CLASS_2_272B858A622A31B1_GET_TITANFLOORTYPE_OFFSET UNITYSDK_OFFSET(0x11A5E730)
#define CLASS_2_272B858A622A31B1_METHOD_2_10C632178068BDBC_OFFSET UNITYSDK_OFFSET(0x11A5E4B0)
#define CLASS_2_272B858A622A31B1_METHOD_2_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x11A5E3F0)
#define CLASS_2_272B858A622A31B1_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x11A5E880)
#define CLASS_2_272B858A622A31B1_METHOD_2_5F7CFA81A8A21F07_OFFSET UNITYSDK_OFFSET(0x11A5E6D0)
#define CLASS_2_272B858A622A31B1_METHOD_2_8662EAB82C3C8842_OFFSET UNITYSDK_OFFSET(0x11A5E510)
#define CLASS_2_272B858A622A31B1_METHOD_2_C94BFB8159DBE554_OFFSET UNITYSDK_OFFSET(0x11A5E670)
#define CLASS_2_272B858A622A31B1_SET_DISABLETITANBLESS_OFFSET UNITYSDK_OFFSET(0x11A5E760)
#define CLASS_2_272B858A622A31B1_SET_TITANFLOORTYPE_OFFSET UNITYSDK_OFFSET(0x11A5E740)
#define CLASS_2_272B858A622A31B1__CTOR_OFFSET UNITYSDK_OFFSET(0x11A5E770)
#define CLASS_2_272B858A622A31B1___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11A5E780)
#define CLASS_2_272B858A622A31B1___IFIXBASEPROXY_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0x11A5E810)

inline static constexpr unsigned int Class_2_272B858A622A31B1_TypeDefinitionIndex = 51618;

class Class_2_272B858A622A31B1 : public ::Class_1_9E296C95827C90A8
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* _DisableTitanBless_k__BackingField; // 0x30
	::System::UInt32 Field_2_3; // 0x38
	::RPG::GameCore::FixPoint Field_2_5; // 0x40
	::RPG::GameCore::FixPoint Field_2_4; // 0x48
	::System::UInt32 Field_2_2; // 0x50
	::RPG::GameCore::RogueTournTitanFloorType _TitanFloorType_k__BackingField; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_272B858A622A31B1__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::ActivitySubModeType get_ActivitySubModeType()
	{
		return ((::RPG::GameCore::ActivitySubModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_272B858A622A31B1_GET_ACTIVITYSUBMODETYPE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_272B858A622A31B1_DISPOSE_OFFSET))(this);
	}

	::System::Void GenStatistics(::RPG::GameCore::PVEGameStatistics* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + CLASS_2_272B858A622A31B1_GENSTATISTICS_OFFSET))(this, a1);
	}

	::System::Void Method_2_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_272B858A622A31B1_METHOD_2_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_2_10C632178068BDBC(::RPG::GameCore::RogueTournTitanFloorType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournTitanFloorType))((::PBYTE)hIl2Cpp + CLASS_2_272B858A622A31B1_METHOD_2_10C632178068BDBC_OFFSET))(this, a1);
	}

	::System::Void Method_2_8662EAB82C3C8842(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_272B858A622A31B1_METHOD_2_8662EAB82C3C8842_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_C94BFB8159DBE554(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_272B858A622A31B1_METHOD_2_C94BFB8159DBE554_OFFSET))(this, a1);
	}

	::System::Void Method_2_5F7CFA81A8A21F07(::RPG::GameCore::LevelGlobalActionDelayChanged* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGlobalActionDelayChanged*))((::PBYTE)hIl2Cpp + CLASS_2_272B858A622A31B1_METHOD_2_5F7CFA81A8A21F07_OFFSET))(this, a1);
	}

	::RPG::GameCore::RogueTournTitanFloorType get_TitanFloorType()
	{
		return ((::RPG::GameCore::RogueTournTitanFloorType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_272B858A622A31B1_GET_TITANFLOORTYPE_OFFSET))(this);
	}

	::System::Void set_TitanFloorType(::RPG::GameCore::RogueTournTitanFloorType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournTitanFloorType))((::PBYTE)hIl2Cpp + CLASS_2_272B858A622A31B1_SET_TITANFLOORTYPE_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_DisableTitanBless()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_272B858A622A31B1_GET_DISABLETITANBLESS_OFFSET))(this);
	}

	::System::Void set_DisableTitanBless(::System::Collections::Generic::List_1<::System::UInt32>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_272B858A622A31B1_SET_DISABLETITANBLESS_OFFSET))(this, value);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_272B858A622A31B1___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_GenStatistics(::RPG::GameCore::PVEGameStatistics* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + CLASS_2_272B858A622A31B1___IFIXBASEPROXY_GENSTATISTICS_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_272B858A622A31B1_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
