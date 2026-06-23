#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__DISPLAYCLASS69_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF71830)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__DISPLAYCLASS69_0__SETISSPECIFIEDACTIONS_B__0_OFFSET UNITYSDK_OFFSET(0x1DF71840)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int DefaultContractResolver___c__DisplayClass69_0_TypeDefinitionIndex = 7106;

	class DefaultContractResolver___c__DisplayClass69_0 : public ::System::Object
	{
	public:
		::System::Func_2<::System::Object*, ::System::Object*>* specifiedPropertyGet; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__DISPLAYCLASS69_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _SetIsSpecifiedActions_b__0(::System::Object* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__DISPLAYCLASS69_0__SETISSPECIFIEDACTIONS_B__0_OFFSET))(this, o);
		}
	};
}
