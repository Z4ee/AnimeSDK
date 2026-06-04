#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B66C1067C0468FBB;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_3_635AA880DA3F1E42_2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13AA4CF0)
#define CLASS_3_635AA880DA3F1E42_2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13AA4D30)
#define CLASS_3_635AA880DA3F1E42_2___C___TRYAPPLY_B__0_0_OFFSET UNITYSDK_OFFSET(0x13AA4D40)

inline static constexpr unsigned int Class_3_635AA880DA3F1E42_2___c_TypeDefinitionIndex = 72004;

class Class_3_635AA880DA3F1E42_2___c : public ::System::Object
{
public:
	static ::Class_3_635AA880DA3F1E42_2___c** StaticGet___9()
	{
		return (::Class_3_635AA880DA3F1E42_2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_635AA880DA3F1E42_2___c_TypeDefinitionIndex)->GetStaticField(0x59680);
	}
	static ::System::Func_2<::Class_2_B66C1067C0468FBB*, ::System::Int32>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::Class_2_B66C1067C0468FBB*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_635AA880DA3F1E42_2___c_TypeDefinitionIndex)->GetStaticField(0x59688);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_635AA880DA3F1E42_2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_635AA880DA3F1E42_2___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __TryApply_b__0_0(::Class_2_B66C1067C0468FBB* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_B66C1067C0468FBB*))((::PBYTE)hIl2Cpp + CLASS_3_635AA880DA3F1E42_2___C___TRYAPPLY_B__0_0_OFFSET))(this, a1);
	}
};
