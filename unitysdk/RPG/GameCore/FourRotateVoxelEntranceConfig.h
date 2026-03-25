#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimBaseEventAction; }
namespace System { class String; }

#define RPG_GAMECORE_FOURROTATEVOXELENTRANCECONFIG_METHOD_3_A156656FC5990219_OFFSET UNITYSDK_OFFSET(0x1721B210)
#define RPG_GAMECORE_FOURROTATEVOXELENTRANCECONFIG_METHOD_3_AB83FC38234AAC02_OFFSET UNITYSDK_OFFSET(0x1721B180)
#define RPG_GAMECORE_FOURROTATEVOXELENTRANCECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1721B1E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelEntranceConfig_TypeDefinitionIndex = 15354;

	class FourRotateVoxelEntranceConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsEntrance; // 0x10
		::System::String* LockTextInfo; // 0x18
		::System::String* UnlockTextInfo; // 0x20
		::System::UInt32 TargetQuestID; // 0x28
		::Il2CppArray<::System::String*>* FinishTargetGP; // 0x30
		::Il2CppArray<::System::UInt32>* FinishTargetGPTargetValue; // 0x38
		::Il2CppArray<::RPG::GameCore::FiveDimBaseEventAction*>* OnFinishTargetActionConfigs; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELENTRANCECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AB83FC38234AAC02(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelEntranceConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelEntranceConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELENTRANCECONFIG_METHOD_3_AB83FC38234AAC02_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A156656FC5990219(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelEntranceConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelEntranceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELENTRANCECONFIG_METHOD_3_A156656FC5990219_OFFSET))(a1, a2);
		}
	};
}
