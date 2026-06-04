#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Codable/JSONNode_Enumerator_Type.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_Enumerator.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/ValueType.h"

namespace Codable { class JSONNode; }
namespace System { class String; }

#define CODABLE_JSONNODE_ENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x10F0)
#define CODABLE_JSONNODE_ENUMERATOR_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1030)
#define CODABLE_JSONNODE_ENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1140)
#define CODABLE_JSONNODE_ENUMERATOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1090)
#define CODABLE_JSONNODE_ENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1040)

namespace Codable
{
	inline static constexpr unsigned int JSONNode_Enumerator_TypeDefinitionIndex = 43474;

	struct alignas(8) JSONNode_Enumerator
	{
		::Codable::JSONNode_Enumerator_Type type; // 0x10
		::System::Collections::Generic::Dictionary_2_Enumerator<::System::String*, ::Codable::JSONNode*> m_Object; // 0x18
		::System::Collections::Generic::List_1_Enumerator<::Codable::JSONNode*> m_Array; // 0x40

		::System::Void _ctor(::System::Collections::Generic::List_1_Enumerator<::Codable::JSONNode*> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1_Enumerator<::Codable::JSONNode*>))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_ENUMERATOR__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Collections::Generic::Dictionary_2_Enumerator<::System::String*, ::Codable::JSONNode*> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2_Enumerator<::System::String*, ::Codable::JSONNode*>))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_ENUMERATOR__CTOR_1_OFFSET))(this, a1);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_ENUMERATOR_GET_ISVALID_OFFSET))(this);
		}

		/*
		::System::Collections::Generic::KeyValuePair_2<::System::String*, ::Codable::JSONNode*> get_Current()
		{
			return ((::System::Collections::Generic::KeyValuePair_2<::System::String*, ::Codable::JSONNode*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_ENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
		*/

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_ENUMERATOR_MOVENEXT_OFFSET))(this);
		}
	};
}
