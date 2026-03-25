#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class StageItemAlias; }

#define RPG_GAMECORE_SETSTAGEITEMSTATE_METHOD_3_70C8D1873FD60935_OFFSET UNITYSDK_OFFSET(0x176DF380)
#define RPG_GAMECORE_SETSTAGEITEMSTATE_METHOD_3_E8F3708A403D8E33_OFFSET UNITYSDK_OFFSET(0x176DF400)
#define RPG_GAMECORE_SETSTAGEITEMSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x176DF3D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetStageItemState_TypeDefinitionIndex = 20446;

	class SetStageItemState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::StageItemAlias*>* ItemList; // 0x18
		::System::Boolean EnableState; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSTAGEITEMSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_70C8D1873FD60935(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetStageItemState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetStageItemState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSTAGEITEMSTATE_METHOD_3_70C8D1873FD60935_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E8F3708A403D8E33(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetStageItemState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetStageItemState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSTAGEITEMSTATE_METHOD_3_E8F3708A403D8E33_OFFSET))(a1, a2);
		}
	};
}
