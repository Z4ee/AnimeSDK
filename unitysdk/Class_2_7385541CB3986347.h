#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0A3B9FD0FE703FDC.h"
#include "unitysdk/RPG/GameCore/FiveDimOrthoDirection.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG { template <typename T> class PoolList_1; }

#define CLASS_2_7385541CB3986347_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CAC5830)
#define CLASS_2_7385541CB3986347_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1CAC56D0)
#define CLASS_2_7385541CB3986347__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAC5920)

inline static constexpr unsigned int Class_2_7385541CB3986347_TypeDefinitionIndex = 43535;

class Class_2_7385541CB3986347 : public ::Class_1_0A3B9FD0FE703FDC
{
public:
	::RPG::PoolList_1<::System::Int32>* MBALIALIHIB; // 0x338
	::RPG::PoolList_1<::System::Int32>* EDJGFNAPPLB; // 0x340
	::System::Int32 OPEMCAMNMNJ; // 0x348
	::System::Boolean PIADDOPBIKC; // 0x34C
	::System::Boolean PIKFHCABDAP; // 0x34D
	::System::Boolean CPILAEBAJFH; // 0x34E
	::System::Int32 OGLLMKHKMCK; // 0x350
	::System::Int32 LFIAOELGHNA; // 0x354
	::System::Boolean FPDAKCGPAOF; // 0x358
	::System::Boolean NBKDDFNGGBP; // 0x359
	::UnityEngine::Vector3 PKJJCOPBCOE; // 0x35C
	::System::Int32 INFDCEBMBIK; // 0x368
	::UnityEngine::Vector3 EBJFFMDHGCN; // 0x36C
	::System::Int32 NFFJBAMFFDF; // 0x378
	::System::Int32 PKIMFHEAFMI; // 0x37C
	::RPG::GameCore::FiveDimOrthoDirection LJPIOIHLLFB; // 0x380
	::System::Single JJFKOIINBFM; // 0x384
	::System::Int32 LFNKIKGAGIE; // 0x388
	::System::Single PHEKBOBOFFJ; // 0x38C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7385541CB3986347__CTOR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7385541CB3986347_ONALLOC_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7385541CB3986347_CLEAR_OFFSET))(this);
	}
};
