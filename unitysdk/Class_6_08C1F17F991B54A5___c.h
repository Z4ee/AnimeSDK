#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_1125;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_6_08C1F17F991B54A5___C_METHOD_1_6BDE84DE490D736B_OFFSET UNITYSDK_OFFSET(0x1287DB70)
#define CLASS_6_08C1F17F991B54A5___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1287DB20)
#define CLASS_6_08C1F17F991B54A5___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1287DB60)

inline static constexpr unsigned int Class_6_08C1F17F991B54A5___c_TypeDefinitionIndex = 55964;

class Class_6_08C1F17F991B54A5___c : public ::System::Object
{
public:
	static ::Class_6_08C1F17F991B54A5___c** StaticGet___9()
	{
		return (::Class_6_08C1F17F991B54A5___c**)Il2CppClass::FromTypeDefinitionIndex(Class_6_08C1F17F991B54A5___c_TypeDefinitionIndex)->GetStaticField(0x40390);
	}
	static ::System::Comparison_1<::Class_2_208CC9941471731A_1125*>** StaticGet___9__34_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_1125*>**)Il2CppClass::FromTypeDefinitionIndex(Class_6_08C1F17F991B54A5___c_TypeDefinitionIndex)->GetStaticField(0x40398);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_6_08C1F17F991B54A5___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_6_08C1F17F991B54A5___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_6BDE84DE490D736B(::Class_2_208CC9941471731A_1125* a1, ::Class_2_208CC9941471731A_1125* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_1125*, ::Class_2_208CC9941471731A_1125*))((::PBYTE)hIl2Cpp + CLASS_6_08C1F17F991B54A5___C_METHOD_1_6BDE84DE490D736B_OFFSET))(this, a1, a2);
	}
};
