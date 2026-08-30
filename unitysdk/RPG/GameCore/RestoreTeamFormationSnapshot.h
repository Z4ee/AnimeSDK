#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RESTORETEAMFORMATIONSNAPSHOT_METHOD_3_726908AD7939B8E3_OFFSET UNITYSDK_OFFSET(0x1DB9F140)
#define RPG_GAMECORE_RESTORETEAMFORMATIONSNAPSHOT_METHOD_3_EC7B59B3615CF064_OFFSET UNITYSDK_OFFSET(0x1DB9F190)
#define RPG_GAMECORE_RESTORETEAMFORMATIONSNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB9F180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestoreTeamFormationSnapshot_TypeDefinitionIndex = 22238;

	class RestoreTeamFormationSnapshot : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x18
		::System::String* FormationSnapshotName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTORETEAMFORMATIONSNAPSHOT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_726908AD7939B8E3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RestoreTeamFormationSnapshot*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RestoreTeamFormationSnapshot*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTORETEAMFORMATIONSNAPSHOT_METHOD_3_726908AD7939B8E3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EC7B59B3615CF064(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RestoreTeamFormationSnapshot* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RestoreTeamFormationSnapshot*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTORETEAMFORMATIONSNAPSHOT_METHOD_3_EC7B59B3615CF064_OFFSET))(a1, a2);
		}
	};
}
