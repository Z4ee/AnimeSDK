#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__DISPLAYCLASS65_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15B97550)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__DISPLAYCLASS65_0__SETISSPECIFIEDACTIONS_B__0_OFFSET UNITYSDK_OFFSET(0x15B985D0)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int DefaultContractResolver___c__DisplayClass65_0_TypeDefinitionIndex = 9376;

	class DefaultContractResolver___c__DisplayClass65_0 : public ::System::Object
	{
	public:
		::System::Func_2<::System::Object*, ::System::Object*>* specifiedPropertyGet; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__DISPLAYCLASS65_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _SetIsSpecifiedActions_b__0(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER___C__DISPLAYCLASS65_0__SETISSPECIFIEDACTIONS_B__0_OFFSET))(this, a1);
		}
	};
}
