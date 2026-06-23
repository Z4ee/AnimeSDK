#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text::RegularExpressions { class Match; }

#define CLASS_1_F435A50DDB06E0E2_CLASS_1_1B158C4ED9AEFB1F_METHOD_1_825E35DC1DE12E85_OFFSET UNITYSDK_OFFSET(0x10E3FB90)
#define CLASS_1_F435A50DDB06E0E2_CLASS_1_1B158C4ED9AEFB1F__CTOR_OFFSET UNITYSDK_OFFSET(0x10E3FB80)

inline static constexpr unsigned int Class_1_F435A50DDB06E0E2_Class_1_1B158C4ED9AEFB1F_TypeDefinitionIndex = 44411;

class Class_1_F435A50DDB06E0E2_Class_1_1B158C4ED9AEFB1F : public ::System::Object
{
public:
	::System::Boolean Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F435A50DDB06E0E2_CLASS_1_1B158C4ED9AEFB1F__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_825E35DC1DE12E85(::System::Text::RegularExpressions::Match* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Text::RegularExpressions::Match*))((::PBYTE)hIl2Cpp + CLASS_1_F435A50DDB06E0E2_CLASS_1_1B158C4ED9AEFB1F_METHOD_1_825E35DC1DE12E85_OFFSET))(this, a1);
	}
};
