#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0A3B9FD0FE703FDC.h"
#include "unitysdk/RPG/GameCore/FiveDimOrthoDirection.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG { template <typename T> class PoolList_1; }

#define CLASS_2_7385541CB3986347_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C57F4F0)
#define CLASS_2_7385541CB3986347_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1C57F390)
#define CLASS_2_7385541CB3986347__CTOR_OFFSET UNITYSDK_OFFSET(0x1C57F5C0)

inline static constexpr unsigned int Class_2_7385541CB3986347_TypeDefinitionIndex = 41893;

class Class_2_7385541CB3986347 : public ::Class_1_0A3B9FD0FE703FDC
{
public:
	::RPG::PoolList_1<::System::Int32>* EDJGFNAPPLB; // 0x338
	::RPG::PoolList_1<::System::Int32>* MBALIALIHIB; // 0x340
	::System::Int32 LFIAOELGHNA; // 0x348
	::System::Single PHEKBOBOFFJ; // 0x34C
	::RPG::GameCore::FiveDimOrthoDirection LJPIOIHLLFB; // 0x350
	::System::Int32 NFFJBAMFFDF; // 0x354
	::System::Boolean PIKFHCABDAP; // 0x358
	::System::Int32 INFDCEBMBIK; // 0x35C
	::System::Boolean FPDAKCGPAOF; // 0x360
	::System::Boolean CPILAEBAJFH; // 0x361
	::System::Boolean NBKDDFNGGBP; // 0x362
	::System::Boolean PIADDOPBIKC; // 0x363
	::System::Int32 PKIMFHEAFMI; // 0x364
	::System::Int32 LFNKIKGAGIE; // 0x368
	::UnityEngine::Vector3 PKJJCOPBCOE; // 0x36C
	::System::Single JJFKOIINBFM; // 0x378
	::UnityEngine::Vector3 EBJFFMDHGCN; // 0x37C
	::System::Int32 OGLLMKHKMCK; // 0x388
	::System::Int32 OPEMCAMNMNJ; // 0x38C

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
