#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SyncAnimatorStateBehaviour_SyncBlendTreeParamInfo.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int SyncAnimatorStateBehaviour_SyncBlendTreeParams_TypeDefinitionIndex = 69166;

	struct alignas(8) SyncAnimatorStateBehaviour_SyncBlendTreeParams
	{
		::System::String* StateFullPathName; // 0x10
		::System::Int32 StateFullPathHash; // 0x18
		::Il2CppArray<::MoleMole::SyncAnimatorStateBehaviour_SyncBlendTreeParamInfo>* ParamInfos; // 0x20
	};
}
