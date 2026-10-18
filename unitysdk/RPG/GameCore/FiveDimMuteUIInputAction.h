#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMMUTEUIINPUTACTION_METHOD_4_6312397E5BB56A82_OFFSET UNITYSDK_OFFSET(0x1D6A12A0)
#define RPG_GAMECORE_FIVEDIMMUTEUIINPUTACTION_METHOD_4_AD8F09DE463443BF_OFFSET UNITYSDK_OFFSET(0x1D6A1370)
#define RPG_GAMECORE_FIVEDIMMUTEUIINPUTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A1360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMuteUIInputAction_TypeDefinitionIndex = 18771;

	class FiveDimMuteUIInputAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean IsMute; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUTEUIINPUTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6312397E5BB56A82(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMuteUIInputAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMuteUIInputAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUTEUIINPUTACTION_METHOD_4_6312397E5BB56A82_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AD8F09DE463443BF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMuteUIInputAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMuteUIInputAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUTEUIINPUTACTION_METHOD_4_AD8F09DE463443BF_OFFSET))(a1, a2);
		}
	};
}
