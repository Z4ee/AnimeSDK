#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/ReferencePool_AutoReleaseReferenceObjectDatas.h"
#include "unitysdk/System/Object.h"

namespace RPG
{
	inline static constexpr unsigned int ReferencePool_AutoReleaseReferenceObjectCollector_1_TypeDefinitionIndex = 5627;

	template <typename T>
	class ReferencePool_AutoReleaseReferenceObjectCollector_1 : public ::System::Object
	{
	public:
		static ::RPG::ReferencePool_AutoReleaseReferenceObjectDatas* StaticGet_Data()
		{
			return (::RPG::ReferencePool_AutoReleaseReferenceObjectDatas*)Il2CppClass::FromTypeDefinitionIndex(ReferencePool_AutoReleaseReferenceObjectCollector_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
