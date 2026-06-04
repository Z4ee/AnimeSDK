#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B66C1067C0468FBB;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_3_8350EB57484CE308___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAB10B10)
#define CLASS_3_8350EB57484CE308___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAB10B50)
#define CLASS_3_8350EB57484CE308___C__SELECTENTITYIDS_B__4_0_OFFSET UNITYSDK_OFFSET(0xAB10B60)

inline static constexpr unsigned int Class_3_8350EB57484CE308___c_TypeDefinitionIndex = 72150;

class Class_3_8350EB57484CE308___c : public ::System::Object
{
public:
	static ::Class_3_8350EB57484CE308___c** StaticGet___9()
	{
		return (::Class_3_8350EB57484CE308___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_8350EB57484CE308___c_TypeDefinitionIndex)->GetStaticField(0x77D0);
	}
	static ::System::Func_2<::Class_2_B66C1067C0468FBB*, ::System::Int32>** StaticGet___9__4_0()
	{
		return (::System::Func_2<::Class_2_B66C1067C0468FBB*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_8350EB57484CE308___c_TypeDefinitionIndex)->GetStaticField(0x77D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_8350EB57484CE308___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8350EB57484CE308___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _SelectEntityIDs_b__4_0(::Class_2_B66C1067C0468FBB* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_B66C1067C0468FBB*))((::PBYTE)hIl2Cpp + CLASS_3_8350EB57484CE308___C__SELECTENTITYIDS_B__4_0_OFFSET))(this, a1);
	}
};
