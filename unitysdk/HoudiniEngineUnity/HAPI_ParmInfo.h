#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_ChoiceListType.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_NodeFlags.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_NodeType.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_ParmType.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_Permissions.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_PrmScriptType.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_RampType.h"
#include "unitysdk/System/ValueType.h"

#define HOUDINIENGINEUNITY_HAPI_PARMINFO_ISFLOAT_OFFSET UNITYSDK_OFFSET(0x2D4A950)
#define HOUDINIENGINEUNITY_HAPI_PARMINFO_ISINT_OFFSET UNITYSDK_OFFSET(0x2D4A930)
#define HOUDINIENGINEUNITY_HAPI_PARMINFO_ISNODE_OFFSET UNITYSDK_OFFSET(0x2D4A9A0)
#define HOUDINIENGINEUNITY_HAPI_PARMINFO_ISNONVALUE_OFFSET UNITYSDK_OFFSET(0x2D4A9B0)
#define HOUDINIENGINEUNITY_HAPI_PARMINFO_ISPATH_OFFSET UNITYSDK_OFFSET(0x2D4A980)
#define HOUDINIENGINEUNITY_HAPI_PARMINFO_ISSTRING_OFFSET UNITYSDK_OFFSET(0x2D4A960)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_ParmInfo_TypeDefinitionIndex = 37535;

	struct alignas(4) HAPI_ParmInfo
	{
		::System::Int32 id; // 0x10
		::System::Int32 parentId; // 0x14
		::System::Int32 childIndex; // 0x18
		::HoudiniEngineUnity::HAPI_ParmType type; // 0x1C
		::HoudiniEngineUnity::HAPI_PrmScriptType scriptType; // 0x20
		::System::Int32 typeInfoSH; // 0x24
		::HoudiniEngineUnity::HAPI_Permissions permissions; // 0x28
		::System::Int32 tagCount; // 0x2C
		::System::Int32 size; // 0x30
		::HoudiniEngineUnity::HAPI_ChoiceListType choiceListType; // 0x34
		::System::Int32 choiceCount; // 0x38
		::System::Int32 nameSH; // 0x3C
		::System::Int32 labelSH; // 0x40
		::System::Int32 templateNameSH; // 0x44
		::System::Int32 helpSH; // 0x48
		::System::Boolean hasMin; // 0x4C
		::System::Boolean hasMax; // 0x4D
		::System::Boolean hasUIMin; // 0x4E
		::System::Boolean hasUIMax; // 0x4F
		::System::Single min; // 0x50
		::System::Single max; // 0x54
		::System::Single UIMin; // 0x58
		::System::Single UIMax; // 0x5C
		::System::Boolean invisible; // 0x60
		::System::Boolean disabled; // 0x61
		::System::Boolean spare; // 0x62
		::System::Boolean joinNext; // 0x63
		::System::Boolean labelNone; // 0x64
		::System::Int32 intValuesIndex; // 0x68
		::System::Int32 floatValuesIndex; // 0x6C
		::System::Int32 stringValuesIndex; // 0x70
		::System::Int32 choiceIndex; // 0x74
		::HoudiniEngineUnity::HAPI_NodeType inputNodeType; // 0x78
		::HoudiniEngineUnity::HAPI_NodeFlags inputNodeFlag; // 0x7C
		::System::Boolean isChildOfMultiParm; // 0x80
		::System::Int32 instanceNum; // 0x84
		::System::Int32 instanceLength; // 0x88
		::System::Int32 instanceCount; // 0x8C
		::System::Int32 instanceStartOffset; // 0x90
		::HoudiniEngineUnity::HAPI_RampType rampType; // 0x94
		::System::Int32 visibilityConditionSH; // 0x98
		::System::Int32 disabledConditionSH; // 0x9C
		::System::Boolean useMenuItemTokenAsValue; // 0xA0

		::System::Boolean isInt()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HAPI_PARMINFO_ISINT_OFFSET))(this);
		}

		::System::Boolean isFloat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HAPI_PARMINFO_ISFLOAT_OFFSET))(this);
		}

		::System::Boolean isString()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HAPI_PARMINFO_ISSTRING_OFFSET))(this);
		}

		::System::Boolean isPath()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HAPI_PARMINFO_ISPATH_OFFSET))(this);
		}

		::System::Boolean isNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HAPI_PARMINFO_ISNODE_OFFSET))(this);
		}

		::System::Boolean isNonValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HAPI_PARMINFO_ISNONVALUE_OFFSET))(this);
		}
	};
}
