#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IRI2/ClusterMeshLodInfo.h"
#include "unitysdk/Struct_2_CC45B4503679E14E_41.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/ClusterIRIType.h"
#include "unitysdk/UnityEngine/ClusterMeshLodInfo.h"
#include "unitysdk/UnityEngine/IRIClusterVolumeInfo.h"
#include "unitysdk/UnityEngine/MeshClusterInfo.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_0AAA29E827EB555D_Class_1_8E7B41901C628A4A;
class Class_1_0AAA29E827EB555D_Class_1_EC3ABC8DB6869895;
namespace IRIClusterBuilder { class IRI2VolumeTemplate; }
namespace RPG::Client::CityCarFlow { class MonoCityCarIRI; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RPGInstancedItemClusterVolumeManager; }

#define CLASS_1_0AAA29E827EB555D_CLASS_1_6FC9191852D532C8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13A81AA0)
#define CLASS_1_0AAA29E827EB555D_CLASS_1_6FC9191852D532C8_METHOD_1_0E3B5B9C3CF9E9C6_OFFSET UNITYSDK_OFFSET(0x13A87F90)
#define CLASS_1_0AAA29E827EB555D_CLASS_1_6FC9191852D532C8_METHOD_1_0F967808B2B27D34_OFFSET UNITYSDK_OFFSET(0x13A83CA0)
#define CLASS_1_0AAA29E827EB555D_CLASS_1_6FC9191852D532C8_METHOD_1_19561A6D289184B5_OFFSET UNITYSDK_OFFSET(0x13A83BE0)
#define CLASS_1_0AAA29E827EB555D_CLASS_1_6FC9191852D532C8_METHOD_1_1DE5133A0A6F1CCB_OFFSET UNITYSDK_OFFSET(0x13A86590)
#define CLASS_1_0AAA29E827EB555D_CLASS_1_6FC9191852D532C8_METHOD_1_4F5A815C01557BC4_OFFSET UNITYSDK_OFFSET(0x13A8A830)
#define CLASS_1_0AAA29E827EB555D_CLASS_1_6FC9191852D532C8_METHOD_1_535079AAF5EDFF62_1_OFFSET UNITYSDK_OFFSET(0x13A834F0)
#define CLASS_1_0AAA29E827EB555D_CLASS_1_6FC9191852D532C8_METHOD_1_535079AAF5EDFF62_OFFSET UNITYSDK_OFFSET(0x13A83800)
#define CLASS_1_0AAA29E827EB555D_CLASS_1_6FC9191852D532C8_METHOD_1_5C549BF7442375BC_OFFSET UNITYSDK_OFFSET(0x13A87DC0)
#define CLASS_1_0AAA29E827EB555D_CLASS_1_6FC9191852D532C8_METHOD_1_6035B492D8C37C0A_OFFSET UNITYSDK_OFFSET(0x13A89430)
#define CLASS_1_0AAA29E827EB555D_CLASS_1_6FC9191852D532C8_METHOD_1_8C37834551CDAFC7_OFFSET UNITYSDK_OFFSET(0x13A889F0)
#define CLASS_1_0AAA29E827EB555D_CLASS_1_6FC9191852D532C8_METHOD_1_D691739096F9B5FF_OFFSET UNITYSDK_OFFSET(0x13A88FC0)
#define CLASS_1_0AAA29E827EB555D_CLASS_1_6FC9191852D532C8_METHOD_1_E3F450A9E0E6DA1F_OFFSET UNITYSDK_OFFSET(0x13A87E40)
#define CLASS_1_0AAA29E827EB555D_CLASS_1_6FC9191852D532C8_METHOD_1_FF3AA5CCDC99D357_OFFSET UNITYSDK_OFFSET(0x13A89230)
#define CLASS_1_0AAA29E827EB555D_CLASS_1_6FC9191852D532C8__CTOR_OFFSET UNITYSDK_OFFSET(0x13A80CC0)

inline static constexpr unsigned int Class_1_0AAA29E827EB555D_Class_1_6FC9191852D532C8_TypeDefinitionIndex = 74364;

