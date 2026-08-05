#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_4C610BB52E77ECC1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

namespace MoleMole::Voxel { class VoxelCompressCell; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_041C5E5F885B8807_1_OFFSET UNITYSDK_OFFSET(0x1353BFA0)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_041C5E5F885B8807_OFFSET UNITYSDK_OFFSET(0x1353BC90)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1353C9A0)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_2344FF75FE05782E_OFFSET UNITYSDK_OFFSET(0x1353BB70)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_286F28C52DE2001C_OFFSET UNITYSDK_OFFSET(0x1353B0B0)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_2938F774A1106C02_1_OFFSET UNITYSDK_OFFSET(0x1353BEA0)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_2938F774A1106C02_OFFSET UNITYSDK_OFFSET(0x1353BF20)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_37D0382D0C30A2DC_OFFSET UNITYSDK_OFFSET(0x1353B3A0)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_4E126922D4FE0ACF_OFFSET UNITYSDK_OFFSET(0x1353C580)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_5176DC743E478510_OFFSET UNITYSDK_OFFSET(0x1353B580)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_58642A6B0D484AD4_OFFSET UNITYSDK_OFFSET(0x1353C340)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0x1353AED0)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_B387E1AED8A8F880_1_OFFSET UNITYSDK_OFFSET(0x1353CA00)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0x1353C1C0)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_CCB59E213D1728DE_OFFSET UNITYSDK_OFFSET(0x1353B800)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_DDF09B4CDAC0FF26_OFFSET UNITYSDK_OFFSET(0x1353C7F0)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1353AE70)

namespace MoleMole::Voxel
{
	inline static constexpr unsigned int VoxelCompressArray_TypeDefinitionIndex = 74662;

	class VoxelCompressArray : public ::System::Object
	{
	public:
		// static const ::System::Int32 cacheVoxelCount = 0x10; // 0x0
		::UnityEngine::Vector3Int cellCount; // 0x10
		::Il2CppArray<::Struct_2_4C610BB52E77ECC1>* decompressedData; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* cellIndexToDataMap; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* cachedIndexList; // 0x30
		::System::Int32 bufferSize; // 0x38
		::System::Collections::Generic::List_1<::Il2CppArray<::System::Byte>*>* decompressedRawArray; // 0x40
		::System::Collections::Generic::List_1<::MoleMole::Voxel::VoxelCompressCell*>* compressedRawArray; // 0x48
		::UnityEngine::Vector3Int rawSize; // 0x50
		::UnityEngine::Vector3Int cellSize; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_A984848EA3E436DA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_A984848EA3E436DA_OFFSET))(this);
		}

		::System::Int32 Method_1_37D0382D0C30A2DC()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_37D0382D0C30A2DC_OFFSET))(this);
		}

		::System::Void Method_1_5176DC743E478510()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_5176DC743E478510_OFFSET))(this);
		}

		::System::Void Method_1_CCB59E213D1728DE(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_CCB59E213D1728DE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_2344FF75FE05782E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_2344FF75FE05782E_OFFSET))(this);
		}

		::System::Byte Method_1_041C5E5F885B8807(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Byte(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_041C5E5F885B8807_OFFSET))(this, a1, a2, a3);
		}

		::System::Byte Method_1_041C5E5F885B8807_1(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Byte(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_041C5E5F885B8807_1_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Byte>* Method_1_286F28C52DE2001C(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_286F28C52DE2001C_OFFSET))(this, a1);
		}

		::System::Int32 Method_1_2938F774A1106C02(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_2938F774A1106C02_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_B387E1AED8A8F880()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_B387E1AED8A8F880_OFFSET))(this);
		}

		::System::Void Method_1_58642A6B0D484AD4(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Byte a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_58642A6B0D484AD4_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 Method_1_2938F774A1106C02_1(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_2938F774A1106C02_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Byte Method_1_4E126922D4FE0ACF(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Byte(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_4E126922D4FE0ACF_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_1_1D4018D4200358D0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_1D4018D4200358D0_OFFSET))(this);
		}

		::System::Void Method_1_B387E1AED8A8F880_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_B387E1AED8A8F880_1_OFFSET))(this);
		}

		::System::Void Method_1_DDF09B4CDAC0FF26(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_DDF09B4CDAC0FF26_OFFSET))(this, a1);
		}
	};
}
