#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_SerializableDictionary_2.h"

namespace HoudiniEngineUnity { class HEU_OutputAttribute; }
namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_OUTPUTATTRIBUTEDICTIONARY__CTOR_OFFSET UNITYSDK_OFFSET(0x17F28180)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_OutputAttributeDictionary_TypeDefinitionIndex = 37465;

	class HEU_OutputAttributeDictionary : public ::HoudiniEngineUnity::HEU_SerializableDictionary_2<::System::String*, ::HoudiniEngineUnity::HEU_OutputAttribute*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OUTPUTATTRIBUTEDICTIONARY__CTOR_OFFSET))(this);
		}
	};
}
