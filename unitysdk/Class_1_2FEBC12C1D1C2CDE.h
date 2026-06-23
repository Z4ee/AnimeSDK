#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0A5E7D3D44B7B761;
template <typename T> class Class_1_4370A311F770E7F6;

#define CLASS_1_2FEBC12C1D1C2CDE_METHOD_1_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0x1E13B6A0)
#define CLASS_1_2FEBC12C1D1C2CDE_METHOD_1_790C9B0898894FC9_OFFSET UNITYSDK_OFFSET(0x1E13B750)
#define CLASS_1_2FEBC12C1D1C2CDE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E13B640)

inline static constexpr unsigned int Class_1_2FEBC12C1D1C2CDE_TypeDefinitionIndex = 29086;

class Class_1_2FEBC12C1D1C2CDE : public ::System::Object
{
public:
	static ::Class_1_4370A311F770E7F6<::Class_1_0A5E7D3D44B7B761*>** StaticGet_Field_1_0()
	{
		return (::Class_1_4370A311F770E7F6<::Class_1_0A5E7D3D44B7B761*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2FEBC12C1D1C2CDE_TypeDefinitionIndex)->GetStaticField(0x23500);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2FEBC12C1D1C2CDE__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_17BD30EFE8176014()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2FEBC12C1D1C2CDE_METHOD_1_17BD30EFE8176014_OFFSET))();
	}

	static ::Class_1_0A5E7D3D44B7B761* Method_1_790C9B0898894FC9()
	{
		return ((::Class_1_0A5E7D3D44B7B761*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2FEBC12C1D1C2CDE_METHOD_1_790C9B0898894FC9_OFFSET))();
	}
};
