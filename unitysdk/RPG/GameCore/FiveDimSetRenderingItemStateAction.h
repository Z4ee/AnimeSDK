#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSETRENDERINGITEMSTATEACTION_METHOD_4_382364762F367863_OFFSET UNITYSDK_OFFSET(0x1D6DAFA0)
#define RPG_GAMECORE_FIVEDIMSETRENDERINGITEMSTATEACTION_METHOD_4_63CC0BB3E5A2891C_OFFSET UNITYSDK_OFFSET(0x1D6DAF60)
#define RPG_GAMECORE_FIVEDIMSETRENDERINGITEMSTATEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6DAF90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetRenderingItemStateAction_TypeDefinitionIndex = 18693;

	class FiveDimSetRenderingItemStateAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::String* StateName; // 0x10
		::System::Boolean IsReset; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETRENDERINGITEMSTATEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_63CC0BB3E5A2891C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetRenderingItemStateAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetRenderingItemStateAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETRENDERINGITEMSTATEACTION_METHOD_4_63CC0BB3E5A2891C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_382364762F367863(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetRenderingItemStateAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetRenderingItemStateAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETRENDERINGITEMSTATEACTION_METHOD_4_382364762F367863_OFFSET))(a1, a2);
		}
	};
}
