#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_2_EAD6F2D2935412D4___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1599AD40)
#define CLASS_2_EAD6F2D2935412D4___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1599AD80)
#define CLASS_2_EAD6F2D2935412D4___C___CLOSESCREENTRANSFER_B__18_0_OFFSET UNITYSDK_OFFSET(0x1599AD90)

inline static constexpr unsigned int Class_2_EAD6F2D2935412D4___c_TypeDefinitionIndex = 52962;

class Class_2_EAD6F2D2935412D4___c : public ::System::Object
{
public:
	static ::Class_2_EAD6F2D2935412D4___c** StaticGet___9()
	{
		return (::Class_2_EAD6F2D2935412D4___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_EAD6F2D2935412D4___c_TypeDefinitionIndex)->GetStaticField(0x58740);
	}
	static ::System::Action** StaticGet___9__18_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_EAD6F2D2935412D4___c_TypeDefinitionIndex)->GetStaticField(0x58748);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_EAD6F2D2935412D4___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EAD6F2D2935412D4___C__CTOR_OFFSET))(this);
	}

	::System::Void __CloseScreenTransfer_b__18_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EAD6F2D2935412D4___C___CLOSESCREENTRANSFER_B__18_0_OFFSET))(this);
	}
};
