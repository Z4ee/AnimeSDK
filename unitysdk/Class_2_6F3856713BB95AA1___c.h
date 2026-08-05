#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_6F3856713BB95AA1_Struct_2_BBD456EBC9087BC2_11.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_6F3856713BB95AA1___C_METHOD_1_442BD36408A5FFF0_OFFSET UNITYSDK_OFFSET(0x16564FB0)
#define CLASS_2_6F3856713BB95AA1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16564F60)
#define CLASS_2_6F3856713BB95AA1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16564FA0)

inline static constexpr unsigned int Class_2_6F3856713BB95AA1___c_TypeDefinitionIndex = 70605;

class Class_2_6F3856713BB95AA1___c : public ::System::Object
{
public:
	static ::Class_2_6F3856713BB95AA1___c** StaticGet___9()
	{
		return (::Class_2_6F3856713BB95AA1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6F3856713BB95AA1___c_TypeDefinitionIndex)->GetStaticField(0x34E80);
	}
	static ::System::Comparison_1<::Class_2_6F3856713BB95AA1_Struct_2_BBD456EBC9087BC2_11>** StaticGet___9__5_0()
	{
		return (::System::Comparison_1<::Class_2_6F3856713BB95AA1_Struct_2_BBD456EBC9087BC2_11>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6F3856713BB95AA1___c_TypeDefinitionIndex)->GetStaticField(0x34E88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_6F3856713BB95AA1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F3856713BB95AA1___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_442BD36408A5FFF0(::Class_2_6F3856713BB95AA1_Struct_2_BBD456EBC9087BC2_11 a1, ::Class_2_6F3856713BB95AA1_Struct_2_BBD456EBC9087BC2_11 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_6F3856713BB95AA1_Struct_2_BBD456EBC9087BC2_11, ::Class_2_6F3856713BB95AA1_Struct_2_BBD456EBC9087BC2_11))((::PBYTE)hIl2Cpp + CLASS_2_6F3856713BB95AA1___C_METHOD_1_442BD36408A5FFF0_OFFSET))(this, a1, a2);
	}
};
