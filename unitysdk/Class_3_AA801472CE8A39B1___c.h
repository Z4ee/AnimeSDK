#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_AEB5FD209BA140DF;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_3_AA801472CE8A39B1___C_METHOD_1_03C39BB8E09A79D2_OFFSET UNITYSDK_OFFSET(0x15B7C980)
#define CLASS_3_AA801472CE8A39B1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B7C930)
#define CLASS_3_AA801472CE8A39B1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15B7C970)

inline static constexpr unsigned int Class_3_AA801472CE8A39B1___c_TypeDefinitionIndex = 76139;

class Class_3_AA801472CE8A39B1___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_AEB5FD209BA140DF*, ::System::Boolean>** StaticGet___9__49_0()
	{
		return (::System::Func_2<::Class_1_AEB5FD209BA140DF*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_AA801472CE8A39B1___c_TypeDefinitionIndex)->GetStaticField(0x4DEC0);
	}
	static ::Class_3_AA801472CE8A39B1___c** StaticGet___9()
	{
		return (::Class_3_AA801472CE8A39B1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_AA801472CE8A39B1___c_TypeDefinitionIndex)->GetStaticField(0x4DEC8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_AA801472CE8A39B1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AA801472CE8A39B1___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_03C39BB8E09A79D2(::Class_1_AEB5FD209BA140DF* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_AEB5FD209BA140DF*))((::PBYTE)hIl2Cpp + CLASS_3_AA801472CE8A39B1___C_METHOD_1_03C39BB8E09A79D2_OFFSET))(this, a1);
	}
};
