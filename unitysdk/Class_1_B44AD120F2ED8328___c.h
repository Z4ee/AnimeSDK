#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_B44AD120F2ED8328___C_METHOD_1_A61A196E6AD5766D_OFFSET UNITYSDK_OFFSET(0xFBD6900)
#define CLASS_1_B44AD120F2ED8328___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFBD68B0)
#define CLASS_1_B44AD120F2ED8328___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFBD68F0)

inline static constexpr unsigned int Class_1_B44AD120F2ED8328___c_TypeDefinitionIndex = 86624;

class Class_1_B44AD120F2ED8328___c : public ::System::Object
{
public:
	static ::Class_1_B44AD120F2ED8328___c** StaticGet___9()
	{
		return (::Class_1_B44AD120F2ED8328___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B44AD120F2ED8328___c_TypeDefinitionIndex)->GetStaticField(0x4C310);
	}
	static ::System::Action** StaticGet___9__6_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B44AD120F2ED8328___c_TypeDefinitionIndex)->GetStaticField(0x4C318);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B44AD120F2ED8328___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B44AD120F2ED8328___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A61A196E6AD5766D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B44AD120F2ED8328___C_METHOD_1_A61A196E6AD5766D_OFFSET))(this);
	}
};
