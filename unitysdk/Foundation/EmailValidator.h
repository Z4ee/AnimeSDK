#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text::RegularExpressions { class Match; }

#define FOUNDATION_EMAILVALIDATOR_DOMAINMAPPER_OFFSET UNITYSDK_OFFSET(0x1C5CB8D0)
#define FOUNDATION_EMAILVALIDATOR_ISVALIDEMAIL_OFFSET UNITYSDK_OFFSET(0x1C5CB7B0)
#define FOUNDATION_EMAILVALIDATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5CBB10)

namespace Foundation
{
	inline static constexpr unsigned int EmailValidator_TypeDefinitionIndex = 8138;

	class EmailValidator : public ::System::Object
	{
	public:
		::System::Boolean invalid; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_EMAILVALIDATOR__CTOR_OFFSET))(this);
		}

		::System::Boolean IsValidEmail(::System::String* strIn)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_EMAILVALIDATOR_ISVALIDEMAIL_OFFSET))(this, strIn);
		}

		::System::String* DomainMapper(::System::Text::RegularExpressions::Match* match)
		{
			return ((::System::String*(*)(::PVOID, ::System::Text::RegularExpressions::Match*))((::PBYTE)hIl2Cpp + FOUNDATION_EMAILVALIDATOR_DOMAINMAPPER_OFFSET))(this, match);
		}
	};
}
