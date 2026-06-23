#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsComponentMetaInfo_TypeDefinitionIndex = 37337;

	struct alignas(8) EcsComponentMetaInfo
	{
		::System::Boolean isAsync; // 0x10
		::System::Object* EcsComponentListGenerator; // 0x18
	};
}
