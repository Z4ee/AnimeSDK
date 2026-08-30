#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json::Serialization { class DefaultContractResolver___c__DisplayClass34_0; }
namespace Newtonsoft::Json::Utilities { template <typename T1, typename T2> class MethodCall_2; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Func_1; }

#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__DISPLAYCLASS34_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEC83B0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__DISPLAYCLASS34_1__SETEXTENSIONDATADELEGATES_B__0_OFFSET UNITYSDK_OFFSET(0x1BED1EC0)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int DefaultContractResolver___c__DisplayClass34_1_TypeDefinitionIndex = 9652;

	class DefaultContractResolver___c__DisplayClass34_1 : public ::System::Object
	{
	public:
		::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* setExtensionDataDictionaryValue; // 0x10
		::Newtonsoft::Json::Serialization::DefaultContractResolver___c__DisplayClass34_0* CS___8__locals1; // 0x18
		::System::Action_2<::System::Object*, ::System::Object*>* setExtensionDataDictionary; // 0x20
		::System::Func_1<::System::Object*>* createExtensionDataDictionary; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__DISPLAYCLASS34_1__CTOR_OFFSET))(this);
		}

		::System::Void _SetExtensionDataDelegates_b__0(::System::Object* a1, ::System::String* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__DISPLAYCLASS34_1__SETEXTENSIONDATADELEGATES_B__0_OFFSET))(this, a1, a2, a3);
		}
	};
}
