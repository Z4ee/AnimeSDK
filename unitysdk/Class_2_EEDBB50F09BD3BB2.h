#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_85.h"

class Class_1_E5B7864412CDC074;
class Class_5_DCFF91E03A93C03C;
namespace MoleMole::Config { class ConfigHollowChessboard; }

#define CLASS_2_EEDBB50F09BD3BB2_METHOD_2_DF249C0E36759C3F_OFFSET UNITYSDK_OFFSET(0x198FC930)
#define CLASS_2_EEDBB50F09BD3BB2_METHOD_2_E3ADA5CA2C064E44_OFFSET UNITYSDK_OFFSET(0x198FC8D0)
#define CLASS_2_EEDBB50F09BD3BB2_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x198FCA50)
#define CLASS_2_EEDBB50F09BD3BB2__CCTOR_OFFSET UNITYSDK_OFFSET(0x198FCA60)
#define CLASS_2_EEDBB50F09BD3BB2__CTOR_OFFSET UNITYSDK_OFFSET(0x198FC8C0)

inline static constexpr unsigned int Class_2_EEDBB50F09BD3BB2_TypeDefinitionIndex = 64593;

class Class_2_EEDBB50F09BD3BB2 : public ::Class_1_43BD383C98B4C0C5_85
{
public:
	static ::System::Single* StaticGet_Field_2_1()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_EEDBB50F09BD3BB2_TypeDefinitionIndex)->GetStaticField(0x11CD0);
	}
	static ::System::Single* StaticGet_Field_2_2()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_EEDBB50F09BD3BB2_TypeDefinitionIndex)->GetStaticField(0x11CD4);
	}
	::MoleMole::Config::ConfigHollowChessboard* Field_2_7; // 0x10
	::Class_1_E5B7864412CDC074* Field_2_6; // 0x18
	::Class_5_DCFF91E03A93C03C* Field_2_0; // 0x20
	::System::Boolean Field_2_5; // 0x28

	::System::Void _ctor(::Class_5_DCFF91E03A93C03C* a1, ::MoleMole::Config::ConfigHollowChessboard* a2, ::Class_1_E5B7864412CDC074* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_DCFF91E03A93C03C*, ::MoleMole::Config::ConfigHollowChessboard*, ::Class_1_E5B7864412CDC074*))((::PBYTE)hIl2Cpp + CLASS_2_EEDBB50F09BD3BB2__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_EEDBB50F09BD3BB2__CCTOR_OFFSET))();
	}

	::System::Void Method_2_E3ADA5CA2C064E44(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EEDBB50F09BD3BB2_METHOD_2_E3ADA5CA2C064E44_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EEDBB50F09BD3BB2_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_DF249C0E36759C3F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EEDBB50F09BD3BB2_METHOD_2_DF249C0E36759C3F_OFFSET))(this, a1);
	}
};
