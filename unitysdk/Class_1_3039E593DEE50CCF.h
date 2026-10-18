#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimDanmuTrackAlignment.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class FiveDimDanmuTrack; }
namespace System { class String; }

#define CLASS_1_3039E593DEE50CCF_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C91E8A0)
#define CLASS_1_3039E593DEE50CCF__CTOR_OFFSET UNITYSDK_OFFSET(0x1C91E920)

inline static constexpr unsigned int Class_1_3039E593DEE50CCF_TypeDefinitionIndex = 43404;

class Class_1_3039E593DEE50CCF : public ::System::Object
{
public:
	::System::String* OLMLAALKCGN; // 0x10
	::RPG::PoolList_1<::RPG::GameCore::FiveDimDanmuTrack*>* EMLLMHAAIJE; // 0x18
	::System::Int32 HBFCDPHPOFG; // 0x20
	::System::UInt32 NOPEABFIFKN; // 0x24
	::System::Boolean PHEFCCMCFBJ; // 0x28
	::System::Boolean PKOHBMPDBCC; // 0x29
	::System::Single ACPKBICMMEP; // 0x2C
	::RPG::GameCore::FiveDimDanmuTrackAlignment PJLADNNBPJD; // 0x30
	::System::Int32 LKHBBOJONMK; // 0x34
	::System::Single CBNMAGPNPAI; // 0x38
	::System::Single KCKNBCBIDPI; // 0x3C
	::System::Single MODFAGBLNLJ; // 0x40
	::System::Single GCJMFBKLGHI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3039E593DEE50CCF__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3039E593DEE50CCF_CLEAR_OFFSET))(this);
	}
};
