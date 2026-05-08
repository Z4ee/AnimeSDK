#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_14E7CE92E8A3183F;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_C477B7B2D9781D13___C_METHOD_1_6BDE84DE490D736B_OFFSET UNITYSDK_OFFSET(0x146B0180)
#define CLASS_1_C477B7B2D9781D13___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x146B0130)
#define CLASS_1_C477B7B2D9781D13___C__CTOR_OFFSET UNITYSDK_OFFSET(0x146B0170)

inline static constexpr unsigned int Class_1_C477B7B2D9781D13___c_TypeDefinitionIndex = 11367;

class Class_1_C477B7B2D9781D13___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_2_14E7CE92E8A3183F*>** StaticGet___9__14_0()
	{
		return (::System::Comparison_1<::Class_2_14E7CE92E8A3183F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C477B7B2D9781D13___c_TypeDefinitionIndex)->GetStaticField(0x8D60);
	}
	static ::Class_1_C477B7B2D9781D13___c** StaticGet___9()
	{
		return (::Class_1_C477B7B2D9781D13___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C477B7B2D9781D13___c_TypeDefinitionIndex)->GetStaticField(0x8D68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C477B7B2D9781D13___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C477B7B2D9781D13___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_6BDE84DE490D736B(::Class_2_14E7CE92E8A3183F* a1, ::Class_2_14E7CE92E8A3183F* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_14E7CE92E8A3183F*, ::Class_2_14E7CE92E8A3183F*))((::PBYTE)hIl2Cpp + CLASS_1_C477B7B2D9781D13___C_METHOD_1_6BDE84DE490D736B_OFFSET))(this, a1, a2);
	}
};
