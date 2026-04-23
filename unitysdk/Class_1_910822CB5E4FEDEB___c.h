#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_910822CB5E4FEDEB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x94FC0C0)
#define CLASS_1_910822CB5E4FEDEB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x94FC100)
#define CLASS_1_910822CB5E4FEDEB___C__GETEDGEINDEXBYRAY_B__14_0_OFFSET UNITYSDK_OFFSET(0x94FC110)

inline static constexpr unsigned int Class_1_910822CB5E4FEDEB___c_TypeDefinitionIndex = 57350;

class Class_1_910822CB5E4FEDEB___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::System::ValueTuple_2<::System::Double, ::System::Int32>>** StaticGet___9__14_0()
	{
		return (::System::Comparison_1<::System::ValueTuple_2<::System::Double, ::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_910822CB5E4FEDEB___c_TypeDefinitionIndex)->GetStaticField(0x53050);
	}
	static ::Class_1_910822CB5E4FEDEB___c** StaticGet___9()
	{
		return (::Class_1_910822CB5E4FEDEB___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_910822CB5E4FEDEB___c_TypeDefinitionIndex)->GetStaticField(0x53058);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_910822CB5E4FEDEB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_910822CB5E4FEDEB___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _GetEdgeIndexByRay_b__14_0(::System::ValueTuple_2<::System::Double, ::System::Int32> u, ::System::ValueTuple_2<::System::Double, ::System::Int32> v)
	{
		return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::Double, ::System::Int32>, ::System::ValueTuple_2<::System::Double, ::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_1_910822CB5E4FEDEB___C__GETEDGEINDEXBYRAY_B__14_0_OFFSET))(this, u, v);
	}
};
