#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Codable/JSONNode_Enumerator.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace Codable { class JSONNode; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CODABLE_JSONNODE_LINQENUMERATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A2B3080)
#define CODABLE_JSONNODE_LINQENUMERATOR_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A2B30A0)
#define CODABLE_JSONNODE_LINQENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A2B2F30)
#define CODABLE_JSONNODE_LINQENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1A2B3010)
#define CODABLE_JSONNODE_LINQENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1A2B3150)
#define CODABLE_JSONNODE_LINQENUMERATOR_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A2B31C0)
#define CODABLE_JSONNODE_LINQENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A2B2F90)
#define CODABLE_JSONNODE_LINQENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2B2EC0)

namespace Codable
{
	inline static constexpr unsigned int JSONNode_LinqEnumerator_TypeDefinitionIndex = 34894;

	class JSONNode_LinqEnumerator : public ::System::Object
	{
	public:
		::Codable::JSONNode_Enumerator m_Enumerator; // 0x10
		::Codable::JSONNode* m_Node; // 0x58

		::System::Void _ctor(::Codable::JSONNode* aNode)
		{
			return ((::System::Void(*)(::PVOID, ::Codable::JSONNode*))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_LINQENUMERATOR__CTOR_OFFSET))(this, aNode);
		}

		::System::Collections::Generic::KeyValuePair_2<::System::String*, ::Codable::JSONNode*> get_Current()
		{
			return ((::System::Collections::Generic::KeyValuePair_2<::System::String*, ::Codable::JSONNode*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_LINQENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_LINQENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_LINQENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_LINQENUMERATOR_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::Codable::JSONNode*>>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::Codable::JSONNode*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_LINQENUMERATOR_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_LINQENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONNODE_LINQENUMERATOR_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
