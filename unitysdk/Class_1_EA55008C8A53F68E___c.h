#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_38773F744063AC56_Class_1_3BCCFFF8A20DFE8D;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_EA55008C8A53F68E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x162882A0)
#define CLASS_1_EA55008C8A53F68E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x162882E0)
#define CLASS_1_EA55008C8A53F68E___C___HANDLECATREACHSECTIONTARGET_B__21_0_OFFSET UNITYSDK_OFFSET(0x162882F0)

inline static constexpr unsigned int Class_1_EA55008C8A53F68E___c_TypeDefinitionIndex = 36750;

class Class_1_EA55008C8A53F68E___c : public ::System::Object
{
public:
	static ::Class_1_EA55008C8A53F68E___c** StaticGet___9()
	{
		return (::Class_1_EA55008C8A53F68E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EA55008C8A53F68E___c_TypeDefinitionIndex)->GetStaticField(0x5B2C0);
	}
	static ::System::Func_2<::Class_1_38773F744063AC56_Class_1_3BCCFFF8A20DFE8D*, ::System::UInt32>** StaticGet___9__21_0()
	{
		return (::System::Func_2<::Class_1_38773F744063AC56_Class_1_3BCCFFF8A20DFE8D*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EA55008C8A53F68E___c_TypeDefinitionIndex)->GetStaticField(0x5B2C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EA55008C8A53F68E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA55008C8A53F68E___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 __HandleCatReachSectionTarget_b__21_0(::Class_1_38773F744063AC56_Class_1_3BCCFFF8A20DFE8D* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_1_38773F744063AC56_Class_1_3BCCFFF8A20DFE8D*))((::PBYTE)hIl2Cpp + CLASS_1_EA55008C8A53F68E___C___HANDLECATREACHSECTIONTARGET_B__21_0_OFFSET))(this, a1);
	}
};
