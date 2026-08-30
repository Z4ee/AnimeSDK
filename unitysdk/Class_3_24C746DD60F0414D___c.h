#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B66C1067C0468FBB;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_3_24C746DD60F0414D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1602FD10)
#define CLASS_3_24C746DD60F0414D___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1602FD50)
#define CLASS_3_24C746DD60F0414D___C___TRYAPPLY_B__4_0_OFFSET UNITYSDK_OFFSET(0x1602FD60)

inline static constexpr unsigned int Class_3_24C746DD60F0414D___c_TypeDefinitionIndex = 76998;

class Class_3_24C746DD60F0414D___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_2_B66C1067C0468FBB*>** StaticGet___9__4_0()
	{
		return (::System::Comparison_1<::Class_2_B66C1067C0468FBB*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_24C746DD60F0414D___c_TypeDefinitionIndex)->GetStaticField(0x51D90);
	}
	static ::Class_3_24C746DD60F0414D___c** StaticGet___9()
	{
		return (::Class_3_24C746DD60F0414D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_24C746DD60F0414D___c_TypeDefinitionIndex)->GetStaticField(0x51D98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_24C746DD60F0414D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_24C746DD60F0414D___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __TryApply_b__4_0(::Class_2_B66C1067C0468FBB* a1, ::Class_2_B66C1067C0468FBB* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_B66C1067C0468FBB*, ::Class_2_B66C1067C0468FBB*))((::PBYTE)hIl2Cpp + CLASS_3_24C746DD60F0414D___C___TRYAPPLY_B__4_0_OFFSET))(this, a1, a2);
	}
};
