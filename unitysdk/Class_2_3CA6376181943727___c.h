#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_3CA6376181943727___C_METHOD_1_5B8134C1FEDCBAFC_1_OFFSET UNITYSDK_OFFSET(0x17CE5960)
#define CLASS_2_3CA6376181943727___C_METHOD_1_5B8134C1FEDCBAFC_OFFSET UNITYSDK_OFFSET(0x17CE5950)
#define CLASS_2_3CA6376181943727___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17CE5900)
#define CLASS_2_3CA6376181943727___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17CE5940)

inline static constexpr unsigned int Class_2_3CA6376181943727___c_TypeDefinitionIndex = 81000;

class Class_2_3CA6376181943727___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__10_7()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3CA6376181943727___c_TypeDefinitionIndex)->GetStaticField(0x4B280);
	}
	static ::Class_2_3CA6376181943727___c** StaticGet___9()
	{
		return (::Class_2_3CA6376181943727___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3CA6376181943727___c_TypeDefinitionIndex)->GetStaticField(0x4B288);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__10_8()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3CA6376181943727___c_TypeDefinitionIndex)->GetStaticField(0x4B290);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_3CA6376181943727___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CA6376181943727___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_5B8134C1FEDCBAFC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CA6376181943727___C_METHOD_1_5B8134C1FEDCBAFC_OFFSET))(this);
	}

	::System::String* Method_1_5B8134C1FEDCBAFC_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CA6376181943727___C_METHOD_1_5B8134C1FEDCBAFC_1_OFFSET))(this);
	}
};
