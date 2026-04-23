#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GroupLocalTargetType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelGraphValueSource; }

#define RPG_GAMECORE_GROUPENTITYCREATECONFIG_METHOD_2_DBFCB6AC43B7DCA2_OFFSET UNITYSDK_OFFSET(0x189DFD90)
#define RPG_GAMECORE_GROUPENTITYCREATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x189E0110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GroupEntityCreateConfig_TypeDefinitionIndex = 20199;

	class GroupEntityCreateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 InstanceID; // 0x10
		::System::Boolean IsCreateAllEntityType; // 0x14
		::RPG::GameCore::GroupLocalTargetType SpawnEntityType; // 0x18
		::System::Boolean OverridePropState; // 0x1C
		::RPG::GameCore::PropState PropState; // 0x20
		::RPG::GameCore::LevelGraphValueSource* GraphDynamicValues; // 0x28
		::System::Boolean NeedAppear; // 0x30
		::System::Boolean IsOverrideArtModelOffset; // 0x31
		::RPG::MVector3 OverrideArtModelOffset; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPENTITYCREATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_DBFCB6AC43B7DCA2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GroupEntityCreateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GroupEntityCreateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPENTITYCREATECONFIG_METHOD_2_DBFCB6AC43B7DCA2_OFFSET))(a1, a2);
		}
	};
}
