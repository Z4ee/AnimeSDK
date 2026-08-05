#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYoSDKJSON/JSONNode_Enumerator.h"
#include "unitysdk/System/ValueType.h"

namespace MiHoYoSDKJSON { class JSONNode; }
namespace System { class String; }

#define MIHOYOSDKJSON_JSONNODE_KEYENUMERATOR_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x3E7EB0)
#define MIHOYOSDKJSON_JSONNODE_KEYENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9A6380)
#define MIHOYOSDKJSON_JSONNODE_KEYENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x99BFE0)
#define MIHOYOSDKJSON_JSONNODE_KEYENUMERATOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x983FC0)
#define MIHOYOSDKJSON_JSONNODE_KEYENUMERATOR__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3E7950)
#define MIHOYOSDKJSON_JSONNODE_KEYENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x983F80)

namespace MiHoYoSDKJSON
{
	inline static constexpr unsigned int JSONNode_KeyEnumerator_TypeDefinitionIndex = 37094;

	struct alignas(8) JSONNode_KeyEnumerator
	{
		::MiHoYoSDKJSON::JSONNode_Enumerator m_Enumerator; // 0x10

		/*
		::System::Void _ctor(::System::Collections::Generic::List_1_Enumerator<::MiHoYoSDKJSON::JSONNode*> aArrayEnum)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1_Enumerator<::MiHoYoSDKJSON::JSONNode*>))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_KEYENUMERATOR__CTOR_OFFSET))(this, aArrayEnum);
		}
		*/

		/*
		::System::Void _ctor_1(::System::Collections::Generic::Dictionary_2_Enumerator<::System::String*, ::MiHoYoSDKJSON::JSONNode*> aDictEnum)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2_Enumerator<::System::String*, ::MiHoYoSDKJSON::JSONNode*>))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_KEYENUMERATOR__CTOR_1_OFFSET))(this, aDictEnum);
		}
		*/

		::System::Void _ctor_2(::MiHoYoSDKJSON::JSONNode_Enumerator aEnumerator)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYoSDKJSON::JSONNode_Enumerator))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_KEYENUMERATOR__CTOR_2_OFFSET))(this, aEnumerator);
		}

		::System::String* get_Current()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_KEYENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_KEYENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::MiHoYoSDKJSON::JSONNode_KeyEnumerator GetEnumerator()
		{
			return ((::MiHoYoSDKJSON::JSONNode_KeyEnumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_KEYENUMERATOR_GETENUMERATOR_OFFSET))(this);
		}
	};
}
