#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C85C4DAB350DD5FC_2;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_76214925D12F0D36___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB0CD460)
#define CLASS_1_76214925D12F0D36___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB0CD4A0)
#define CLASS_1_76214925D12F0D36___C___ONCARDUNLOCKSYNC_B__3_2_OFFSET UNITYSDK_OFFSET(0xB0CD4B0)

inline static constexpr unsigned int Class_1_76214925D12F0D36___c_TypeDefinitionIndex = 81077;

class Class_1_76214925D12F0D36___c : public ::System::Object
{
public:
	static ::Class_1_76214925D12F0D36___c** StaticGet___9()
	{
		return (::Class_1_76214925D12F0D36___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_76214925D12F0D36___c_TypeDefinitionIndex)->GetStaticField(0x3CD10);
	}
	static ::System::Func_2<::Class_1_C85C4DAB350DD5FC_2*, ::System::Boolean>** StaticGet___9__3_2()
	{
		return (::System::Func_2<::Class_1_C85C4DAB350DD5FC_2*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_76214925D12F0D36___c_TypeDefinitionIndex)->GetStaticField(0x3CD18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_76214925D12F0D36___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76214925D12F0D36___C__CTOR_OFFSET))(this);
	}

	::System::Boolean __OnCardUnlockSync_b__3_2(::Class_1_C85C4DAB350DD5FC_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C85C4DAB350DD5FC_2*))((::PBYTE)hIl2Cpp + CLASS_1_76214925D12F0D36___C___ONCARDUNLOCKSYNC_B__3_2_OFFSET))(this, a1);
	}
};
