#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYoSDKJSON/JSONNode_Enumerator.h"
#include "unitysdk/System/ValueType.h"

namespace MiHoYoSDKJSON { class JSONNode; }
namespace System { class String; }

#define MIHOYOSDKJSON_JSONNODE_VALUEENUMERATOR_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1300)
#define MIHOYOSDKJSON_JSONNODE_VALUEENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1350)
#define MIHOYOSDKJSON_JSONNODE_VALUEENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x29700)
#define MIHOYOSDKJSON_JSONNODE_VALUEENUMERATOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1210)
#define MIHOYOSDKJSON_JSONNODE_VALUEENUMERATOR__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1270)
#define MIHOYOSDKJSON_JSONNODE_VALUEENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x11D0)

namespace MiHoYoSDKJSON
{
	inline static constexpr unsigned int JSONNode_ValueEnumerator_TypeDefinitionIndex = 36826;

	struct alignas(8) JSONNode_ValueEnumerator
	{
		::MiHoYoSDKJSON::JSONNode_Enumerator m_Enumerator; // 0x10

		/*
		::System::Void _ctor(::System::Collections::Generic::List_1_Enumerator<::MiHoYoSDKJSON::JSONNode*> aArrayEnum)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1_Enumerator<::MiHoYoSDKJSON::JSONNode*>))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_VALUEENUMERATOR__CTOR_OFFSET))(this, aArrayEnum);
		}
		*/

		/*
		::System::Void _ctor_1(::System::Collections::Generic::Dictionary_2_Enumerator<::System::String*, ::MiHoYoSDKJSON::JSONNode*> aDictEnum)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2_Enumerator<::System::String*, ::MiHoYoSDKJSON::JSONNode*>))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_VALUEENUMERATOR__CTOR_1_OFFSET))(this, aDictEnum);
		}
		*/

		::System::Void _ctor_2(::MiHoYoSDKJSON::JSONNode_Enumerator aEnumerator)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYoSDKJSON::JSONNode_Enumerator))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_VALUEENUMERATOR__CTOR_2_OFFSET))(this, aEnumerator);
		}

		::MiHoYoSDKJSON::JSONNode* get_Current()
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_VALUEENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_VALUEENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::MiHoYoSDKJSON::JSONNode_ValueEnumerator GetEnumerator()
		{
			return ((::MiHoYoSDKJSON::JSONNode_ValueEnumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE_VALUEENUMERATOR_GETENUMERATOR_OFFSET))(this);
		}
	};
}
