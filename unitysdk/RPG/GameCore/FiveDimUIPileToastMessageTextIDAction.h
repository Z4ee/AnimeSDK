#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMUIPILETOASTMESSAGETEXTIDACTION_METHOD_3_E852F56FB45A1932_1_OFFSET UNITYSDK_OFFSET(0x1DCA9C30)
#define RPG_GAMECORE_FIVEDIMUIPILETOASTMESSAGETEXTIDACTION_METHOD_3_E852F56FB45A1932_OFFSET UNITYSDK_OFFSET(0x1DCA9B20)
#define RPG_GAMECORE_FIVEDIMUIPILETOASTMESSAGETEXTIDACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA9C20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimUIPileToastMessageTextIDAction_TypeDefinitionIndex = 18515;

	class FiveDimUIPileToastMessageTextIDAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::RPG::Client::TextID TextID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMUIPILETOASTMESSAGETEXTIDACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E852F56FB45A1932(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimUIPileToastMessageTextIDAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimUIPileToastMessageTextIDAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMUIPILETOASTMESSAGETEXTIDACTION_METHOD_3_E852F56FB45A1932_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E852F56FB45A1932_1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimUIPileToastMessageTextIDAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimUIPileToastMessageTextIDAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMUIPILETOASTMESSAGETEXTIDACTION_METHOD_3_E852F56FB45A1932_1_OFFSET))(a1, a2);
		}
	};
}
