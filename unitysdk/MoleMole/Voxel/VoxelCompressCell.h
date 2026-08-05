#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_VOXEL_VOXELCOMPRESSCELL_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x12B26D80)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSCELL_METHOD_1_8B97FF67BAF171EB_OFFSET UNITYSDK_OFFSET(0x12B26D00)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSCELL__CTOR_OFFSET UNITYSDK_OFFSET(0x12B26CF0)

namespace MoleMole::Voxel
{
	inline static constexpr unsigned int VoxelCompressCell_TypeDefinitionIndex = 53078;

	class VoxelCompressCell : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* byteArray; // 0x10
		::System::Boolean isEmpty; // 0x18

		::System::Void _ctor(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSCELL__CTOR_OFFSET))(this, a1);
		}

		::System::Void Method_1_8B97FF67BAF171EB(::System::Int32 a1, ::System::Byte a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSCELL_METHOD_1_8B97FF67BAF171EB_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSCELL_METHOD_1_4343F372F34C05BF_OFFSET))(this);
		}
	};
}
