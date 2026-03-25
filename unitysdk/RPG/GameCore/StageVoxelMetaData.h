#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class StageVoxelDataIndex; }

#define RPG_GAMECORE_STAGEVOXELMETADATA_METHOD_2_431A80A56364731E_OFFSET UNITYSDK_OFFSET(0x1776F200)
#define RPG_GAMECORE_STAGEVOXELMETADATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1776F2B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageVoxelMetaData_TypeDefinitionIndex = 17563;

	class StageVoxelMetaData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::StageVoxelDataIndex* AudioGroundVoxelDataIndex; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEVOXELMETADATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_431A80A56364731E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StageVoxelMetaData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageVoxelMetaData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEVOXELMETADATA_METHOD_2_431A80A56364731E_OFFSET))(a1, a2);
		}
	};
}
