#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_3_F2D53A16E03F9067___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x187E55B0)
#define CLASS_3_F2D53A16E03F9067___C__CTOR_OFFSET UNITYSDK_OFFSET(0x187E55F0)
#define CLASS_3_F2D53A16E03F9067___C__ONTASKBEGIN_B__6_0_OFFSET UNITYSDK_OFFSET(0x187E5600)

inline static constexpr unsigned int Class_3_F2D53A16E03F9067___c_TypeDefinitionIndex = 58312;

class Class_3_F2D53A16E03F9067___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__6_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F2D53A16E03F9067___c_TypeDefinitionIndex)->GetStaticField(0x39700);
	}
	static ::Class_3_F2D53A16E03F9067___c** StaticGet___9()
	{
		return (::Class_3_F2D53A16E03F9067___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F2D53A16E03F9067___c_TypeDefinitionIndex)->GetStaticField(0x39708);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F2D53A16E03F9067___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2D53A16E03F9067___C__CTOR_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__6_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2D53A16E03F9067___C__ONTASKBEGIN_B__6_0_OFFSET))(this);
	}
};
