#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class StageItemAlias; }

#define RPG_GAMECORE_SETSTAGEITEMSTATE_METHOD_3_76A48D2CB3079269_OFFSET UNITYSDK_OFFSET(0x19C5F600)
#define RPG_GAMECORE_SETSTAGEITEMSTATE_METHOD_3_CC3B60CE6F340E2F_OFFSET UNITYSDK_OFFSET(0x19C5F580)
#define RPG_GAMECORE_SETSTAGEITEMSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C5F5D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetStageItemState_TypeDefinitionIndex = 21028;

	class SetStageItemState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::StageItemAlias*>* ItemList; // 0x18
		::System::Boolean EnableState; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSTAGEITEMSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CC3B60CE6F340E2F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetStageItemState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetStageItemState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSTAGEITEMSTATE_METHOD_3_CC3B60CE6F340E2F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_76A48D2CB3079269(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetStageItemState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetStageItemState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSTAGEITEMSTATE_METHOD_3_76A48D2CB3079269_OFFSET))(a1, a2);
		}
	};
}
