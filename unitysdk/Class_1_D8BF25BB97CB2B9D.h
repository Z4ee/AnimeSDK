#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_23A3535C3AD26D5F.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_C84A84118567060F;
namespace RPGTools::Octree::Generation { class OctreeAreaData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_D8BF25BB97CB2B9D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12849EB0)
#define CLASS_1_D8BF25BB97CB2B9D_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0x12849B60)
#define CLASS_1_D8BF25BB97CB2B9D_METHOD_1_0B5D635C25D77037_OFFSET UNITYSDK_OFFSET(0x12849F50)
#define CLASS_1_D8BF25BB97CB2B9D_METHOD_1_108753DE728A487A_OFFSET UNITYSDK_OFFSET(0x1284A070)
#define CLASS_1_D8BF25BB97CB2B9D_METHOD_1_2D461D9BDD2140F5_OFFSET UNITYSDK_OFFSET(0x12849B70)
#define CLASS_1_D8BF25BB97CB2B9D_METHOD_1_7F2DFCB687CFC9A5_OFFSET UNITYSDK_OFFSET(0x1284A240)
#define CLASS_1_D8BF25BB97CB2B9D_METHOD_1_A750FFD35A32D897_OFFSET UNITYSDK_OFFSET(0x1284A170)
#define CLASS_1_D8BF25BB97CB2B9D_METHOD_1_F3A11A82F954C854_OFFSET UNITYSDK_OFFSET(0x12849FC0)
#define CLASS_1_D8BF25BB97CB2B9D__CTOR_OFFSET UNITYSDK_OFFSET(0x12849C30)

inline static constexpr unsigned int Class_1_D8BF25BB97CB2B9D_TypeDefinitionIndex = 45532;

class Class_1_D8BF25BB97CB2B9D : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Struct_2_23A3535C3AD26D5F, ::UnityEngine::Vector3>* Field_1_1; // 0x10
	::System::Single _Weight_k__BackingField; // 0x18

	::System::Void _ctor(::Class_1_C84A84118567060F* a1, ::RPGTools::Octree::Generation::OctreeAreaData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C84A84118567060F*, ::RPGTools::Octree::Generation::OctreeAreaData*))((::PBYTE)hIl2Cpp + CLASS_1_D8BF25BB97CB2B9D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Single get_Weight()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BF25BB97CB2B9D_GET_WEIGHT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Struct_2_23A3535C3AD26D5F>* Method_1_2D461D9BDD2140F5()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Struct_2_23A3535C3AD26D5F>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BF25BB97CB2B9D_METHOD_1_2D461D9BDD2140F5_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8BF25BB97CB2B9D_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_0B5D635C25D77037(::Struct_2_23A3535C3AD26D5F a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_23A3535C3AD26D5F))((::PBYTE)hIl2Cpp + CLASS_1_D8BF25BB97CB2B9D_METHOD_1_0B5D635C25D77037_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F3A11A82F954C854(::Struct_2_23A3535C3AD26D5F a1, ::Struct_2_23A3535C3AD26D5F a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_23A3535C3AD26D5F, ::Struct_2_23A3535C3AD26D5F))((::PBYTE)hIl2Cpp + CLASS_1_D8BF25BB97CB2B9D_METHOD_1_F3A11A82F954C854_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_108753DE728A487A(::Struct_2_23A3535C3AD26D5F a1, ::Struct_2_23A3535C3AD26D5F a2, ::Struct_2_23A3535C3AD26D5F a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_23A3535C3AD26D5F, ::Struct_2_23A3535C3AD26D5F, ::Struct_2_23A3535C3AD26D5F))((::PBYTE)hIl2Cpp + CLASS_1_D8BF25BB97CB2B9D_METHOD_1_108753DE728A487A_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_A750FFD35A32D897(::Struct_2_23A3535C3AD26D5F a1, ::Struct_2_23A3535C3AD26D5F a2, ::System::Single& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_23A3535C3AD26D5F, ::Struct_2_23A3535C3AD26D5F, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_D8BF25BB97CB2B9D_METHOD_1_A750FFD35A32D897_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_1_7F2DFCB687CFC9A5(::Struct_2_23A3535C3AD26D5F a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Struct_2_23A3535C3AD26D5F))((::PBYTE)hIl2Cpp + CLASS_1_D8BF25BB97CB2B9D_METHOD_1_7F2DFCB687CFC9A5_OFFSET))(this, a1);
	}
};
