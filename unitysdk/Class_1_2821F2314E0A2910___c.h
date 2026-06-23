#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_702;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_2821F2314E0A2910___C_METHOD_1_6BDE84DE490D736B_OFFSET UNITYSDK_OFFSET(0x17EA1640)
#define CLASS_1_2821F2314E0A2910___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17EA15F0)
#define CLASS_1_2821F2314E0A2910___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17EA1630)

inline static constexpr unsigned int Class_1_2821F2314E0A2910___c_TypeDefinitionIndex = 13418;

class Class_1_2821F2314E0A2910___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_2_208CC9941471731A_702*>** StaticGet___9__20_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_702*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2821F2314E0A2910___c_TypeDefinitionIndex)->GetStaticField(0x7A30);
	}
	static ::Class_1_2821F2314E0A2910___c** StaticGet___9()
	{
		return (::Class_1_2821F2314E0A2910___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2821F2314E0A2910___c_TypeDefinitionIndex)->GetStaticField(0x7A38);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2821F2314E0A2910___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2821F2314E0A2910___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_6BDE84DE490D736B(::Class_2_208CC9941471731A_702* a1, ::Class_2_208CC9941471731A_702* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_702*, ::Class_2_208CC9941471731A_702*))((::PBYTE)hIl2Cpp + CLASS_1_2821F2314E0A2910___C_METHOD_1_6BDE84DE490D736B_OFFSET))(this, a1, a2);
	}
};
