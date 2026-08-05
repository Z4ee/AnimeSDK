#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DD1A5F02CCB29BE7.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGDYNAMICACCESSORYSKINNINGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1625A560)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynamicAccessorySkinningData_TypeDefinitionIndex = 74643;

	class ConfigDynamicAccessorySkinningData : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* BoneAttachpoints; // 0x10
		::System::String* DebugName; // 0x18
		::System::String* FollowAttachPoint; // 0x20
		::System::String* RootBoneAttachPoint; // 0x28
		::Enum_3_DD1A5F02CCB29BE7 BindMode; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICACCESSORYSKINNINGDATA__CTOR_OFFSET))(this);
		}
	};
}
