#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_4C610BB52E77ECC1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

namespace MoleMole::Voxel { class VoxelCompressCell; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_06EE84C00E1F5571_OFFSET UNITYSDK_OFFSET(0x13B4AA10)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x13B4A640)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_1D66A0A8D839F0EC_OFFSET UNITYSDK_OFFSET(0x13B4B4D0)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_2344FF75FE05782E_OFFSET UNITYSDK_OFFSET(0x13B4B8D0)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_2938F774A1106C02_OFFSET UNITYSDK_OFFSET(0x13B49CD0)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_2FB24841E922E227_OFFSET UNITYSDK_OFFSET(0x13B4A440)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_37D0382D0C30A2DC_OFFSET UNITYSDK_OFFSET(0x13B4AE20)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_5176DC743E478510_OFFSET UNITYSDK_OFFSET(0x13B4B250)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_6B042234886E3394_OFFSET UNITYSDK_OFFSET(0x13B4AC80)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_8CA88D55ECEFAD59_OFFSET UNITYSDK_OFFSET(0x13B4B6E0)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_A2AB085BF6AC9BA3_OFFSET UNITYSDK_OFFSET(0x13B49F30)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0x13B49D50)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0x13B4A4C0)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_CCB59E213D1728DE_OFFSET UNITYSDK_OFFSET(0x13B4A6A0)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_ECCAFDF45FD89B99_OFFSET UNITYSDK_OFFSET(0x13B4A220)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_EF295F071A93758A_OFFSET UNITYSDK_OFFSET(0x13B4B000)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x13B49C70)

namespace MoleMole::Voxel
{
	inline static constexpr unsigned int VoxelCompressArray_TypeDefinitionIndex = 57671;

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

		::System::Int32 Method_1_2938F774A1106C02(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_2938F774A1106C02_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_A984848EA3E436DA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_A984848EA3E436DA_OFFSET))(this);
		}

		::System::Byte Method_1_ECCAFDF45FD89B99(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Byte(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_ECCAFDF45FD89B99_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_B387E1AED8A8F880()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_B387E1AED8A8F880_OFFSET))(this);
		}

		::System::Boolean Method_1_1D4018D4200358D0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_1D4018D4200358D0_OFFSET))(this);
		}

		::System::Void Method_1_CCB59E213D1728DE(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_CCB59E213D1728DE_OFFSET))(this, a1, a2);
		}

		::System::Byte Method_1_06EE84C00E1F5571(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Byte(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_06EE84C00E1F5571_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_6B042234886E3394(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_6B042234886E3394_OFFSET))(this, a1);
		}

		::System::Void Method_1_EF295F071A93758A(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Byte a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_EF295F071A93758A_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 Method_1_37D0382D0C30A2DC()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_37D0382D0C30A2DC_OFFSET))(this);
		}

		::System::Void Method_1_5176DC743E478510()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_5176DC743E478510_OFFSET))(this);
		}

		::System::Byte Method_1_1D66A0A8D839F0EC(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Byte(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_1D66A0A8D839F0EC_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Byte>* Method_1_A2AB085BF6AC9BA3(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_A2AB085BF6AC9BA3_OFFSET))(this, a1);
		}

		::System::Int32 Method_1_2FB24841E922E227(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_2FB24841E922E227_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_8CA88D55ECEFAD59()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_8CA88D55ECEFAD59_OFFSET))(this);
		}

		::System::Void Method_1_2344FF75FE05782E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_2344FF75FE05782E_OFFSET))(this);
		}
	};
}
