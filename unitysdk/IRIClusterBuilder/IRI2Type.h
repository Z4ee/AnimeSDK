#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }

#define IRICLUSTERBUILDER_IRI2TYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x18E65040)

namespace IRIClusterBuilder
{
	inline static constexpr unsigned int IRI2Type_TypeDefinitionIndex = 48198;

	class IRI2Type : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* MeshName; // 0x18
		::System::String* MaterialPath; // 0x20
		::System::Int32 TypeID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_IRI2TYPE__CTOR_OFFSET))(this);
		}
	};
}
