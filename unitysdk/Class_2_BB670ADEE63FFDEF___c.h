#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_48A3D3A34C52331D_46;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_BB670ADEE63FFDEF___C_METHOD_1_1B8139AE71A3FDE1_OFFSET UNITYSDK_OFFSET(0x144B6EE0)
#define CLASS_2_BB670ADEE63FFDEF___C_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x144B6ED0)
#define CLASS_2_BB670ADEE63FFDEF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x144B6E80)
#define CLASS_2_BB670ADEE63FFDEF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x144B6EC0)

inline static constexpr unsigned int Class_2_BB670ADEE63FFDEF___c_TypeDefinitionIndex = 63435;

class Class_2_BB670ADEE63FFDEF___c : public ::System::Object
{
public:
	static ::Class_2_BB670ADEE63FFDEF___c** StaticGet___9()
	{
		return (::Class_2_BB670ADEE63FFDEF___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_BB670ADEE63FFDEF___c_TypeDefinitionIndex)->GetStaticField(0x3C010);
	}
	static ::System::Action_1<::Class_3_48A3D3A34C52331D_46*>** StaticGet___9__10_0()
	{
		return (::System::Action_1<::Class_3_48A3D3A34C52331D_46*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_BB670ADEE63FFDEF___c_TypeDefinitionIndex)->GetStaticField(0x3C018);
	}
	static ::System::Action** StaticGet___9__10_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_BB670ADEE63FFDEF___c_TypeDefinitionIndex)->GetStaticField(0x3C020);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_BB670ADEE63FFDEF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB670ADEE63FFDEF___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB670ADEE63FFDEF___C_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_1_1B8139AE71A3FDE1(::Class_3_48A3D3A34C52331D_46* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_48A3D3A34C52331D_46*))((::PBYTE)hIl2Cpp + CLASS_2_BB670ADEE63FFDEF___C_METHOD_1_1B8139AE71A3FDE1_OFFSET))(this, a1);
	}
};
