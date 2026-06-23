#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTree.h"
#include "unitysdk/StateTreeCore/StateTreeDataView.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataDesc.h"
#include "unitysdk/StateTreeCore/StateTreeSchema.h"
#include "unitysdk/UnrealTypes/NativeListView_1.h"
#include "unitysdk/UnrealTypes/RawPtr_1.h"
#include "unitysdk/UnrealTypes/ReadOnlyNativeListView_1.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class Struct; }

#define NPCCROWD_ABILITY_CROWDSCHEMA_ISEXTERNALITEMALLOWED_OFFSET UNITYSDK_OFFSET(0xF99CEC0)
#define NPCCROWD_ABILITY_CROWDSCHEMA_ISSTRUCTALLOWED_OFFSET UNITYSDK_OFFSET(0xF99CDA0)
#define NPCCROWD_ABILITY_CROWDSCHEMA__CTOR_OFFSET UNITYSDK_OFFSET(0xF99CF80)
#define NPCCROWD_ABILITY_CROWDSCHEMA___BASE_ISEXTERNALITEMALLOWED_OFFSET UNITYSDK_OFFSET(0xF99D000)
#define NPCCROWD_ABILITY_CROWDSCHEMA___BASE_ISSTRUCTALLOWED_OFFSET UNITYSDK_OFFSET(0xF99D010)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int CrowdSchema_TypeDefinitionIndex = 60146;

	class CrowdSchema : public ::StateTreeCore::StateTreeSchema
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSCHEMA__CTOR_OFFSET))(this);
		}

		::System::Boolean IsStructAllowed(::UnrealTypes::ScriptStruct* scriptStruct)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::ScriptStruct*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSCHEMA_ISSTRUCTALLOWED_OFFSET))(this, scriptStruct);
		}

		::System::Boolean IsExternalItemAllowed(::UnrealTypes::Struct* struct_)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::Struct*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSCHEMA_ISEXTERNALITEMALLOWED_OFFSET))(this, struct_);
		}

		::System::Boolean __base_IsExternalItemAllowed(::UnrealTypes::Struct* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::Struct*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSCHEMA___BASE_ISEXTERNALITEMALLOWED_OFFSET))(this, P0);
		}

		::System::Boolean __base_IsStructAllowed(::UnrealTypes::ScriptStruct* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::ScriptStruct*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSCHEMA___BASE_ISSTRUCTALLOWED_OFFSET))(this, P0);
		}
	};
}
