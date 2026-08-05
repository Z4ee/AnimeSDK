#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Codable/JSONNode_Enumerator.h"
#include "unitysdk/System/ValueType.h"

namespace Codable { class JSONNode; }
namespace System { class String; }

#define CODABLE_JSONNODE_VALUEENUMERATOR_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x3E7EB0)
#define CODABLE_JSONNODE_VALUEENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x984020)
#define CODABLE_JSONNODE_VALUEENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9844A0)
#define CODABLE_JSONNODE_VALUEENUMERATOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x983FC0)
#define CODABLE_JSONNODE_VALUEENUMERATOR__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3E7950)
#define CODABLE_JSONNODE_VALUEENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x983F80)

namespace Codable
{
	inline static constexpr unsigned int JSONNode_ValueEnumerator_TypeDefinitionIndex = 37114;

	struct alignas(8) JSONNode_ValueEnumerator
	{
		::Codable::JSONNode_Enumerator m_Enumerator; // 0x10

		/*
		::System::Void _ctor(::System::Collections::Generic::List_1_Enumerator<::Codable::JSONNode*> aArrayEnum)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1_Enumerator<::Codable::JSONNode*>))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_VALUEENUMERATOR__CTOR_OFFSET))(this, aArrayEnum);
		}
		*/

		/*
		::System::Void _ctor_1(::System::Collections::Generic::Dictionary_2_Enumerator<::System::String*, ::Codable::JSONNode*> aDictEnum)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2_Enumerator<::System::String*, ::Codable::JSONNode*>))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_VALUEENUMERATOR__CTOR_1_OFFSET))(this, aDictEnum);
		}
		*/

		::System::Void _ctor_2(::Codable::JSONNode_Enumerator aEnumerator)
		{
			return ((::System::Void(*)(::PVOID, ::Codable::JSONNode_Enumerator))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_VALUEENUMERATOR__CTOR_2_OFFSET))(this, aEnumerator);
		}

		::Codable::JSONNode* get_Current()
		{
			return ((::Codable::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_VALUEENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_VALUEENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::Codable::JSONNode_ValueEnumerator GetEnumerator()
		{
			return ((::Codable::JSONNode_ValueEnumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_VALUEENUMERATOR_GETENUMERATOR_OFFSET))(this);
		}
	};
}
