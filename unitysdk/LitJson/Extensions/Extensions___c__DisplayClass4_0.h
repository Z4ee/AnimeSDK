#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define LITJSON_EXTENSIONS_EXTENSIONS___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8A65C0)
#define LITJSON_EXTENSIONS_EXTENSIONS___C__DISPLAYCLASS4_0__HASIMPLEMENTEDRAWGENERIC_G__ISTHERAWGENERICTYPE_0_OFFSET UNITYSDK_OFFSET(0x1B8A65D0)

namespace LitJson::Extensions
{
	inline static constexpr unsigned int Extensions___c__DisplayClass4_0_TypeDefinitionIndex = 7976;

	class Extensions___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Type* generic; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_EXTENSIONS_EXTENSIONS___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _HasImplementedRawGeneric_g__IsTheRawGenericType_0(::System::Type* test)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + LITJSON_EXTENSIONS_EXTENSIONS___C__DISPLAYCLASS4_0__HASIMPLEMENTEDRAWGENERIC_G__ISTHERAWGENERICTYPE_0_OFFSET))(this, test);
		}
	};
}
