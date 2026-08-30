#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B66C1067C0468FBB;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_3_DCB8C1A296A92CEA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A8CA590)
#define CLASS_3_DCB8C1A296A92CEA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8CA5D0)
#define CLASS_3_DCB8C1A296A92CEA___C___TRYAPPLY_B__0_0_OFFSET UNITYSDK_OFFSET(0x1A8CA5E0)

inline static constexpr unsigned int Class_3_DCB8C1A296A92CEA___c_TypeDefinitionIndex = 77013;

class Class_3_DCB8C1A296A92CEA___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_2_B66C1067C0468FBB*, ::System::Int32>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::Class_2_B66C1067C0468FBB*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_DCB8C1A296A92CEA___c_TypeDefinitionIndex)->GetStaticField(0x5F060);
	}
	static ::Class_3_DCB8C1A296A92CEA___c** StaticGet___9()
	{
		return (::Class_3_DCB8C1A296A92CEA___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_DCB8C1A296A92CEA___c_TypeDefinitionIndex)->GetStaticField(0x5F068);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_DCB8C1A296A92CEA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DCB8C1A296A92CEA___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __TryApply_b__0_0(::Class_2_B66C1067C0468FBB* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_B66C1067C0468FBB*))((::PBYTE)hIl2Cpp + CLASS_3_DCB8C1A296A92CEA___C___TRYAPPLY_B__0_0_OFFSET))(this, a1);
	}
};
