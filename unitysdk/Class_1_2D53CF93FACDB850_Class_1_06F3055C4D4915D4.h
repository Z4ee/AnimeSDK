#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_9EC844EFE0300763.h"
#include "unitysdk/System/Object.h"

class Class_1_FA793AB1D49D0132;
class Class_2_8FC1A7735F246865;
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_2D53CF93FACDB850_CLASS_1_06F3055C4D4915D4_METHOD_1_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x1293AAD0)
#define CLASS_1_2D53CF93FACDB850_CLASS_1_06F3055C4D4915D4_METHOD_1_65CF685B19AB5EC4_OFFSET UNITYSDK_OFFSET(0x1293A9D0)
#define CLASS_1_2D53CF93FACDB850_CLASS_1_06F3055C4D4915D4__CTOR_OFFSET UNITYSDK_OFFSET(0x1293A9C0)

inline static constexpr unsigned int Class_1_2D53CF93FACDB850_Class_1_06F3055C4D4915D4_TypeDefinitionIndex = 43334;

class Class_1_2D53CF93FACDB850_Class_1_06F3055C4D4915D4 : public ::System::Object
{
public:
	::MoleMole::UIControllerContextBase* Field_1_2; // 0x10
	::Class_1_FA793AB1D49D0132* Field_1_1; // 0x18
	::Class_2_8FC1A7735F246865* Field_1_3; // 0x20
	::System::Action_1<::System::String*>* Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D53CF93FACDB850_CLASS_1_06F3055C4D4915D4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_65CF685B19AB5EC4(::Struct_2_9EC844EFE0300763 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_9EC844EFE0300763))((::PBYTE)hIl2Cpp + CLASS_1_2D53CF93FACDB850_CLASS_1_06F3055C4D4915D4_METHOD_1_65CF685B19AB5EC4_OFFSET))(this, a1);
	}

	::System::Void Method_1_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D53CF93FACDB850_CLASS_1_06F3055C4D4915D4_METHOD_1_56CE4AFC5339F746_OFFSET))(this);
	}
};
