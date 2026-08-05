#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_EF2EC4D8F28BA1A6;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_2086DAEC135013BE___C_METHOD_1_43C1F46AF7E34CCB_OFFSET UNITYSDK_OFFSET(0x12FA11B0)
#define CLASS_2_2086DAEC135013BE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12FA1160)
#define CLASS_2_2086DAEC135013BE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12FA11A0)

inline static constexpr unsigned int Class_2_2086DAEC135013BE___c_TypeDefinitionIndex = 76052;

class Class_2_2086DAEC135013BE___c : public ::System::Object
{
public:
	static ::Class_2_2086DAEC135013BE___c** StaticGet___9()
	{
		return (::Class_2_2086DAEC135013BE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2086DAEC135013BE___c_TypeDefinitionIndex)->GetStaticField(0x48000);
	}
	static ::System::Func_2<::Class_2_EF2EC4D8F28BA1A6*, ::Class_2_EF2EC4D8F28BA1A6*>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::Class_2_EF2EC4D8F28BA1A6*, ::Class_2_EF2EC4D8F28BA1A6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2086DAEC135013BE___c_TypeDefinitionIndex)->GetStaticField(0x48008);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_2086DAEC135013BE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2086DAEC135013BE___C__CTOR_OFFSET))(this);
	}

	::Class_2_EF2EC4D8F28BA1A6* Method_1_43C1F46AF7E34CCB(::Class_2_EF2EC4D8F28BA1A6* a1)
	{
		return ((::Class_2_EF2EC4D8F28BA1A6*(*)(::PVOID, ::Class_2_EF2EC4D8F28BA1A6*))((::PBYTE)hIl2Cpp + CLASS_2_2086DAEC135013BE___C_METHOD_1_43C1F46AF7E34CCB_OFFSET))(this, a1);
	}
};
