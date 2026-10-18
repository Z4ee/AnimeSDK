#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_884CDB9D0FDFAF0D_8.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_3_27518451A20BB161___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFEBD420)
#define CLASS_3_27518451A20BB161___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFEBD460)
#define CLASS_3_27518451A20BB161___C__ONTASKBEGIN_B__1_1_OFFSET UNITYSDK_OFFSET(0xFEBD470)
#define CLASS_3_27518451A20BB161___C__ONTASKBEGIN_B__1_2_OFFSET UNITYSDK_OFFSET(0xFEBD480)

inline static constexpr unsigned int Class_3_27518451A20BB161___c_TypeDefinitionIndex = 52302;

class Class_3_27518451A20BB161___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::UInt32, ::Struct_2_884CDB9D0FDFAF0D_8>** StaticGet___9__1_1()
	{
		return (::System::Func_2<::System::UInt32, ::Struct_2_884CDB9D0FDFAF0D_8>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_27518451A20BB161___c_TypeDefinitionIndex)->GetStaticField(0x5BA40);
	}
	static ::System::Func_2<::System::UInt32, ::Struct_2_884CDB9D0FDFAF0D_8>** StaticGet___9__1_2()
	{
		return (::System::Func_2<::System::UInt32, ::Struct_2_884CDB9D0FDFAF0D_8>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_27518451A20BB161___c_TypeDefinitionIndex)->GetStaticField(0x5BA48);
	}
	static ::Class_3_27518451A20BB161___c** StaticGet___9()
	{
		return (::Class_3_27518451A20BB161___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_27518451A20BB161___c_TypeDefinitionIndex)->GetStaticField(0x5BA50);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161___C__CTOR_OFFSET))(this);
	}

	::Struct_2_884CDB9D0FDFAF0D_8 _OnTaskBegin_b__1_1(::System::UInt32 a1)
	{
		return ((::Struct_2_884CDB9D0FDFAF0D_8(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161___C__ONTASKBEGIN_B__1_1_OFFSET))(this, a1);
	}

	::Struct_2_884CDB9D0FDFAF0D_8 _OnTaskBegin_b__1_2(::System::UInt32 a1)
	{
		return ((::Struct_2_884CDB9D0FDFAF0D_8(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161___C__ONTASKBEGIN_B__1_2_OFFSET))(this, a1);
	}
};
