#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SimpleJSON { class JSONNode; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define SIMPLEJSON_JSONARRAY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19DA5F30)
#define SIMPLEJSON_JSONARRAY___C__CLONE_B__19_0_OFFSET UNITYSDK_OFFSET(0x19DA5F80)
#define SIMPLEJSON_JSONARRAY___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19DA5F70)

namespace SimpleJSON
{
	inline static constexpr unsigned int JSONArray___c_TypeDefinitionIndex = 9779;

	class JSONArray___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::SimpleJSON::JSONNode*, ::SimpleJSON::JSONNode*>** StaticGet___9__19_0()
		{
			return (::System::Func_2<::SimpleJSON::JSONNode*, ::SimpleJSON::JSONNode*>**)Il2CppClass::FromTypeDefinitionIndex(JSONArray___c_TypeDefinitionIndex)->GetStaticField(0xAC0);
		}
		static ::SimpleJSON::JSONArray___c** StaticGet___9()
		{
			return (::SimpleJSON::JSONArray___c**)Il2CppClass::FromTypeDefinitionIndex(JSONArray___c_TypeDefinitionIndex)->GetStaticField(0xAC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONARRAY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONARRAY___C__CTOR_OFFSET))(this);
		}

		::SimpleJSON::JSONNode* _Clone_b__19_0(::SimpleJSON::JSONNode* x)
		{
			return ((::SimpleJSON::JSONNode*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONARRAY___C__CLONE_B__19_0_OFFSET))(this, x);
		}
	};
}
