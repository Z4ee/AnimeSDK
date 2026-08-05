#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class MemberInfo; }

#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__DISPLAYCLASS38_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6E5B30)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int DefaultContractResolver___c__DisplayClass38_0_TypeDefinitionIndex = 7105;

	class DefaultContractResolver___c__DisplayClass38_0 : public ::System::Object
	{
	public:
		::System::Reflection::MemberInfo* member; // 0x10
		::System::Func_2<::System::Object*, ::System::Object*>* getExtensionDataDictionary; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__DISPLAYCLASS38_0__CTOR_OFFSET))(this);
		}
	};
}
