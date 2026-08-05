#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_3FA43C71A3D27BCE___C_METHOD_1_EA3063A5CDD6F164_OFFSET UNITYSDK_OFFSET(0x125A1D60)
#define CLASS_1_3FA43C71A3D27BCE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x125A1D10)
#define CLASS_1_3FA43C71A3D27BCE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x125A1D50)

inline static constexpr unsigned int Class_1_3FA43C71A3D27BCE___c_TypeDefinitionIndex = 65948;

class Class_1_3FA43C71A3D27BCE___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__16_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3FA43C71A3D27BCE___c_TypeDefinitionIndex)->GetStaticField(0x41990);
	}
	static ::Class_1_3FA43C71A3D27BCE___c** StaticGet___9()
	{
		return (::Class_1_3FA43C71A3D27BCE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3FA43C71A3D27BCE___c_TypeDefinitionIndex)->GetStaticField(0x41998);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3FA43C71A3D27BCE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3FA43C71A3D27BCE___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EA3063A5CDD6F164()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3FA43C71A3D27BCE___C_METHOD_1_EA3063A5CDD6F164_OFFSET))(this);
	}
};
