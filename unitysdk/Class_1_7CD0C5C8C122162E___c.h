#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_757;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_7CD0C5C8C122162E___C_METHOD_1_6BDE84DE490D736B_OFFSET UNITYSDK_OFFSET(0x165B02E0)
#define CLASS_1_7CD0C5C8C122162E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x165B0290)
#define CLASS_1_7CD0C5C8C122162E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x165B02D0)

inline static constexpr unsigned int Class_1_7CD0C5C8C122162E___c_TypeDefinitionIndex = 14807;

class Class_1_7CD0C5C8C122162E___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_2_208CC9941471731A_757*>** StaticGet___9__7_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_757*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7CD0C5C8C122162E___c_TypeDefinitionIndex)->GetStaticField(0x8DB0);
	}
	static ::Class_1_7CD0C5C8C122162E___c** StaticGet___9()
	{
		return (::Class_1_7CD0C5C8C122162E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7CD0C5C8C122162E___c_TypeDefinitionIndex)->GetStaticField(0x8DB8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7CD0C5C8C122162E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7CD0C5C8C122162E___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_6BDE84DE490D736B(::Class_2_208CC9941471731A_757* a1, ::Class_2_208CC9941471731A_757* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_757*, ::Class_2_208CC9941471731A_757*))((::PBYTE)hIl2Cpp + CLASS_1_7CD0C5C8C122162E___C_METHOD_1_6BDE84DE490D736B_OFFSET))(this, a1, a2);
	}
};
