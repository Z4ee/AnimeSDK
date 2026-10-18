#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMPLAYSHOOTARROWANIMACTION_METHOD_4_29D4F6406D805B00_OFFSET UNITYSDK_OFFSET(0x1D6D0FA0)
#define RPG_GAMECORE_FIVEDIMPLAYSHOOTARROWANIMACTION_METHOD_4_982D59AF7B9562C5_OFFSET UNITYSDK_OFFSET(0x1D6D0F20)
#define RPG_GAMECORE_FIVEDIMPLAYSHOOTARROWANIMACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6D0F90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPlayShootArrowAnimAction_TypeDefinitionIndex = 18727;

	class FiveDimPlayShootArrowAnimAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYSHOOTARROWANIMACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_982D59AF7B9562C5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPlayShootArrowAnimAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPlayShootArrowAnimAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYSHOOTARROWANIMACTION_METHOD_4_982D59AF7B9562C5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_29D4F6406D805B00(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPlayShootArrowAnimAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPlayShootArrowAnimAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYSHOOTARROWANIMACTION_METHOD_4_29D4F6406D805B00_OFFSET))(a1, a2);
		}
	};
}
