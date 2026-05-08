#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_4_7B5A65E248106C68;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_B1000AF88AC3CB3D___C_METHOD_1_27424AB0CF1C40D2_OFFSET UNITYSDK_OFFSET(0x12BB4E20)
#define CLASS_3_B1000AF88AC3CB3D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12BB4DD0)
#define CLASS_3_B1000AF88AC3CB3D___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12BB4E10)

inline static constexpr unsigned int Class_3_B1000AF88AC3CB3D___c_TypeDefinitionIndex = 40828;

class Class_3_B1000AF88AC3CB3D___c : public ::System::Object
{
public:
	static ::Class_3_B1000AF88AC3CB3D___c** StaticGet___9()
	{
		return (::Class_3_B1000AF88AC3CB3D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_B1000AF88AC3CB3D___c_TypeDefinitionIndex)->GetStaticField(0x3D5D0);
	}
	static ::System::Action_1<::Class_4_7B5A65E248106C68*>** StaticGet___9__5_0()
	{
		return (::System::Action_1<::Class_4_7B5A65E248106C68*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_B1000AF88AC3CB3D___c_TypeDefinitionIndex)->GetStaticField(0x3D5D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_B1000AF88AC3CB3D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B1000AF88AC3CB3D___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_27424AB0CF1C40D2(::Class_4_7B5A65E248106C68* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_7B5A65E248106C68*))((::PBYTE)hIl2Cpp + CLASS_3_B1000AF88AC3CB3D___C_METHOD_1_27424AB0CF1C40D2_OFFSET))(this, a1);
	}
};
