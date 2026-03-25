#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMADDRTPCACTION_METHOD_3_09FEFB752C4B848A_OFFSET UNITYSDK_OFFSET(0x171DD0E0)
#define RPG_GAMECORE_FIVEDIMADDRTPCACTION_METHOD_3_7FFDFF9F0918AA57_OFFSET UNITYSDK_OFFSET(0x171DD070)
#define RPG_GAMECORE_FIVEDIMADDRTPCACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x171DD0C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimAddRTPCAction_TypeDefinitionIndex = 17179;

	class FiveDimAddRTPCAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::String* RTPCName; // 0x10
		::System::Single AddValue; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMADDRTPCACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7FFDFF9F0918AA57(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimAddRTPCAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimAddRTPCAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMADDRTPCACTION_METHOD_3_7FFDFF9F0918AA57_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_09FEFB752C4B848A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimAddRTPCAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimAddRTPCAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMADDRTPCACTION_METHOD_3_09FEFB752C4B848A_OFFSET))(a1, a2);
		}
	};
}
