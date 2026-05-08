#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_2_0E3D561C72111316___C_METHOD_1_36726F9E10ADB55F_OFFSET UNITYSDK_OFFSET(0x13348A50)
#define CLASS_2_0E3D561C72111316___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13348A00)
#define CLASS_2_0E3D561C72111316___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13348A40)

inline static constexpr unsigned int Class_2_0E3D561C72111316___c_TypeDefinitionIndex = 59296;

class Class_2_0E3D561C72111316___c : public ::System::Object
{
public:
	static ::Class_2_0E3D561C72111316___c** StaticGet___9()
	{
		return (::Class_2_0E3D561C72111316___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0E3D561C72111316___c_TypeDefinitionIndex)->GetStaticField(0x39320);
	}
	static ::System::Action** StaticGet___9__93_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0E3D561C72111316___c_TypeDefinitionIndex)->GetStaticField(0x39328);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_0E3D561C72111316___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E3D561C72111316___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_36726F9E10ADB55F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0E3D561C72111316___C_METHOD_1_36726F9E10ADB55F_OFFSET))(this);
	}
};
