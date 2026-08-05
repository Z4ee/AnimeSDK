#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_3_435EEEE804ECAAEB___C_METHOD_1_CEA32FF190776922_OFFSET UNITYSDK_OFFSET(0x16720990)
#define CLASS_3_435EEEE804ECAAEB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16720940)
#define CLASS_3_435EEEE804ECAAEB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16720980)

inline static constexpr unsigned int Class_3_435EEEE804ECAAEB___c_TypeDefinitionIndex = 88096;

class Class_3_435EEEE804ECAAEB___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__47_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_3_435EEEE804ECAAEB___c_TypeDefinitionIndex)->GetStaticField(0x395F0);
	}
	static ::Class_3_435EEEE804ECAAEB___c** StaticGet___9()
	{
		return (::Class_3_435EEEE804ECAAEB___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_435EEEE804ECAAEB___c_TypeDefinitionIndex)->GetStaticField(0x395F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_435EEEE804ECAAEB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_435EEEE804ECAAEB___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CEA32FF190776922()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_435EEEE804ECAAEB___C_METHOD_1_CEA32FF190776922_OFFSET))(this);
	}
};
