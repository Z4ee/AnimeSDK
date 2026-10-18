#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYCREATEPREFAB_METHOD_3_04B154F26802E2DB_OFFSET UNITYSDK_OFFSET(0x1DC02D40)
#define RPG_GAMECORE_TRAINPARTYCREATEPREFAB_METHOD_3_85274110F5388781_OFFSET UNITYSDK_OFFSET(0x1DC02DD0)
#define RPG_GAMECORE_TRAINPARTYCREATEPREFAB__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC02DA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyCreatePrefab_TypeDefinitionIndex = 22365;

	class TrainPartyCreatePrefab : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* PrefabPath; // 0x18
		::RPG::MVector3 Position; // 0x20
		::RPG::MVector3 Rotation; // 0x2C
		::RPG::MVector3 Scale; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCREATEPREFAB__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_04B154F26802E2DB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyCreatePrefab*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyCreatePrefab*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCREATEPREFAB_METHOD_3_04B154F26802E2DB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_85274110F5388781(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyCreatePrefab* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyCreatePrefab*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCREATEPREFAB_METHOD_3_85274110F5388781_OFFSET))(a1, a2);
		}
	};
}
