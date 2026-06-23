#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define SIMPLEJSON_JSONCLASS___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF15F80)
#define SIMPLEJSON_JSONCLASS___C__DISPLAYCLASS13_0__REMOVE_B__0_OFFSET UNITYSDK_OFFSET(0x1DF15F90)

namespace SimpleJSON
{
	inline static constexpr unsigned int JSONClass___c__DisplayClass13_0_TypeDefinitionIndex = 8335;

	class JSONClass___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::SimpleJSON::JSONNode* aNode; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _Remove_b__0(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::SimpleJSON::JSONNode*> k)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::SimpleJSON::JSONNode*>))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS___C__DISPLAYCLASS13_0__REMOVE_B__0_OFFSET))(this, k);
		}
	};
}
