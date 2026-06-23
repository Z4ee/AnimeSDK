#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_5B421F8FFABD4CA3_2.h"
#include "unitysdk/Struct_2_ABC67D4EFBF3BD9A_3.h"
#include "unitysdk/System/Object.h"

class Class_2_F9061A6F120FD081;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_F9061A6F120FD081_CLASS_1_232EA8338F63BA34_METHOD_1_FA383E53DEC53851_OFFSET UNITYSDK_OFFSET(0x1239FAF0)
#define CLASS_2_F9061A6F120FD081_CLASS_1_232EA8338F63BA34__CTOR_OFFSET UNITYSDK_OFFSET(0x1239FAE0)

inline static constexpr unsigned int Class_2_F9061A6F120FD081_Class_1_232EA8338F63BA34_TypeDefinitionIndex = 75851;

class Class_2_F9061A6F120FD081_Class_1_232EA8338F63BA34 : public ::System::Object
{
public:
	::System::Action* Field_1_2; // 0x10
	::System::Action_1<::Struct_2_5B421F8FFABD4CA3_2>* Field_1_3; // 0x18
	::Struct_2_ABC67D4EFBF3BD9A_3 Field_1_1; // 0x20
	::Class_2_F9061A6F120FD081* Field_1_0; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9061A6F120FD081_CLASS_1_232EA8338F63BA34__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FA383E53DEC53851(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F9061A6F120FD081_CLASS_1_232EA8338F63BA34_METHOD_1_FA383E53DEC53851_OFFSET))(this, a1);
	}
};
