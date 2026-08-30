#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NEWTONSOFT_JSON_LINQ_JTOKEN_LINEINFOANNOTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEBE110)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JToken_LineInfoAnnotation_TypeDefinitionIndex = 9723;

	class JToken_LineInfoAnnotation : public ::System::Object
	{
	public:
		::System::Int32 LinePosition; // 0x10
		::System::Int32 LineNumber; // 0x14

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JTOKEN_LINEINFOANNOTATION__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
