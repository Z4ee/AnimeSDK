#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/JSONNode_Enumerator.h"
#include "unitysdk/System/ValueType.h"

namespace HoudiniEngineUnity { class JSONNode; }
namespace System { class String; }

#define HOUDINIENGINEUNITY_JSONNODE_VALUEENUMERATOR_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1300)
#define HOUDINIENGINEUNITY_JSONNODE_VALUEENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1350)
#define HOUDINIENGINEUNITY_JSONNODE_VALUEENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x274D0)
#define HOUDINIENGINEUNITY_JSONNODE_VALUEENUMERATOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1210)
#define HOUDINIENGINEUNITY_JSONNODE_VALUEENUMERATOR__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1270)
#define HOUDINIENGINEUNITY_JSONNODE_VALUEENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x11D0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int JSONNode_ValueEnumerator_TypeDefinitionIndex = 43720;

	struct alignas(8) JSONNode_ValueEnumerator
	{
		::HoudiniEngineUnity::JSONNode_Enumerator m_Enumerator; // 0x10

		/*
		::System::Void _ctor(::System::Collections::Generic::List_1_Enumerator<::HoudiniEngineUnity::JSONNode*> aArrayEnum)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1_Enumerator<::HoudiniEngineUnity::JSONNode*>))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_VALUEENUMERATOR__CTOR_OFFSET))(this, aArrayEnum);
		}
		*/

		/*
		::System::Void _ctor_1(::System::Collections::Generic::Dictionary_2_Enumerator<::System::String*, ::HoudiniEngineUnity::JSONNode*> aDictEnum)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2_Enumerator<::System::String*, ::HoudiniEngineUnity::JSONNode*>))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_VALUEENUMERATOR__CTOR_1_OFFSET))(this, aDictEnum);
		}
		*/

		::System::Void _ctor_2(::HoudiniEngineUnity::JSONNode_Enumerator aEnumerator)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::JSONNode_Enumerator))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_VALUEENUMERATOR__CTOR_2_OFFSET))(this, aEnumerator);
		}

		::HoudiniEngineUnity::JSONNode* get_Current()
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_VALUEENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_VALUEENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::HoudiniEngineUnity::JSONNode_ValueEnumerator GetEnumerator()
		{
			return ((::HoudiniEngineUnity::JSONNode_ValueEnumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_VALUEENUMERATOR_GETENUMERATOR_OFFSET))(this);
		}
	};
}
