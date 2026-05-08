#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_BAD4948F9FB7FC7A;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_F461AE38AB429FB5___C_METHOD_1_B3BCFE72DF2C5725_OFFSET UNITYSDK_OFFSET(0x11672BD0)
#define CLASS_3_F461AE38AB429FB5___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11672B80)
#define CLASS_3_F461AE38AB429FB5___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11672BC0)

inline static constexpr unsigned int Class_3_F461AE38AB429FB5___c_TypeDefinitionIndex = 45311;

class Class_3_F461AE38AB429FB5___c : public ::System::Object
{
public:
	static ::Class_3_F461AE38AB429FB5___c** StaticGet___9()
	{
		return (::Class_3_F461AE38AB429FB5___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F461AE38AB429FB5___c_TypeDefinitionIndex)->GetStaticField(0x335D0);
	}
	static ::System::Action_1<::Class_3_BAD4948F9FB7FC7A*>** StaticGet___9__14_0()
	{
		return (::System::Action_1<::Class_3_BAD4948F9FB7FC7A*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F461AE38AB429FB5___c_TypeDefinitionIndex)->GetStaticField(0x335D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F461AE38AB429FB5___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F461AE38AB429FB5___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B3BCFE72DF2C5725(::Class_3_BAD4948F9FB7FC7A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_BAD4948F9FB7FC7A*))((::PBYTE)hIl2Cpp + CLASS_3_F461AE38AB429FB5___C_METHOD_1_B3BCFE72DF2C5725_OFFSET))(this, a1);
	}
};
