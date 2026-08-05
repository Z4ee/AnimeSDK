#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_5B421F8FFABD4CA3_1.h"
#include "unitysdk/Struct_2_ABC67D4EFBF3BD9A_4.h"
#include "unitysdk/System/Object.h"

class Class_2_EE518804D24B05ED;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_EE518804D24B05ED_CLASS_1_232EA8338F63BA34_METHOD_1_FA383E53DEC53851_OFFSET UNITYSDK_OFFSET(0x13C37170)
#define CLASS_2_EE518804D24B05ED_CLASS_1_232EA8338F63BA34__CTOR_OFFSET UNITYSDK_OFFSET(0x13C37160)

inline static constexpr unsigned int Class_2_EE518804D24B05ED_Class_1_232EA8338F63BA34_TypeDefinitionIndex = 60019;

class Class_2_EE518804D24B05ED_Class_1_232EA8338F63BA34 : public ::System::Object
{
public:
	::Class_2_EE518804D24B05ED* Field_1_3; // 0x10
	::System::Action_1<::Struct_2_5B421F8FFABD4CA3_1>* Field_1_0; // 0x18
	::System::Action* Field_1_1; // 0x20
	::Struct_2_ABC67D4EFBF3BD9A_4 Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE518804D24B05ED_CLASS_1_232EA8338F63BA34__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FA383E53DEC53851(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_EE518804D24B05ED_CLASS_1_232EA8338F63BA34_METHOD_1_FA383E53DEC53851_OFFSET))(this, a1);
	}
};
