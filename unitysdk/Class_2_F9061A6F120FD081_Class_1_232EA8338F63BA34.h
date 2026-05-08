#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_5B421F8FFABD4CA3_3.h"
#include "unitysdk/Struct_2_ABC67D4EFBF3BD9A_4.h"
#include "unitysdk/System/Object.h"

class Class_2_F9061A6F120FD081;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_F9061A6F120FD081_CLASS_1_232EA8338F63BA34_METHOD_1_FA383E53DEC53851_OFFSET UNITYSDK_OFFSET(0x140EC7E0)
#define CLASS_2_F9061A6F120FD081_CLASS_1_232EA8338F63BA34__CTOR_OFFSET UNITYSDK_OFFSET(0x140EC7D0)

inline static constexpr unsigned int Class_2_F9061A6F120FD081_Class_1_232EA8338F63BA34_TypeDefinitionIndex = 79958;

class Class_2_F9061A6F120FD081_Class_1_232EA8338F63BA34 : public ::System::Object
{
public:
	::Struct_2_ABC67D4EFBF3BD9A_4 Field_1_1; // 0x10
	::System::Action_1<::Struct_2_5B421F8FFABD4CA3_3>* Field_1_3; // 0x60
	::System::Action* Field_1_2; // 0x68
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
