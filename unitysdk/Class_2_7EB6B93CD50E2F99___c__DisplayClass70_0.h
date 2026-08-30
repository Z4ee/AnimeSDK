#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_A12205C602394C2F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_7EB6B93CD50E2F99___C__DISPLAYCLASS70_0__CTOR_OFFSET UNITYSDK_OFFSET(0x105E7DC0)
#define CLASS_2_7EB6B93CD50E2F99___C__DISPLAYCLASS70_0___SETUPLINKEDITEM_B__0_OFFSET UNITYSDK_OFFSET(0x105E99E0)

inline static constexpr unsigned int Class_2_7EB6B93CD50E2F99___c__DisplayClass70_0_TypeDefinitionIndex = 71282;

class Class_2_7EB6B93CD50E2F99___c__DisplayClass70_0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* iconPaths; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99___C__DISPLAYCLASS70_0__CTOR_OFFSET))(this);
	}

	::System::Void __SetupLinkedItem_b__0(::Class_2_A12205C602394C2F* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A12205C602394C2F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7EB6B93CD50E2F99___C__DISPLAYCLASS70_0___SETUPLINKEDITEM_B__0_OFFSET))(this, a1, a2);
	}
};
