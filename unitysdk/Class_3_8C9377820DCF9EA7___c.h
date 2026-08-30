#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B66C1067C0468FBB;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_3_8C9377820DCF9EA7___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A80B1C0)
#define CLASS_3_8C9377820DCF9EA7___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A80B200)
#define CLASS_3_8C9377820DCF9EA7___C___REORDER_B__5_0_OFFSET UNITYSDK_OFFSET(0x1A80B210)

inline static constexpr unsigned int Class_3_8C9377820DCF9EA7___c_TypeDefinitionIndex = 77017;

class Class_3_8C9377820DCF9EA7___c : public ::System::Object
{
public:
	static ::Class_3_8C9377820DCF9EA7___c** StaticGet___9()
	{
		return (::Class_3_8C9377820DCF9EA7___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_8C9377820DCF9EA7___c_TypeDefinitionIndex)->GetStaticField(0xBE00);
	}
	static ::System::Comparison_1<::Class_2_B66C1067C0468FBB*>** StaticGet___9__5_0()
	{
		return (::System::Comparison_1<::Class_2_B66C1067C0468FBB*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_8C9377820DCF9EA7___c_TypeDefinitionIndex)->GetStaticField(0xBE08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_8C9377820DCF9EA7___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8C9377820DCF9EA7___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __ReOrder_b__5_0(::Class_2_B66C1067C0468FBB* a1, ::Class_2_B66C1067C0468FBB* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_B66C1067C0468FBB*, ::Class_2_B66C1067C0468FBB*))((::PBYTE)hIl2Cpp + CLASS_3_8C9377820DCF9EA7___C___REORDER_B__5_0_OFFSET))(this, a1, a2);
	}
};