class Class_1_0AAA29E827EB555D_Class_1_6FC9191852D532C8 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	::Struct_2_CC45B4503679E14E_41 Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Unity::Collections::NativeArray_1<::UnityEngine::MeshClusterInfo>>* Field_1_3; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Unity::Collections::NativeArray_1<::System::UInt32>>* Field_1_4; // 0x28
	::System::Collections::Generic::Dictionary_2<::IRIClusterBuilder::IRI2VolumeTemplate*, ::System::Collections::Generic::List_1<::Unity::Collections::NativeArray_1<::UnityEngine::ClusterMeshLodInfo>>*>* Field_1_5; // 0x30
	::System::Collections::Generic::Dictionary_2<::IRIClusterBuilder::IRI2VolumeTemplate*, ::Unity::Collections::NativeArray_1<::UnityEngine::ClusterIRIType>>* Field_1_6; // 0x38
	::System::Collections::Generic::Dictionary_2<::IRIClusterBuilder::IRI2VolumeTemplate*, ::System::Collections::Generic::List_1<::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>>*>* Field_1_7; // 0x40
	::System::Collections::Generic::Dictionary_2<::IRIClusterBuilder::IRI2VolumeTemplate*, ::System::Collections::Generic::HashSet_1<::System::UInt64>*>* Field_1_8; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>>* Field_1_9; // 0x50
	::System::Collections::Generic::Dictionary_2<::Class_1_0AAA29E827EB555D_Class_1_8E7B41901C628A4A*, ::Class_1_0AAA29E827EB555D_Class_1_EC3ABC8DB6869895*>* Field_1_10; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Int32>* Field_1_11; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::UnityEngine::ClusterMeshLodInfo>* Field_1_12; // 0x68
	::System::Collections::Generic::Dictionary_2<::IRIClusterBuilder::IRI2VolumeTemplate*, ::UnityEngine::IRIClusterVolumeInfo>* Field_1_13; // 0x70
	::UnityEngine::RPGInstancedItemClusterVolumeManager* Field_1_14; // 0x78

	::System::Void _ctor(::RPG::Client::CityCarFlow::MonoCityCarIRI* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CityCarFlow::MonoCityCarIRI*))((::PBYTE)hIl2Cpp + CLASS_1_0AAA29E827EB555D_CLASS_1_6FC9191852D532C8__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_5C549BF7442375BC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0AAA29E827EB555D_CLASS_1_6FC9191852D532C8_METHOD_1_5C549BF7442375BC_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AAA29E827EB555D_CLASS_1_6FC9191852D532C8_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_E3F450A9E0E6DA1F(::IRIClusterBuilder::IRI2VolumeTemplate* a1)
	{
		return ((::System::Void(*)(::PVOID, ::IRIClusterBuilder::IRI2VolumeTemplate*))((::PBYTE)hIl2Cpp + CLASS_1_0AAA29E827EB555D_CLASS_1_6FC9191852D532C8_METHOD_1_E3F450A9E0E6DA1F_OFFSET))(this, a1);
	}

	::System::Void Method_1_8C37834551CDAFC7(::IRIClusterBuilder::IRI2VolumeTemplate* a1)
	{
		return ((::System::Void(*)(::PVOID, ::IRIClusterBuilder::IRI2VolumeTemplate*))((::PBYTE)hIl2Cpp + CLASS_1_0AAA29E827EB555D_CLASS_1_6FC9191852D532C8_METHOD_1_8C37834551CDAFC7_OFFSET))(this, a1);
	}

	::System::Void Method_1_19561A6D289184B5(::Class_1_0AAA29E827EB555D_Class_1_8E7B41901C628A4A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AAA29E827EB555D_Class_1_8E7B41901C628A4A*))((::PBYTE)hIl2Cpp + CLASS_1_0AAA29E827EB555D_CLASS_1_6FC9191852D532C8_METHOD_1_19561A6D289184B5_OFFSET))(this, a1);
	}

	::System::Void Method_1_0F967808B2B27D34(::Class_1_0AAA29E827EB555D_Class_1_8E7B41901C628A4A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AAA29E827EB555D_Class_1_8E7B41901C628A4A*))((::PBYTE)hIl2Cpp + CLASS_1_0AAA29E827EB555D_CLASS_1_6FC9191852D532C8_METHOD_1_0F967808B2B27D34_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1DE5133A0A6F1CCB(::IRIClusterBuilder::IRI2VolumeTemplate* a1, ::UnityEngine::IRIClusterVolumeInfo& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::IRIClusterBuilder::IRI2VolumeTemplate*, ::UnityEngine::IRIClusterVolumeInfo&))((::PBYTE)hIl2Cpp + CLASS_1_0AAA29E827EB555D_CLASS_1_6FC9191852D532C8_METHOD_1_1DE5133A0A6F1CCB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_535079AAF5EDFF62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AAA29E827EB555D_CLASS_1_6FC9191852D532C8_METHOD_1_535079AAF5EDFF62_OFFSET))(this);
	}

	::System::Void Method_1_535079AAF5EDFF62_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AAA29E827EB555D_CLASS_1_6FC9191852D532C8_METHOD_1_535079AAF5EDFF62_1_OFFSET))(this);
	}

	::System::Void Method_1_FF3AA5CCDC99D357(::IRIClusterBuilder::IRI2VolumeTemplate* a1, ::System::UInt64 a2)
	{
		return ((::System::Void(*)(::PVOID, ::IRIClusterBuilder::IRI2VolumeTemplate*, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_0AAA29E827EB555D_CLASS_1_6FC9191852D532C8_METHOD_1_FF3AA5CCDC99D357_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D691739096F9B5FF(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_0AAA29E827EB555D_CLASS_1_6FC9191852D532C8_METHOD_1_D691739096F9B5FF_OFFSET))(this, a1);
	}

	::UnityEngine::ClusterMeshLodInfo Method_1_6035B492D8C37C0A(::IRI2::ClusterMeshLodInfo a1)
	{
		return ((::UnityEngine::ClusterMeshLodInfo(*)(::PVOID, ::IRI2::ClusterMeshLodInfo))((::PBYTE)hIl2Cpp + CLASS_1_0AAA29E827EB555D_CLASS_1_6FC9191852D532C8_METHOD_1_6035B492D8C37C0A_OFFSET))(this, a1);
	}

	::UnityEngine::IRIClusterVolumeInfo Method_1_0E3B5B9C3CF9E9C6(::IRIClusterBuilder::IRI2VolumeTemplate* a1)
	{
		return ((::UnityEngine::IRIClusterVolumeInfo(*)(::PVOID, ::IRIClusterBuilder::IRI2VolumeTemplate*))((::PBYTE)hIl2Cpp + CLASS_1_0AAA29E827EB555D_CLASS_1_6FC9191852D532C8_METHOD_1_0E3B5B9C3CF9E9C6_OFFSET))(this, a1);
	}

	::UnityEngine::RPGInstancedItemClusterVolumeManager* Method_1_4F5A815C01557BC4()
	{
		return ((::UnityEngine::RPGInstancedItemClusterVolumeManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AAA29E827EB555D_CLASS_1_6FC9191852D532C8_METHOD_1_4F5A815C01557BC4_OFFSET))(this);
	}
};
