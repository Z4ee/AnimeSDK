#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/JSONNode_Enumerator.h"
#include "unitysdk/System/ValueType.h"

namespace HoudiniEngineUnity { class JSONNode; }
namespace System { class String; }

#define HOUDINIENGINEUNITY_JSONNODE_KEYENUMERATOR_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x15F30)
#define HOUDINIENGINEUNITY_JSONNODE_KEYENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x3B6AA70)
#define HOUDINIENGINEUNITY_JSONNODE_KEYENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3C92BD0)
#define HOUDINIENGINEUNITY_JSONNODE_KEYENUMERATOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3B6AA10)
#define HOUDINIENGINEUNITY_JSONNODE_KEYENUMERATOR__CTOR_2_OFFSET UNITYSDK_OFFSET(0x15C80)
#define HOUDINIENGINEUNITY_JSONNODE_KEYENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x3B6A9D0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int JSONNode_KeyEnumerator_TypeDefinitionIndex = 39375;

	struct alignas(8) JSONNode_KeyEnumerator
	{
		::HoudiniEngineUnity::JSONNode_Enumerator m_Enumerator; // 0x10

		/*
		::System::Void _ctor(::System::Collections::Generic::List_1_Enumerator<::HoudiniEngineUnity::JSONNode*> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1_Enumerator<::HoudiniEngineUnity::JSONNode*>))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_KEYENUMERATOR__CTOR_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Void _ctor_1(::System::Collections::Generic::Dictionary_2_Enumerator<::System::String*, ::HoudiniEngineUnity::JSONNode*> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2_Enumerator<::System::String*, ::HoudiniEngineUnity::JSONNode*>))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_KEYENUMERATOR__CTOR_1_OFFSET))(this, a1);
		}
		*/

		::System::Void _ctor_2(::HoudiniEngineUnity::JSONNode_Enumerator a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::JSONNode_Enumerator))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_KEYENUMERATOR__CTOR_2_OFFSET))(this, a1);
		}

		::System::String* get_Current()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_KEYENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_KEYENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::HoudiniEngineUnity::JSONNode_KeyEnumerator GetEnumerator()
		{
			return ((::HoudiniEngineUnity::JSONNode_KeyEnumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_KEYENUMERATOR_GETENUMERATOR_OFFSET))(this);
		}
	};
}
