#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text::RegularExpressions { class Match; }

#define CLASS_1_20DB0AC1D3007B29_CLASS_1_2E33D3A36896E1DA_METHOD_1_E2DD7C0F9DD19014_OFFSET UNITYSDK_OFFSET(0x1140B680)
#define CLASS_1_20DB0AC1D3007B29_CLASS_1_2E33D3A36896E1DA__CTOR_OFFSET UNITYSDK_OFFSET(0x1140B670)

inline static constexpr unsigned int Class_1_20DB0AC1D3007B29_Class_1_2E33D3A36896E1DA_TypeDefinitionIndex = 61326;

class Class_1_20DB0AC1D3007B29_Class_1_2E33D3A36896E1DA : public ::System::Object
{
public:
	::System::Boolean Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20DB0AC1D3007B29_CLASS_1_2E33D3A36896E1DA__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_E2DD7C0F9DD19014(::System::Text::RegularExpressions::Match* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Text::RegularExpressions::Match*))((::PBYTE)hIl2Cpp + CLASS_1_20DB0AC1D3007B29_CLASS_1_2E33D3A36896E1DA_METHOD_1_E2DD7C0F9DD19014_OFFSET))(this, a1);
	}
};
