#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYMODIFIERCONFIGBASE_METHOD_2_93C723EBE3F25975_OFFSET UNITYSDK_OFFSET(0x19DF6250)
#define RPG_GAMECORE_TRAINPARTYMODIFIERCONFIGBASE_METHOD_2_A759DCDDDD025EAC_OFFSET UNITYSDK_OFFSET(0x19DF67D0)
#define RPG_GAMECORE_TRAINPARTYMODIFIERCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x19DF6000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyModifierConfigBase_TypeDefinitionIndex = 17203;

	class TrainPartyModifierConfigBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_93C723EBE3F25975(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyModifierConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyModifierConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERCONFIGBASE_METHOD_2_93C723EBE3F25975_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_A759DCDDDD025EAC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyModifierConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyModifierConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERCONFIGBASE_METHOD_2_A759DCDDDD025EAC_OFFSET))(a1, a2);
		}
	};
}
