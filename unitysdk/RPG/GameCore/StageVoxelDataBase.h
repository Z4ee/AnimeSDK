#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STAGEVOXELDATABASE_METHOD_2_66F0F69E5876226A_OFFSET UNITYSDK_OFFSET(0x1CAEF760)
#define RPG_GAMECORE_STAGEVOXELDATABASE_METHOD_2_D2DCC21125172E82_OFFSET UNITYSDK_OFFSET(0x1CAEF5B0)
#define RPG_GAMECORE_STAGEVOXELDATABASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAEF750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageVoxelDataBase_TypeDefinitionIndex = 18928;

	class StageVoxelDataBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEVOXELDATABASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D2DCC21125172E82(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StageVoxelDataBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageVoxelDataBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEVOXELDATABASE_METHOD_2_D2DCC21125172E82_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_66F0F69E5876226A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StageVoxelDataBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageVoxelDataBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEVOXELDATABASE_METHOD_2_66F0F69E5876226A_OFFSET))(a1, a2);
		}
	};
}
