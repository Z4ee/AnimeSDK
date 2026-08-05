#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text::RegularExpressions { class Match; }

#define CLASS_1_20DB0AC1D3007B29_CLASS_1_1B158C4ED9AEFB1F_METHOD_1_825E35DC1DE12E85_OFFSET UNITYSDK_OFFSET(0x15068DD0)
#define CLASS_1_20DB0AC1D3007B29_CLASS_1_1B158C4ED9AEFB1F__CTOR_OFFSET UNITYSDK_OFFSET(0x15068DC0)

inline static constexpr unsigned int Class_1_20DB0AC1D3007B29_Class_1_1B158C4ED9AEFB1F_TypeDefinitionIndex = 61325;

class Class_1_20DB0AC1D3007B29_Class_1_1B158C4ED9AEFB1F : public ::System::Object
{
public:
	::System::Boolean Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20DB0AC1D3007B29_CLASS_1_1B158C4ED9AEFB1F__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_825E35DC1DE12E85(::System::Text::RegularExpressions::Match* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Text::RegularExpressions::Match*))((::PBYTE)hIl2Cpp + CLASS_1_20DB0AC1D3007B29_CLASS_1_1B158C4ED9AEFB1F_METHOD_1_825E35DC1DE12E85_OFFSET))(this, a1);
	}
};
