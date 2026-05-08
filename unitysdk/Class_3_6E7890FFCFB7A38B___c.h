#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_3E4EAF7C2CEE63E8;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_6E7890FFCFB7A38B___C_METHOD_1_6C1B59D90742188F_OFFSET UNITYSDK_OFFSET(0x11F02C20)
#define CLASS_3_6E7890FFCFB7A38B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11F02BD0)
#define CLASS_3_6E7890FFCFB7A38B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11F02C10)

inline static constexpr unsigned int Class_3_6E7890FFCFB7A38B___c_TypeDefinitionIndex = 61986;

class Class_3_6E7890FFCFB7A38B___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_3E4EAF7C2CEE63E8*>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::Class_3_3E4EAF7C2CEE63E8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_6E7890FFCFB7A38B___c_TypeDefinitionIndex)->GetStaticField(0x36A60);
	}
	static ::Class_3_6E7890FFCFB7A38B___c** StaticGet___9()
	{
		return (::Class_3_6E7890FFCFB7A38B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_6E7890FFCFB7A38B___c_TypeDefinitionIndex)->GetStaticField(0x36A68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_6E7890FFCFB7A38B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6E7890FFCFB7A38B___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6C1B59D90742188F(::Class_3_3E4EAF7C2CEE63E8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_3E4EAF7C2CEE63E8*))((::PBYTE)hIl2Cpp + CLASS_3_6E7890FFCFB7A38B___C_METHOD_1_6C1B59D90742188F_OFFSET))(this, a1);
	}
};
