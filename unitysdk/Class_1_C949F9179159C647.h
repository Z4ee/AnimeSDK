#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_23A3535C3AD26D5F.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_C84A84118567060F;
class Class_1_D8BF25BB97CB2B9D;
namespace RPGTools::Octree::Generation { class OctreeAreaData; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_C949F9179159C647_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCD2EBC0)
#define CLASS_1_C949F9179159C647_METHOD_1_5115819E22315537_OFFSET UNITYSDK_OFFSET(0xCD2EFF0)
#define CLASS_1_C949F9179159C647_METHOD_1_903A8CA38EB171DB_OFFSET UNITYSDK_OFFSET(0xCD2EC70)
#define CLASS_1_C949F9179159C647_METHOD_1_C1FE64DAEC64B939_OFFSET UNITYSDK_OFFSET(0xCD2F130)
#define CLASS_1_C949F9179159C647_METHOD_1_FEA2223BFAF77F8B_OFFSET UNITYSDK_OFFSET(0xCD2EE10)
#define CLASS_1_C949F9179159C647__CTOR_OFFSET UNITYSDK_OFFSET(0xCD2EA60)

inline static constexpr unsigned int Class_1_C949F9179159C647_TypeDefinitionIndex = 45533;

class Class_1_C949F9179159C647 : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_D8BF25BB97CB2B9D*>* Field_1_0; // 0x10

	::System::Void _ctor(::Class_1_C84A84118567060F* a1, ::Il2CppArray<::RPGTools::Octree::Generation::OctreeAreaData*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C84A84118567060F*, ::Il2CppArray<::RPGTools::Octree::Generation::OctreeAreaData*>*))((::PBYTE)hIl2Cpp + CLASS_1_C949F9179159C647__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C949F9179159C647_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_903A8CA38EB171DB(::Struct_2_23A3535C3AD26D5F a1, ::Struct_2_23A3535C3AD26D5F a2, ::System::Single& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_23A3535C3AD26D5F, ::Struct_2_23A3535C3AD26D5F, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_C949F9179159C647_METHOD_1_903A8CA38EB171DB_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_FEA2223BFAF77F8B(::Struct_2_23A3535C3AD26D5F a1, ::Struct_2_23A3535C3AD26D5F a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_23A3535C3AD26D5F, ::Struct_2_23A3535C3AD26D5F, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_C949F9179159C647_METHOD_1_FEA2223BFAF77F8B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_5115819E22315537(::Struct_2_23A3535C3AD26D5F a1, ::Struct_2_23A3535C3AD26D5F a2, ::Struct_2_23A3535C3AD26D5F a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_23A3535C3AD26D5F, ::Struct_2_23A3535C3AD26D5F, ::Struct_2_23A3535C3AD26D5F))((::PBYTE)hIl2Cpp + CLASS_1_C949F9179159C647_METHOD_1_5115819E22315537_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::IEnumerable_1<::Struct_2_23A3535C3AD26D5F>* Method_1_C1FE64DAEC64B939(::Struct_2_23A3535C3AD26D5F a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Struct_2_23A3535C3AD26D5F>*(*)(::PVOID, ::Struct_2_23A3535C3AD26D5F))((::PBYTE)hIl2Cpp + CLASS_1_C949F9179159C647_METHOD_1_C1FE64DAEC64B939_OFFSET))(this, a1);
	}
};
