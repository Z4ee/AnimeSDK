#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9E296C95827C90A8.h"
#include "unitysdk/RPG/GameCore/ActivitySubModeType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RogueTournTitanFloorType.h"

namespace RPG::GameCore { class LevelGlobalActionDelayChanged; }
namespace RPG::GameCore { class PVEGameStatistics; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_8BA6322CF88A4100_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA3A0390)
#define CLASS_2_8BA6322CF88A4100_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0xA3A0420)
#define CLASS_2_8BA6322CF88A4100_GET_ACTIVITYSUBMODETYPE_OFFSET UNITYSDK_OFFSET(0xA3A0380)
#define CLASS_2_8BA6322CF88A4100_GET_DISABLETITANBLESS_OFFSET UNITYSDK_OFFSET(0xA3A0940)
#define CLASS_2_8BA6322CF88A4100_GET_TITANFLOORTYPE_OFFSET UNITYSDK_OFFSET(0xA3A0920)
#define CLASS_2_8BA6322CF88A4100_METHOD_2_10C632178068BDBC_OFFSET UNITYSDK_OFFSET(0xA3A0590)
#define CLASS_2_8BA6322CF88A4100_METHOD_2_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xA3A04D0)
#define CLASS_2_8BA6322CF88A4100_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xA3A0A50)
#define CLASS_2_8BA6322CF88A4100_METHOD_2_5F7CFA81A8A21F07_OFFSET UNITYSDK_OFFSET(0xA3A08C0)
#define CLASS_2_8BA6322CF88A4100_METHOD_2_61DDB8B626D4C8FE_OFFSET UNITYSDK_OFFSET(0xA3A0800)
#define CLASS_2_8BA6322CF88A4100_METHOD_2_D11D44C2FC8C0B65_OFFSET UNITYSDK_OFFSET(0xA3A05F0)
#define CLASS_2_8BA6322CF88A4100_SET_DISABLETITANBLESS_OFFSET UNITYSDK_OFFSET(0xA3A0950)
#define CLASS_2_8BA6322CF88A4100_SET_TITANFLOORTYPE_OFFSET UNITYSDK_OFFSET(0xA3A0930)
#define CLASS_2_8BA6322CF88A4100__CTOR_OFFSET UNITYSDK_OFFSET(0xA3A0960)
#define CLASS_2_8BA6322CF88A4100___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA3A0970)
#define CLASS_2_8BA6322CF88A4100___IFIXBASEPROXY_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0xA3A09F0)

inline static constexpr unsigned int Class_2_8BA6322CF88A4100_TypeDefinitionIndex = 52291;

class Class_2_8BA6322CF88A4100 : public ::Class_1_9E296C95827C90A8
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* _DisableTitanBless_k__BackingField; // 0x30
	::RPG::GameCore::FixPoint Field_2_1; // 0x38
	::System::UInt32 Field_2_2; // 0x40
	::System::UInt32 Field_2_3; // 0x44
	::RPG::GameCore::FixPoint Field_2_4; // 0x48
	::RPG::GameCore::RogueTournTitanFloorType _TitanFloorType_k__BackingField; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8BA6322CF88A4100__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::ActivitySubModeType get_ActivitySubModeType()
	{
		return ((::RPG::GameCore::ActivitySubModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8BA6322CF88A4100_GET_ACTIVITYSUBMODETYPE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8BA6322CF88A4100_DISPOSE_OFFSET))(this);
	}

	::System::Void GenStatistics(::RPG::GameCore::PVEGameStatistics* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + CLASS_2_8BA6322CF88A4100_GENSTATISTICS_OFFSET))(this, a1);
	}

	::System::Void Method_2_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8BA6322CF88A4100_METHOD_2_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_2_10C632178068BDBC(::RPG::GameCore::RogueTournTitanFloorType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournTitanFloorType))((::PBYTE)hIl2Cpp + CLASS_2_8BA6322CF88A4100_METHOD_2_10C632178068BDBC_OFFSET))(this, a1);
	}

	::System::Void Method_2_D11D44C2FC8C0B65(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8BA6322CF88A4100_METHOD_2_D11D44C2FC8C0B65_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_61DDB8B626D4C8FE(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8BA6322CF88A4100_METHOD_2_61DDB8B626D4C8FE_OFFSET))(this, a1);
	}

	::System::Void Method_2_5F7CFA81A8A21F07(::RPG::GameCore::LevelGlobalActionDelayChanged* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGlobalActionDelayChanged*))((::PBYTE)hIl2Cpp + CLASS_2_8BA6322CF88A4100_METHOD_2_5F7CFA81A8A21F07_OFFSET))(this, a1);
	}

	::RPG::GameCore::RogueTournTitanFloorType get_TitanFloorType()
	{
		return ((::RPG::GameCore::RogueTournTitanFloorType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8BA6322CF88A4100_GET_TITANFLOORTYPE_OFFSET))(this);
	}

	::System::Void set_TitanFloorType(::RPG::GameCore::RogueTournTitanFloorType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournTitanFloorType))((::PBYTE)hIl2Cpp + CLASS_2_8BA6322CF88A4100_SET_TITANFLOORTYPE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_DisableTitanBless()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8BA6322CF88A4100_GET_DISABLETITANBLESS_OFFSET))(this);
	}

	::System::Void set_DisableTitanBless(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_8BA6322CF88A4100_SET_DISABLETITANBLESS_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8BA6322CF88A4100___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_GenStatistics(::RPG::GameCore::PVEGameStatistics* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + CLASS_2_8BA6322CF88A4100___IFIXBASEPROXY_GENSTATISTICS_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8BA6322CF88A4100_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
