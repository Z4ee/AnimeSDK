#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_AA9239F66AD90F88_6.h"
#include "unitysdk/Class_3_248DACE3BB3053DD_Enum_3_208B758CC2D6E4CF.h"

class Class_2_167BB37617B940E3;
class Class_3_248DACE3BB3053DD;
class Class_3_DFD5D1FDB9D2A4AC;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define CLASS_3_FBE5C9BBABAFD87B_1_METHOD_3_1A0D85E5904D9469_OFFSET UNITYSDK_OFFSET(0x11EFB310)
#define CLASS_3_FBE5C9BBABAFD87B_1_METHOD_3_492D3811FDAC105D_OFFSET UNITYSDK_OFFSET(0x11EFB390)
#define CLASS_3_FBE5C9BBABAFD87B_1_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11EFB710)
#define CLASS_3_FBE5C9BBABAFD87B_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11EFB770)

inline static constexpr unsigned int Class_3_FBE5C9BBABAFD87B_1_TypeDefinitionIndex = 75278;

class Class_3_FBE5C9BBABAFD87B_1 : public ::Class_2_AA9239F66AD90F88_6<::Class_3_FBE5C9BBABAFD87B_1*>
{
public:
	::System::String* Field_3_1; // 0x10
	::System::UInt32 Field_3_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FBE5C9BBABAFD87B_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_1A0D85E5904D9469(::Class_3_248DACE3BB3053DD* a1, ::MoleMole::Battle::Entity* a2, ::Class_3_248DACE3BB3053DD_Enum_3_208B758CC2D6E4CF& a3, ::MoleMole::Battle::Entity* a4, ::Class_2_167BB37617B940E3* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::MoleMole::Battle::Entity*, ::Class_3_248DACE3BB3053DD_Enum_3_208B758CC2D6E4CF&, ::MoleMole::Battle::Entity*, ::Class_2_167BB37617B940E3*))((::PBYTE)hIl2Cpp + CLASS_3_FBE5C9BBABAFD87B_1_METHOD_3_1A0D85E5904D9469_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_492D3811FDAC105D(::Class_3_DFD5D1FDB9D2A4AC* a1, ::Class_3_248DACE3BB3053DD* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_248DACE3BB3053DD*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_FBE5C9BBABAFD87B_1_METHOD_3_492D3811FDAC105D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FBE5C9BBABAFD87B_1_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
