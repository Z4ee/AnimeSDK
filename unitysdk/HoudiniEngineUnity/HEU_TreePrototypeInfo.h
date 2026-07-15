#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_TREEPROTOTYPEINFO_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x197DE440)
#define HOUDINIENGINEUNITY_HEU_TREEPROTOTYPEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x197D07D0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_TreePrototypeInfo_TypeDefinitionIndex = 38616;

	class HEU_TreePrototypeInfo : public ::System::Object
	{
	public:
		::System::String* _prefabPath; // 0x10
		::System::Single _bendfactor; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TREEPROTOTYPEINFO__CTOR_OFFSET))(this);
		}

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::HEU_TreePrototypeInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_TreePrototypeInfo*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TREEPROTOTYPEINFO_ISEQUIVALENTTO_OFFSET))(this, a1);
		}
	};
}
