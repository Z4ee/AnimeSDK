#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimEnterType.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimExitType.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimStatisticPlayerActionType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_433F704C0E180372;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolList_1; }
namespace System { class String; }

#define CLASS_1_0297570DE15B35AE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C631330)
#define CLASS_1_0297570DE15B35AE_METHOD_1_8FD10FA6EE67321A_OFFSET UNITYSDK_OFFSET(0x1C630DF0)
#define CLASS_1_0297570DE15B35AE_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1C6316F0)
#define CLASS_1_0297570DE15B35AE_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1C6318E0)
#define CLASS_1_0297570DE15B35AE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C631920)

inline static constexpr unsigned int Class_1_0297570DE15B35AE_TypeDefinitionIndex = 41924;

class Class_1_0297570DE15B35AE : public ::System::Object
{
public:
	::RPG::PoolList_1<::System::UInt32>* HNOMGGONLEI; // 0x10
	::RPG::PoolList_1<::System::UInt32>* KCIKHPPHHOC; // 0x18
	::System::String* PNKPNLMLHPD; // 0x20
	::RPG::PoolDictionary_2<::System::UInt32, ::RPG::PoolDictionary_2<::System::UInt32, ::System::UInt32>*>* OOLFNOGDCAB; // 0x28
	::RPG::PoolDictionary_2<::System::UInt32, ::Class_1_433F704C0E180372*>* FOGPAKBNFLD; // 0x30
	::RPG::PoolDictionary_2<::System::UInt32, ::RPG::PoolDictionary_2<::System::UInt32, ::System::UInt32>*>* HNOEILDODGC; // 0x38
	::System::String* JCLIFKACIJD; // 0x40
	::RPG::PoolDictionary_2<::System::ValueTuple_3<::System::UInt32, ::System::UInt32, ::System::UInt32>, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* IMOFMAEHGPM; // 0x48
	::System::String* LJKKLBCOHKO; // 0x50
	::RPG::PoolDictionary_2<::RPG::Client::LittleGame::FiveDim::FiveDimStatisticPlayerActionType, ::System::UInt32>* EDMKJDNECNE; // 0x58
	::RPG::PoolList_1<::System::UInt32>* IKFKEDPGCOD; // 0x60
	::System::UInt32 CMNJHDMIGND; // 0x68
	::System::UInt32 LLBAPECJJLE; // 0x6C
	::System::UInt32 MOHHIEHPODI; // 0x70
	::System::UInt32 GDLKFAIBDCJ; // 0x74
	::RPG::Client::LittleGame::FiveDim::FiveDimEnterType EEJAOGHGIOJ; // 0x78
	::System::UInt32 PEMECOHNJOD; // 0x7C
	::System::UInt32 ALMLPGLFABD; // 0x80
	::System::UInt32 GFJHOJHILEK; // 0x84
	::RPG::Client::LittleGame::FiveDim::FiveDimExitType BIIHMECEPPO; // 0x88
	::System::Single LIMLJNAHOKJ; // 0x8C
	::System::UInt32 FIBKKAIOABN; // 0x90
	::System::UInt32 KJNBNAKELOM; // 0x94
	::System::UInt32 OKJPABKIAGI; // 0x98
	::System::UInt32 NGBAKIGBBHP; // 0x9C
	::System::Single BFPKIMNFGCP; // 0xA0
	::System::UInt32 GFMHNEBPKAH; // 0xA4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0297570DE15B35AE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8FD10FA6EE67321A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0297570DE15B35AE_METHOD_1_8FD10FA6EE67321A_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0297570DE15B35AE_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0297570DE15B35AE_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0297570DE15B35AE_ONRECYCLE_OFFSET))(this);
	}
};
