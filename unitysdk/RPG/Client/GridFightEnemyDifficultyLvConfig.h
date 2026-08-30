#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define RPG_CLIENT_GRIDFIGHTENEMYDIFFICULTYLVCONFIG_GETCONFIG_OFFSET UNITYSDK_OFFSET(0xD16B690)
#define RPG_CLIENT_GRIDFIGHTENEMYDIFFICULTYLVCONFIG__CREATEINTERVAL_OFFSET UNITYSDK_OFFSET(0xD16B720)
#define RPG_CLIENT_GRIDFIGHTENEMYDIFFICULTYLVCONFIG__CTOR_1_OFFSET UNITYSDK_OFFSET(0xD16B870)
#define RPG_CLIENT_GRIDFIGHTENEMYDIFFICULTYLVCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xD16B710)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEnemyDifficultyLvConfig_TypeDefinitionIndex = 64569;

	class GridFightEnemyDifficultyLvConfig : public ::System::Object
	{
	public:
		static ::System::Func_3<::System::UInt32, ::System::UInt32, ::RPG::Client::GridFightEnemyDifficultyLvConfig*>** StaticGet_GetConfigImpl()
		{
			return (::System::Func_3<::System::UInt32, ::System::UInt32, ::RPG::Client::GridFightEnemyDifficultyLvConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightEnemyDifficultyLvConfig_TypeDefinitionIndex)->GetStaticField(0x27710);
		}
		::RPG::GameCore::FixPoint SpeedRatio; // 0x10
		::RPG::GameCore::FixPoint StanceRatio; // 0x18
		::System::UInt32 ChapterID; // 0x20
		::System::UInt32 EnemyDifficultyLevel; // 0x24
		::RPG::GameCore::FixPoint HPRatio; // 0x28
		::RPG::GameCore::FixPoint AttackRatio; // 0x30
		::RPG::GameCore::FixPoint DefenceRatio; // 0x38

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTENEMYDIFFICULTYLVCONFIG__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTENEMYDIFFICULTYLVCONFIG__CTOR_1_OFFSET))(this, a1);
		}

		static ::RPG::Client::GridFightEnemyDifficultyLvConfig* GetConfig(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::GridFightEnemyDifficultyLvConfig*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTENEMYDIFFICULTYLVCONFIG_GETCONFIG_OFFSET))(a1, a2);
		}

		::System::Void _CreateInterval(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTENEMYDIFFICULTYLVCONFIG__CREATEINTERVAL_OFFSET))(this, a1, a2);
		}
	};
}
