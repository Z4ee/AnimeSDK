#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMUIPILETOASTMESSAGETEXTIDACTION_METHOD_4_2E7F549BA790D403_1_OFFSET UNITYSDK_OFFSET(0x1D6B4A70)
#define RPG_GAMECORE_FIVEDIMUIPILETOASTMESSAGETEXTIDACTION_METHOD_4_2E7F549BA790D403_OFFSET UNITYSDK_OFFSET(0x1D6B4960)
#define RPG_GAMECORE_FIVEDIMUIPILETOASTMESSAGETEXTIDACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B4A60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimUIPileToastMessageTextIDAction_TypeDefinitionIndex = 18725;

	class FiveDimUIPileToastMessageTextIDAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::RPG::Client::TextID TextID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMUIPILETOASTMESSAGETEXTIDACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2E7F549BA790D403(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimUIPileToastMessageTextIDAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimUIPileToastMessageTextIDAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMUIPILETOASTMESSAGETEXTIDACTION_METHOD_4_2E7F549BA790D403_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2E7F549BA790D403_1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimUIPileToastMessageTextIDAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimUIPileToastMessageTextIDAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMUIPILETOASTMESSAGETEXTIDACTION_METHOD_4_2E7F549BA790D403_1_OFFSET))(a1, a2);
		}
	};
}
