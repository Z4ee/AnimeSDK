#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json::Utilities { template <typename T1, typename T2> class MethodCall_2; }

#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__DISPLAYCLASS68_0__CREATESHOULDSERIALIZETEST_B__0_OFFSET UNITYSDK_OFFSET(0x1F6E5B50)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__DISPLAYCLASS68_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6E5B40)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int DefaultContractResolver___c__DisplayClass68_0_TypeDefinitionIndex = 7109;

	class DefaultContractResolver___c__DisplayClass68_0 : public ::System::Object
	{
	public:
		::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* shouldSerializeCall; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__DISPLAYCLASS68_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _CreateShouldSerializeTest_b__0(::System::Object* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__DISPLAYCLASS68_0__CREATESHOULDSERIALIZETEST_B__0_OFFSET))(this, o);
		}
	};
}
