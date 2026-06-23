#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_3_6EF456A21AE85EEC_182;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_RABGACHAREWARDCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12651240)

namespace MoleMole
{
	inline static constexpr unsigned int RABGachaRewardContext_TypeDefinitionIndex = 46685;

	class RABGachaRewardContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_3_6EF456A21AE85EEC_182*>* RewardItemList; // 0x28
		::System::Int32 costItemId; // 0x30
		::System::Int32 poolId; // 0x34
		::System::Int32 costItemNum; // 0x38

		::System::Void _ctor(::System::Int32 poolId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_RABGACHAREWARDCONTEXT__CTOR_OFFSET))(this, poolId);
		}
	};
}
