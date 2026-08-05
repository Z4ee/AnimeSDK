#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_VOXEL_VOXELARRAY_GET_SHOWRAWSIZE_OFFSET UNITYSDK_OFFSET(0x1353A990)
#define MOLEMOLE_VOXEL_VOXELARRAY_METHOD_1_43BEA4B0DA412159_OFFSET UNITYSDK_OFFSET(0x1353AC50)
#define MOLEMOLE_VOXEL_VOXELARRAY_METHOD_1_629D11C4E3F941D7_OFFSET UNITYSDK_OFFSET(0x1353AA90)
#define MOLEMOLE_VOXEL_VOXELARRAY_METHOD_1_8509CB331B7A4FB3_OFFSET UNITYSDK_OFFSET(0x1353AB90)
#define MOLEMOLE_VOXEL_VOXELARRAY_METHOD_1_94BEB98E66845310_OFFSET UNITYSDK_OFFSET(0x1353AD60)
#define MOLEMOLE_VOXEL_VOXELARRAY_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1353AC10)
#define MOLEMOLE_VOXEL_VOXELARRAY_SET_SHOWRAWSIZE_OFFSET UNITYSDK_OFFSET(0x1353A9F0)
#define MOLEMOLE_VOXEL_VOXELARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1353AA00)

namespace MoleMole::Voxel
{
	inline static constexpr unsigned int VoxelArray_TypeDefinitionIndex = 51646;

	class VoxelArray : public ::System::Object
	{
	public:
		::System::Int32 PlaneX; // 0x10
		::System::Int32 PlaneY; // 0x14
		::UnityEngine::Vector2 voxelPrecision; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* spanArray; // 0x20
		::System::Collections::Generic::List_1<::System::Int32>* indexArray; // 0x28
		::Il2CppArray<::System::Byte>* rawArray; // 0x30
		::UnityEngine::Vector3Int rawSize; // 0x38
		::System::Int32 indexArrayIndex; // 0x44
		::System::Int32 bottomIndex; // 0x48
		::System::Int32 topIndex; // 0x4C
		::System::Int16 preData; // 0x50
		::System::Int32 colIndex; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELARRAY__CTOR_OFFSET))(this);
		}

		::System::Int32 get_ShowRawSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELARRAY_GET_SHOWRAWSIZE_OFFSET))(this);
		}

		::System::Void set_ShowRawSize(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELARRAY_SET_SHOWRAWSIZE_OFFSET))(this, a1);
		}

		::System::Byte Method_1_629D11C4E3F941D7(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Byte(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELARRAY_METHOD_1_629D11C4E3F941D7_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELARRAY_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_1_43BEA4B0DA412159(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Byte a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELARRAY_METHOD_1_43BEA4B0DA412159_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_1_94BEB98E66845310(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Byte a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELARRAY_METHOD_1_94BEB98E66845310_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Int32 Method_1_8509CB331B7A4FB3(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Vector3Int a4)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELARRAY_METHOD_1_8509CB331B7A4FB3_OFFSET))(a1, a2, a3, a4);
		}
	};
}
