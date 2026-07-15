#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NEWTONSOFT_JSON_UTILITIES_PROPERTYNAMETABLE_ENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x15BCCA50)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int PropertyNameTable_Entry_TypeDefinitionIndex = 9297;

	class PropertyNameTable_Entry : public ::System::Object
	{
	public:
		::Newtonsoft::Json::Utilities::PropertyNameTable_Entry* Next; // 0x10
		::System::String* Value; // 0x18
		::System::Int32 HashCode; // 0x20

		::System::Void _ctor(::System::String* a1, ::System::Int32 a2, ::Newtonsoft::Json::Utilities::PropertyNameTable_Entry* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::Newtonsoft::Json::Utilities::PropertyNameTable_Entry*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_PROPERTYNAMETABLE_ENTRY__CTOR_OFFSET))(this, a1, a2, a3);
		}
	};
}
