#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace IRIClusterBuilder { class IRIMaterialParams_MaterialData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IRICLUSTERBUILDER_IRIMATERIALPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x14235860)

namespace IRIClusterBuilder
{
	inline static constexpr unsigned int IRIMaterialParams_TypeDefinitionIndex = 45061;

	class IRIMaterialParams : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::IRIClusterBuilder::IRIMaterialParams_MaterialData*>* Materials; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_IRIMATERIALPARAMS__CTOR_OFFSET))(this);
		}
	};
}
