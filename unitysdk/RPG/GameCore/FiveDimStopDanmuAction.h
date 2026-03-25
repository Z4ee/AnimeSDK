#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSTOPDANMUACTION_METHOD_3_A5751B0289604B6E_OFFSET UNITYSDK_OFFSET(0x1720E550)
#define RPG_GAMECORE_FIVEDIMSTOPDANMUACTION_METHOD_3_E1A69862B663841A_OFFSET UNITYSDK_OFFSET(0x1720E650)
#define RPG_GAMECORE_FIVEDIMSTOPDANMUACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1720E630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimStopDanmuAction_TypeDefinitionIndex = 17168;

	class FiveDimStopDanmuAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::String* DanmuName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTOPDANMUACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A5751B0289604B6E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimStopDanmuAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimStopDanmuAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTOPDANMUACTION_METHOD_3_A5751B0289604B6E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E1A69862B663841A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimStopDanmuAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimStopDanmuAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTOPDANMUACTION_METHOD_3_E1A69862B663841A_OFFSET))(a1, a2);
		}
	};
}
