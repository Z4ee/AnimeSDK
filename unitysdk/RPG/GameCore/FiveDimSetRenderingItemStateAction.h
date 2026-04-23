#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSETRENDERINGITEMSTATEACTION_METHOD_3_449B007783556A73_OFFSET UNITYSDK_OFFSET(0x1891C980)
#define RPG_GAMECORE_FIVEDIMSETRENDERINGITEMSTATEACTION_METHOD_3_8999D03DFD421236_OFFSET UNITYSDK_OFFSET(0x1891C9F0)
#define RPG_GAMECORE_FIVEDIMSETRENDERINGITEMSTATEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1891C9D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetRenderingItemStateAction_TypeDefinitionIndex = 17760;

	class FiveDimSetRenderingItemStateAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::String* StateName; // 0x10
		::System::Boolean IsReset; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETRENDERINGITEMSTATEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_449B007783556A73(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetRenderingItemStateAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetRenderingItemStateAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETRENDERINGITEMSTATEACTION_METHOD_3_449B007783556A73_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8999D03DFD421236(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetRenderingItemStateAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetRenderingItemStateAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETRENDERINGITEMSTATEACTION_METHOD_3_8999D03DFD421236_OFFSET))(a1, a2);
		}
	};
}
