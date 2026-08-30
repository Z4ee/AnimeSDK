#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StageVoxelDataBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AUDIOGROUNDVOXELDATA_METHOD_3_8464F9D0CD646D94_OFFSET UNITYSDK_OFFSET(0x1CE32B60)
#define RPG_GAMECORE_AUDIOGROUNDVOXELDATA_METHOD_3_E71F68FC3C7F04C4_OFFSET UNITYSDK_OFFSET(0x1CE32B00)
#define RPG_GAMECORE_AUDIOGROUNDVOXELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE32B50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AudioGroundVoxelData_TypeDefinitionIndex = 18929;

	class AudioGroundVoxelData : public ::RPG::GameCore::StageVoxelDataBase
	{
	public:
		::Il2CppArray<::System::Byte>* Data; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUDIOGROUNDVOXELDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E71F68FC3C7F04C4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AudioGroundVoxelData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AudioGroundVoxelData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUDIOGROUNDVOXELDATA_METHOD_3_E71F68FC3C7F04C4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8464F9D0CD646D94(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AudioGroundVoxelData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AudioGroundVoxelData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUDIOGROUNDVOXELDATA_METHOD_3_8464F9D0CD646D94_OFFSET))(a1, a2);
		}
	};
}
