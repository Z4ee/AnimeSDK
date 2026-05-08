#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace Codable { class JSONNode; }
namespace System { class String; }

#define CODABLE_JSONOBJECT___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4E1EA0)
#define CODABLE_JSONOBJECT___C__DISPLAYCLASS21_0__REMOVE_B__0_OFFSET UNITYSDK_OFFSET(0x1A4E1EB0)

namespace Codable
{
	inline static constexpr unsigned int JSONObject___c__DisplayClass21_0_TypeDefinitionIndex = 34900;

	class JSONObject___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::Codable::JSONNode* aNode; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONOBJECT___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _Remove_b__0(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::Codable::JSONNode*> k)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::Codable::JSONNode*>))((::PBYTE)hIl2Cpp + CODABLE_JSONOBJECT___C__DISPLAYCLASS21_0__REMOVE_B__0_OFFSET))(this, k);
		}
	};
}
