#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::GameCore { class CakeRaceRegionConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_E8E63295DCAF8D1A__CTOR_OFFSET UNITYSDK_OFFSET(0x1C28B0D0)

inline static constexpr unsigned int Class_1_E8E63295DCAF8D1A_TypeDefinitionIndex = 36538;

class Class_1_E8E63295DCAF8D1A : public ::System::Object
{
public:
	::RPG::GameCore::CakeRaceRegionConfig* ENCFIALFHEN; // 0x10
	::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* IALHAGJCLOP; // 0x18
	::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* PMMGBKJIIFN; // 0x20
	::System::Int32 FIELGBACDLG; // 0x28
	::System::Int32 NDKILPMMLHJ; // 0x2C

	::System::Void _ctor(::RPG::GameCore::CakeRaceRegionConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceRegionConfig*))((::PBYTE)hIl2Cpp + CLASS_1_E8E63295DCAF8D1A__CTOR_OFFSET))(this, a1);
	}
};
