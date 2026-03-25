#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class EntityPosAdaptionConfig; }
namespace RPG::GameCore { class SubLevelGraphDynamicFloatOverride; }
namespace RPG::GameCore { class SubLevelGraphDynamicStringOverride; }
namespace System { class String; }

#define RPG_GAMECORE_SUMMONUNITGAMEPLAYCONFIG_METHOD_2_CCE29DAACC03778D_OFFSET UNITYSDK_OFFSET(0x17790470)
#define RPG_GAMECORE_SUMMONUNITGAMEPLAYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x177907B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SummonUnitGameplayConfig_TypeDefinitionIndex = 16176;

	class SummonUnitGameplayConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 SummonUnitID; // 0x10
		::System::String* UniqueName; // 0x18
		::System::String* LevelGraphPath; // 0x20
		::System::Single Distance; // 0x28
		::System::Single OffsetX; // 0x2C
		::System::Single OffsetY; // 0x30
		::System::Single YawAngle; // 0x34
		::RPG::GameCore::EntityPosAdaptionConfig* PosAdaption; // 0x38
		::Il2CppArray<::RPG::GameCore::SubLevelGraphDynamicFloatOverride*>* FloatOverrides; // 0x40
		::Il2CppArray<::RPG::GameCore::SubLevelGraphDynamicStringOverride*>* StringOverrides; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITGAMEPLAYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_CCE29DAACC03778D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SummonUnitGameplayConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SummonUnitGameplayConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITGAMEPLAYCONFIG_METHOD_2_CCE29DAACC03778D_OFFSET))(a1, a2);
		}
	};
}
