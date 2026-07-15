#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class StageItemAlias; }

#define RPG_GAMECORE_SETSTAGEITEMSTATE_METHOD_3_76A48D2CB3079269_OFFSET UNITYSDK_OFFSET(0x1C608ED0)
#define RPG_GAMECORE_SETSTAGEITEMSTATE_METHOD_3_A32D50BB152E2BA6_OFFSET UNITYSDK_OFFSET(0x1C608E90)
#define RPG_GAMECORE_SETSTAGEITEMSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C608EC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetStageItemState_TypeDefinitionIndex = 21443;

	class SetStageItemState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::StageItemAlias*>* ItemList; // 0x18
		::System::Boolean EnableState; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSTAGEITEMSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A32D50BB152E2BA6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetStageItemState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetStageItemState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSTAGEITEMSTATE_METHOD_3_A32D50BB152E2BA6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_76A48D2CB3079269(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetStageItemState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetStageItemState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSTAGEITEMSTATE_METHOD_3_76A48D2CB3079269_OFFSET))(a1, a2);
		}
	};
}
