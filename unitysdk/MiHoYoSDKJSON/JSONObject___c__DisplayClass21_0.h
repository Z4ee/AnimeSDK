#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace MiHoYoSDKJSON { class JSONNode; }
namespace System { class String; }

#define MIHOYOSDKJSON_JSONOBJECT___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD5A030)
#define MIHOYOSDKJSON_JSONOBJECT___C__DISPLAYCLASS21_0__REMOVE_B__0_OFFSET UNITYSDK_OFFSET(0x1CD5ABD0)

namespace MiHoYoSDKJSON
{
	inline static constexpr unsigned int JSONObject___c__DisplayClass21_0_TypeDefinitionIndex = 46506;

	class JSONObject___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::MiHoYoSDKJSON::JSONNode* aNode; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONOBJECT___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _Remove_b__0(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MiHoYoSDKJSON::JSONNode*> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MiHoYoSDKJSON::JSONNode*>))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONOBJECT___C__DISPLAYCLASS21_0__REMOVE_B__0_OFFSET))(this, a1);
		}
	};
}
