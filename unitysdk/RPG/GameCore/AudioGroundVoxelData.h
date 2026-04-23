#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StageVoxelDataBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AUDIOGROUNDVOXELDATA_METHOD_3_B645E56803B818E0_OFFSET UNITYSDK_OFFSET(0x186B4880)
#define RPG_GAMECORE_AUDIOGROUNDVOXELDATA_METHOD_3_CBB45B281D9AE08A_OFFSET UNITYSDK_OFFSET(0x186B4820)
#define RPG_GAMECORE_AUDIOGROUNDVOXELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x186B4870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AudioGroundVoxelData_TypeDefinitionIndex = 18178;

	class AudioGroundVoxelData : public ::RPG::GameCore::StageVoxelDataBase
	{
	public:
		::Il2CppArray<::System::Byte>* Data; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUDIOGROUNDVOXELDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CBB45B281D9AE08A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AudioGroundVoxelData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AudioGroundVoxelData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUDIOGROUNDVOXELDATA_METHOD_3_CBB45B281D9AE08A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B645E56803B818E0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AudioGroundVoxelData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AudioGroundVoxelData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUDIOGROUNDVOXELDATA_METHOD_3_B645E56803B818E0_OFFSET))(a1, a2);
		}
	};
}
