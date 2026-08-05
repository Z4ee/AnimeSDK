#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_AA9239F66AD90F88_2.h"
#include "unitysdk/Class_3_248DACE3BB3053DD_Enum_3_208B758CC2D6E4CF.h"

class Class_2_14986121AA61AD99;
class Class_3_248DACE3BB3053DD;
class Class_3_C93CC3D2C2AC4067;
namespace MoleMole::Battle { class Entity; }

#define CLASS_3_A4C2CD00C0F8F522_METHOD_3_1A0D85E5904D9469_OFFSET UNITYSDK_OFFSET(0x1573BB20)
#define CLASS_3_A4C2CD00C0F8F522_METHOD_3_909C68B6E74C9B29_OFFSET UNITYSDK_OFFSET(0x1573BBA0)
#define CLASS_3_A4C2CD00C0F8F522_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1573BDB0)
#define CLASS_3_A4C2CD00C0F8F522__CTOR_OFFSET UNITYSDK_OFFSET(0x1573BDF0)

inline static constexpr unsigned int Class_3_A4C2CD00C0F8F522_TypeDefinitionIndex = 64371;

class Class_3_A4C2CD00C0F8F522 : public ::Class_2_AA9239F66AD90F88_2<::Class_3_A4C2CD00C0F8F522*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A4C2CD00C0F8F522__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_1A0D85E5904D9469(::Class_3_248DACE3BB3053DD* a1, ::MoleMole::Battle::Entity* a2, ::Class_3_248DACE3BB3053DD_Enum_3_208B758CC2D6E4CF& a3, ::MoleMole::Battle::Entity* a4, ::Class_2_14986121AA61AD99* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::MoleMole::Battle::Entity*, ::Class_3_248DACE3BB3053DD_Enum_3_208B758CC2D6E4CF&, ::MoleMole::Battle::Entity*, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + CLASS_3_A4C2CD00C0F8F522_METHOD_3_1A0D85E5904D9469_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_909C68B6E74C9B29(::Class_3_C93CC3D2C2AC4067* a1, ::Class_3_248DACE3BB3053DD* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C93CC3D2C2AC4067*, ::Class_3_248DACE3BB3053DD*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_A4C2CD00C0F8F522_METHOD_3_909C68B6E74C9B29_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A4C2CD00C0F8F522_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
