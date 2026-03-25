#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IRI2/ClusterMeshLodInfo.h"
#include "unitysdk/Struct_2_0B4DDB75CE25594A_7.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/ClusterIRIType.h"
#include "unitysdk/UnityEngine/ClusterMeshLodInfo.h"
#include "unitysdk/UnityEngine/IRIClusterVolumeInfo.h"
#include "unitysdk/UnityEngine/MeshClusterInfo.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_0AAA29E827EB555D_Class_1_4452B3A96D121692;
class Class_1_0AAA29E827EB555D_Class_1_E767D651C2809599;
namespace IRIClusterBuilder { class IRI2VolumeTemplate; }
namespace RPG::Client::CityCarFlow { class MonoCityCarIRI; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RPGInstancedItemClusterVolumeManager; }

#define CLASS_1_0AAA29E827EB555D_CLASS_1_6FC9191852D532C8_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC4FC980)
#define CLASS_1_0AAA29E827EB555D_CLASS_1_6FC9191852D532C8_METHOD_1_0E3B5B9C3CF9E9C6_OFFSET UNITYSDK_OFFSET(0xC506D90)
#define CLASS_1_0AAA29E827EB555D_CLASS_1_6FC9191852D532C8_METHOD_1_19561A6D289184B5_OFFSET UNITYSDK_OFFSET(0xC4FF850)
#define CLASS_1_0AAA29E827EB555D_CLASS_1_6FC9191852D532C8_METHOD_1_1DE5133A0A6F1CCB_OFFSET UNITYSDK_OFFSET(0xC505740)
#define CLASS_1_0AAA29E827EB555D_CLASS_1_6FC9191852D532C8_METHOD_1_4F5A815C01557BC4_OFFSET UNITYSDK_OFFSET(0xC5091C0)
#define CLASS_1_0AAA29E827EB555D_CLASS_1_6FC9191852D532C8_METHOD_1_5318FE7241FDA798_OFFSET UNITYSDK_OFFSET(0xC508350)
#define CLASS_1_0AAA29E827EB555D_CLASS_1_6FC9191852D532C8_METHOD_1_5C549BF7442375BC_OFFSET UNITYSDK_OFFSET(0xC506D10)
#define CLASS_1_0AAA29E827EB555D_CLASS_1_6FC9191852D532C8_METHOD_1_64E3CB38D81E89EB_OFFSET UNITYSDK_OFFSET(0xC5080E0)
#define CLASS_1_0AAA29E827EB555D_CLASS_1_6FC9191852D532C8_METHOD_1_7206DC8F66A4D2A8_1_OFFSET UNITYSDK_OFFSET(0xC4FED00)
#define CLASS_1_0AAA29E827EB555D_CLASS_1_6FC9191852D532C8_METHOD_1_7206DC8F66A4D2A8_OFFSET UNITYSDK_OFFSET(0xC4FF090)
#define CLASS_1_0AAA29E827EB555D_CLASS_1_6FC9191852D532C8_METHOD_1_8C37834551CDAFC7_OFFSET UNITYSDK_OFFSET(0xC5077A0)
#define CLASS_1_0AAA29E827EB555D_CLASS_1_6FC9191852D532C8_METHOD_1_D691739096F9B5FF_OFFSET UNITYSDK_OFFSET(0xC507E30)
#define CLASS_1_0AAA29E827EB555D_CLASS_1_6FC9191852D532C8_METHOD_1_E3F450A9E0E6DA1F_OFFSET UNITYSDK_OFFSET(0xC5035D0)
#define CLASS_1_0AAA29E827EB555D_CLASS_1_6FC9191852D532C8_METHOD_1_EA0873A91045DF73_OFFSET UNITYSDK_OFFSET(0xC4FF910)
#define CLASS_1_0AAA29E827EB555D_CLASS_1_6FC9191852D532C8__CTOR_OFFSET UNITYSDK_OFFSET(0xC4FB050)

inline static constexpr unsigned int Class_1_0AAA29E827EB555D_Class_1_6FC9191852D532C8_TypeDefinitionIndex = 64494;

