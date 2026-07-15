#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMBASEEVENTACTION_METHOD_2_19104FB5E2A34380_OFFSET UNITYSDK_OFFSET(0x1BA8B1D0)
#define RPG_GAMECORE_FIVEDIMBASEEVENTACTION_METHOD_2_C966ACC22D198A0E_OFFSET UNITYSDK_OFFSET(0x1BA8B210)
#define RPG_GAMECORE_FIVEDIMBASEEVENTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA866B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimBaseEventAction_TypeDefinitionIndex = 17915;

	class FiveDimBaseEventAction : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBASEEVENTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_19104FB5E2A34380(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimBaseEventAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimBaseEventAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBASEEVENTACTION_METHOD_2_19104FB5E2A34380_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_C966ACC22D198A0E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimBaseEventAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimBaseEventAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBASEEVENTACTION_METHOD_2_C966ACC22D198A0E_OFFSET))(a1, a2);
		}
	};
}
