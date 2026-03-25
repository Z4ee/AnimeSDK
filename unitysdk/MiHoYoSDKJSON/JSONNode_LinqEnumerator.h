#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYoSDKJSON/JSONNode_Enumerator.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace MiHoYoSDKJSON { class JSONNode; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define MIHOYOSDKJSON_JSONNODE_LINQENUMERATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x85B10B0)
#define MIHOYOSDKJSON_JSONNODE_LINQENUMERATOR_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x85B10D0)
#define MIHOYOSDKJSON_JSONNODE_LINQENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x85B0F40)
#define MIHOYOSDKJSON_JSONNODE_LINQENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x85B1040)
#define MIHOYOSDKJSON_JSONNODE_LINQENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x85B1120)
#define MIHOYOSDKJSON_JSONNODE_LINQENUMERATOR_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x85B1240)
#define MIHOYOSDKJSON_JSONNODE_LINQENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x85B0FA0)
#define MIHOYOSDKJSON_JSONNODE_LINQENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x85AED40)

namespace MiHoYoSDKJSON
{
	inline static constexpr unsigned int JSONNode_LinqEnumerator_TypeDefinitionIndex = 36828;

	class JSONNode_LinqEnumerator : public ::System::Object
	{
	public:
		::MiHoYoSDKJSON::JSONNode_Enumerator m_Enumerator; // 0x10
		::MiHoYoSDKJSON::JSONNode* m_Node; // 0x58

		::System::Void _ctor(::MiHoYoSDKJSON::JSONNode* aNode)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYoSDKJSON::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_LINQENUMERATOR__CTOR_OFFSET))(this, aNode);
		}

		::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MiHoYoSDKJSON::JSONNode*> get_Current()
		{
			return ((::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MiHoYoSDKJSON::JSONNode*>(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_LINQENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_LINQENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_LINQENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_LINQENUMERATOR_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MiHoYoSDKJSON::JSONNode*>>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MiHoYoSDKJSON::JSONNode*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_LINQENUMERATOR_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_LINQENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_LINQENUMERATOR_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
