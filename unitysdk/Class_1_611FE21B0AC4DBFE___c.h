#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_779;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_611FE21B0AC4DBFE___C_METHOD_1_6BDE84DE490D736B_OFFSET UNITYSDK_OFFSET(0x165DDA50)
#define CLASS_1_611FE21B0AC4DBFE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x165DDA00)
#define CLASS_1_611FE21B0AC4DBFE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x165DDA40)

inline static constexpr unsigned int Class_1_611FE21B0AC4DBFE___c_TypeDefinitionIndex = 17631;

class Class_1_611FE21B0AC4DBFE___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_2_208CC9941471731A_779*>** StaticGet___9__11_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_779*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611FE21B0AC4DBFE___c_TypeDefinitionIndex)->GetStaticField(0x8E10);
	}
	static ::Class_1_611FE21B0AC4DBFE___c** StaticGet___9()
	{
		return (::Class_1_611FE21B0AC4DBFE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_611FE21B0AC4DBFE___c_TypeDefinitionIndex)->GetStaticField(0x8E18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_611FE21B0AC4DBFE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_611FE21B0AC4DBFE___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_6BDE84DE490D736B(::Class_2_208CC9941471731A_779* a1, ::Class_2_208CC9941471731A_779* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_779*, ::Class_2_208CC9941471731A_779*))((::PBYTE)hIl2Cpp + CLASS_1_611FE21B0AC4DBFE___C_METHOD_1_6BDE84DE490D736B_OFFSET))(this, a1, a2);
	}
};
