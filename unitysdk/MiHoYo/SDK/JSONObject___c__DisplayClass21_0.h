#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace System { class String; }

#define MIHOYO_SDK_JSONOBJECT___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1834D500)
#define MIHOYO_SDK_JSONOBJECT___C__DISPLAYCLASS21_0__REMOVE_B__0_OFFSET UNITYSDK_OFFSET(0x1834E0B0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int JSONObject___c__DisplayClass21_0_TypeDefinitionIndex = 8077;

	class JSONObject___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::JSONNode* aNode; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONOBJECT___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _Remove_b__0(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MiHoYo::SDK::JSONNode*> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MiHoYo::SDK::JSONNode*>))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONOBJECT___C__DISPLAYCLASS21_0__REMOVE_B__0_OFFSET))(this, a1);
		}
	};
}
