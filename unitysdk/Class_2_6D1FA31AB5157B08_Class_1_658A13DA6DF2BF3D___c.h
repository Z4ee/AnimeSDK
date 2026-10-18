#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1229;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_6D1FA31AB5157B08_CLASS_1_658A13DA6DF2BF3D___C__ALLBUTTONS_B__29_0_OFFSET UNITYSDK_OFFSET(0xB9CDB60)
#define CLASS_2_6D1FA31AB5157B08_CLASS_1_658A13DA6DF2BF3D___C__BUTTONS_B__27_0_OFFSET UNITYSDK_OFFSET(0xB9CDB50)
#define CLASS_2_6D1FA31AB5157B08_CLASS_1_658A13DA6DF2BF3D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB9CDB10)
#define CLASS_2_6D1FA31AB5157B08_CLASS_1_658A13DA6DF2BF3D___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB9CDB40)
#define CLASS_2_6D1FA31AB5157B08_CLASS_1_658A13DA6DF2BF3D___C__GETALLACTIVEBUTTONS_B__45_0_OFFSET UNITYSDK_OFFSET(0xB9CDB70)

inline static constexpr unsigned int Class_2_6D1FA31AB5157B08_Class_1_658A13DA6DF2BF3D___c_TypeDefinitionIndex = 71902;

class Class_2_6D1FA31AB5157B08_Class_1_658A13DA6DF2BF3D___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_0_16E4307DCC419505_1229*, ::System::Boolean>** StaticGet___9__45_0()
	{
		return (::System::Func_2<::Class_0_16E4307DCC419505_1229*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6D1FA31AB5157B08_Class_1_658A13DA6DF2BF3D___c_TypeDefinitionIndex)->GetStaticField(0xD720);
	}
	static ::System::Func_2<::Class_0_16E4307DCC419505_1229*, ::System::Boolean>** StaticGet___9__27_0()
	{
		return (::System::Func_2<::Class_0_16E4307DCC419505_1229*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6D1FA31AB5157B08_Class_1_658A13DA6DF2BF3D___c_TypeDefinitionIndex)->GetStaticField(0xD728);
	}
	static ::System::Func_2<::Class_0_16E4307DCC419505_1229*, ::System::Boolean>** StaticGet___9__29_0()
	{
		return (::System::Func_2<::Class_0_16E4307DCC419505_1229*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6D1FA31AB5157B08_Class_1_658A13DA6DF2BF3D___c_TypeDefinitionIndex)->GetStaticField(0xD730);
	}
	static ::Class_2_6D1FA31AB5157B08_Class_1_658A13DA6DF2BF3D___c** StaticGet___9()
	{
		return (::Class_2_6D1FA31AB5157B08_Class_1_658A13DA6DF2BF3D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6D1FA31AB5157B08_Class_1_658A13DA6DF2BF3D___c_TypeDefinitionIndex)->GetStaticField(0xD738);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_6D1FA31AB5157B08_CLASS_1_658A13DA6DF2BF3D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D1FA31AB5157B08_CLASS_1_658A13DA6DF2BF3D___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _Buttons_b__27_0(::Class_0_16E4307DCC419505_1229* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_1229*))((::PBYTE)hIl2Cpp + CLASS_2_6D1FA31AB5157B08_CLASS_1_658A13DA6DF2BF3D___C__BUTTONS_B__27_0_OFFSET))(this, a1);
	}

	::System::Boolean _AllButtons_b__29_0(::Class_0_16E4307DCC419505_1229* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_1229*))((::PBYTE)hIl2Cpp + CLASS_2_6D1FA31AB5157B08_CLASS_1_658A13DA6DF2BF3D___C__ALLBUTTONS_B__29_0_OFFSET))(this, a1);
	}

	::System::Boolean _GetAllActiveButtons_b__45_0(::Class_0_16E4307DCC419505_1229* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_1229*))((::PBYTE)hIl2Cpp + CLASS_2_6D1FA31AB5157B08_CLASS_1_658A13DA6DF2BF3D___C__GETALLACTIVEBUTTONS_B__45_0_OFFSET))(this, a1);
	}
};
