#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_821;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_9C1E62138498FB1C___C_METHOD_1_CD1020B1B659233E_OFFSET UNITYSDK_OFFSET(0x14B44900)
#define CLASS_1_9C1E62138498FB1C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14B448B0)
#define CLASS_1_9C1E62138498FB1C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14B448F0)

inline static constexpr unsigned int Class_1_9C1E62138498FB1C___c_TypeDefinitionIndex = 17635;

class Class_1_9C1E62138498FB1C___c : public ::System::Object
{
public:
	static ::Class_1_9C1E62138498FB1C___c** StaticGet___9()
	{
		return (::Class_1_9C1E62138498FB1C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9C1E62138498FB1C___c_TypeDefinitionIndex)->GetStaticField(0x7A70);
	}
	static ::System::Comparison_1<::Class_2_208CC9941471731A_821*>** StaticGet___9__17_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_821*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9C1E62138498FB1C___c_TypeDefinitionIndex)->GetStaticField(0x7A78);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9C1E62138498FB1C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C1E62138498FB1C___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_CD1020B1B659233E(::Class_2_208CC9941471731A_821* a1, ::Class_2_208CC9941471731A_821* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_821*, ::Class_2_208CC9941471731A_821*))((::PBYTE)hIl2Cpp + CLASS_1_9C1E62138498FB1C___C_METHOD_1_CD1020B1B659233E_OFFSET))(this, a1, a2);
	}
};
