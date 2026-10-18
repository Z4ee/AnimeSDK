#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSTOPDANMUACTION_METHOD_4_17F61607503F8CDA_OFFSET UNITYSDK_OFFSET(0x1D6B1570)
#define RPG_GAMECORE_FIVEDIMSTOPDANMUACTION_METHOD_4_1B9058C812C4D137_OFFSET UNITYSDK_OFFSET(0x1D6B1630)
#define RPG_GAMECORE_FIVEDIMSTOPDANMUACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B1620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimStopDanmuAction_TypeDefinitionIndex = 18704;

	class FiveDimStopDanmuAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::String* DanmuName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTOPDANMUACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_17F61607503F8CDA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimStopDanmuAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimStopDanmuAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTOPDANMUACTION_METHOD_4_17F61607503F8CDA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1B9058C812C4D137(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimStopDanmuAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimStopDanmuAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTOPDANMUACTION_METHOD_4_1B9058C812C4D137_OFFSET))(a1, a2);
		}
	};
}
