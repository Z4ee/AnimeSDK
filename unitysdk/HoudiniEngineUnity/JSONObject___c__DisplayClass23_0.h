#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class JSONNode; }
namespace System { class String; }

#define HOUDINIENGINEUNITY_JSONOBJECT___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4ABE90)
#define HOUDINIENGINEUNITY_JSONOBJECT___C__DISPLAYCLASS23_0__REMOVE_B__0_OFFSET UNITYSDK_OFFSET(0x1B4AC970)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int JSONObject___c__DisplayClass23_0_TypeDefinitionIndex = 39382;

	class JSONObject___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::HoudiniEngineUnity::JSONNode* aNode; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONOBJECT___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _Remove_b__0(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::HoudiniEngineUnity::JSONNode*> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::HoudiniEngineUnity::JSONNode*>))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONOBJECT___C__DISPLAYCLASS23_0__REMOVE_B__0_OFFSET))(this, a1);
		}
	};
}
