#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_4579BF75197A22BE_Struct_2_BBD456EBC9087BC2_11.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_4579BF75197A22BE___C_METHOD_1_442BD36408A5FFF0_OFFSET UNITYSDK_OFFSET(0x1520A7D0)
#define CLASS_2_4579BF75197A22BE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1520A780)
#define CLASS_2_4579BF75197A22BE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1520A7C0)

inline static constexpr unsigned int Class_2_4579BF75197A22BE___c_TypeDefinitionIndex = 87156;

class Class_2_4579BF75197A22BE___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_2_4579BF75197A22BE_Struct_2_BBD456EBC9087BC2_11>** StaticGet___9__5_0()
	{
		return (::System::Comparison_1<::Class_2_4579BF75197A22BE_Struct_2_BBD456EBC9087BC2_11>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4579BF75197A22BE___c_TypeDefinitionIndex)->GetStaticField(0x44260);
	}
	static ::Class_2_4579BF75197A22BE___c** StaticGet___9()
	{
		return (::Class_2_4579BF75197A22BE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4579BF75197A22BE___c_TypeDefinitionIndex)->GetStaticField(0x44268);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_4579BF75197A22BE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4579BF75197A22BE___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_442BD36408A5FFF0(::Class_2_4579BF75197A22BE_Struct_2_BBD456EBC9087BC2_11 a1, ::Class_2_4579BF75197A22BE_Struct_2_BBD456EBC9087BC2_11 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_4579BF75197A22BE_Struct_2_BBD456EBC9087BC2_11, ::Class_2_4579BF75197A22BE_Struct_2_BBD456EBC9087BC2_11))((::PBYTE)hIl2Cpp + CLASS_2_4579BF75197A22BE___C_METHOD_1_442BD36408A5FFF0_OFFSET))(this, a1, a2);
	}
};