class Class_1_0AAA29E827EB555D_Class_1_6FC9191852D532C8 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_12; // 0x0
	// static const ::System::String* Field_1_13; // 0x0
	::System::Collections::Generic::Dictionary_2<::IRIClusterBuilder::IRI2VolumeTemplate*, ::System::Collections::Generic::List_1<::Unity::Collections::NativeArray_1<::UnityEngine::ClusterMeshLodInfo>>*>* Field_1_5; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>>* Field_1_9; // 0x18
	::System::Collections::Generic::Dictionary_2<::IRIClusterBuilder::IRI2VolumeTemplate*, ::Unity::Collections::NativeArray_1<::UnityEngine::ClusterIRIType>>* Field_1_3; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Unity::Collections::NativeArray_1<::UnityEngine::MeshClusterInfo>>* Field_1_7; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::UnityEngine::ClusterMeshLodInfo>* Field_1_6; // 0x30
	::UnityEngine::RPGInstancedItemClusterVolumeManager* Field_1_0; // 0x38
	::Struct_2_0B4DDB75CE25594A_7 Field_1_14; // 0x40
	::System::Collections::Generic::Dictionary_2<::IRIClusterBuilder::IRI2VolumeTemplate*, ::System::Collections::Generic::List_1<::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>>*>* Field_1_4; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Int32>* Field_1_11; // 0x58
	::System::Collections::Generic::Dictionary_2<::IRIClusterBuilder::IRI2VolumeTemplate*, ::System::Collections::Generic::HashSet_1<::System::UInt64>*>* Field_1_10; // 0x60
	::System::Collections::Generic::Dictionary_2<::IRIClusterBuilder::IRI2VolumeTemplate*, ::UnityEngine::IRIClusterVolumeInfo>* Field_1_1; // 0x68
	::System::Collections::Generic::Dictionary_2<::Class_1_0AAA29E827EB555D_Class_1_E767D651C2809599*, ::Class_1_0AAA29E827EB555D_Class_1_4452B3A96D121692*>* Field_1_2; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Unity::Collections::NativeArray_1<::System::UInt32>>* Field_1_8; // 0x78

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

	::System::Void Method_1_19561A6D289184B5(::Class_1_0AAA29E827EB555D_Class_1_E767D651C2809599* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AAA29E827EB555D_Class_1_E767D651C2809599*))((::PBYTE)hIl2Cpp + CLASS_1_0AAA29E827EB555D_CLASS_1_6FC9191852D532C8_METHOD_1_19561A6D289184B5_OFFSET))(this, a1);
	}

	::System::Void Method_1_EA0873A91045DF73(::Class_1_0AAA29E827EB555D_Class_1_E767D651C2809599* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AAA29E827EB555D_Class_1_E767D651C2809599*))((::PBYTE)hIl2Cpp + CLASS_1_0AAA29E827EB555D_CLASS_1_6FC9191852D532C8_METHOD_1_EA0873A91045DF73_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1DE5133A0A6F1CCB(::IRIClusterBuilder::IRI2VolumeTemplate* a1, ::UnityEngine::IRIClusterVolumeInfo& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::IRIClusterBuilder::IRI2VolumeTemplate*, ::UnityEngine::IRIClusterVolumeInfo&))((::PBYTE)hIl2Cpp + CLASS_1_0AAA29E827EB555D_CLASS_1_6FC9191852D532C8_METHOD_1_1DE5133A0A6F1CCB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7206DC8F66A4D2A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AAA29E827EB555D_CLASS_1_6FC9191852D532C8_METHOD_1_7206DC8F66A4D2A8_OFFSET))(this);
	}

	::System::Void Method_1_7206DC8F66A4D2A8_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AAA29E827EB555D_CLASS_1_6FC9191852D532C8_METHOD_1_7206DC8F66A4D2A8_1_OFFSET))(this);
	}

	::System::Void Method_1_64E3CB38D81E89EB(::IRIClusterBuilder::IRI2VolumeTemplate* a1, ::System::UInt64 a2)
	{
		return ((::System::Void(*)(::PVOID, ::IRIClusterBuilder::IRI2VolumeTemplate*, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_0AAA29E827EB555D_CLASS_1_6FC9191852D532C8_METHOD_1_64E3CB38D81E89EB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D691739096F9B5FF(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_0AAA29E827EB555D_CLASS_1_6FC9191852D532C8_METHOD_1_D691739096F9B5FF_OFFSET))(this, a1);
	}

	::UnityEngine::ClusterMeshLodInfo Method_1_5318FE7241FDA798(::IRI2::ClusterMeshLodInfo a1)
	{
		return ((::UnityEngine::ClusterMeshLodInfo(*)(::PVOID, ::IRI2::ClusterMeshLodInfo))((::PBYTE)hIl2Cpp + CLASS_1_0AAA29E827EB555D_CLASS_1_6FC9191852D532C8_METHOD_1_5318FE7241FDA798_OFFSET))(this, a1);
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
