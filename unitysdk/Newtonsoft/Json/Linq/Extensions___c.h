#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NEWTONSOFT_JSON_LINQ_EXTENSIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x166068C0)
#define NEWTONSOFT_JSON_LINQ_EXTENSIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16606900)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int Extensions___c_TypeDefinitionIndex = 9429;

	class Extensions___c : public ::System::Object
	{
	public:
		static ::Newtonsoft::Json::Linq::Extensions___c** StaticGet___9()
		{
			return (::Newtonsoft::Json::Linq::Extensions___c**)Il2CppClass::FromTypeDefinitionIndex(Extensions___c_TypeDefinitionIndex)->GetStaticField(0x327F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_EXTENSIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_EXTENSIONS___C__CTOR_OFFSET))(this);
		}
	};
}
