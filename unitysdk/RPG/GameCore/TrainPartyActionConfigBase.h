#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYACTIONCONFIGBASE_METHOD_4_2AB58978242DCA99_OFFSET UNITYSDK_OFFSET(0x1C15CCE0)
#define RPG_GAMECORE_TRAINPARTYACTIONCONFIGBASE_METHOD_4_8A0F1449EE586A65_OFFSET UNITYSDK_OFFSET(0x1C15C820)
#define RPG_GAMECORE_TRAINPARTYACTIONCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C15C080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyActionConfigBase_TypeDefinitionIndex = 17342;

	class TrainPartyActionConfigBase : public ::RPG::GameCore::MiActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8A0F1449EE586A65(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyActionConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyActionConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONCONFIGBASE_METHOD_4_8A0F1449EE586A65_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2AB58978242DCA99(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyActionConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyActionConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONCONFIGBASE_METHOD_4_2AB58978242DCA99_OFFSET))(a1, a2);
		}
	};
}
