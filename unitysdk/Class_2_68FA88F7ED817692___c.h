#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_2_68FA88F7ED817692___C_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x169E7580)
#define CLASS_2_68FA88F7ED817692___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x169E7530)
#define CLASS_2_68FA88F7ED817692___C__CTOR_OFFSET UNITYSDK_OFFSET(0x169E7570)

inline static constexpr unsigned int Class_2_68FA88F7ED817692___c_TypeDefinitionIndex = 67138;

class Class_2_68FA88F7ED817692___c : public ::System::Object
{
public:
	static ::Class_2_68FA88F7ED817692___c** StaticGet___9()
	{
		return (::Class_2_68FA88F7ED817692___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_68FA88F7ED817692___c_TypeDefinitionIndex)->GetStaticField(0x3FAE0);
	}
	static ::System::Action** StaticGet___9__11_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_68FA88F7ED817692___c_TypeDefinitionIndex)->GetStaticField(0x3FAE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_68FA88F7ED817692___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68FA88F7ED817692___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68FA88F7ED817692___C_METHOD_1_832295EC279E5994_OFFSET))(this);
	}
};
