#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_331;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_864CD1DCCE291846___C_METHOD_1_6BDE84DE490D736B_OFFSET UNITYSDK_OFFSET(0x16BB5490)
#define CLASS_1_864CD1DCCE291846___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16BB5440)
#define CLASS_1_864CD1DCCE291846___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16BB5480)

inline static constexpr unsigned int Class_1_864CD1DCCE291846___c_TypeDefinitionIndex = 11106;

class Class_1_864CD1DCCE291846___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_2_208CC9941471731A_331*>** StaticGet___9__9_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_331*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_864CD1DCCE291846___c_TypeDefinitionIndex)->GetStaticField(0x8CD0);
	}
	static ::Class_1_864CD1DCCE291846___c** StaticGet___9()
	{
		return (::Class_1_864CD1DCCE291846___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_864CD1DCCE291846___c_TypeDefinitionIndex)->GetStaticField(0x8CD8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_864CD1DCCE291846___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_864CD1DCCE291846___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_6BDE84DE490D736B(::Class_2_208CC9941471731A_331* a1, ::Class_2_208CC9941471731A_331* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_331*, ::Class_2_208CC9941471731A_331*))((::PBYTE)hIl2Cpp + CLASS_1_864CD1DCCE291846___C_METHOD_1_6BDE84DE490D736B_OFFSET))(this, a1, a2);
	}
};
