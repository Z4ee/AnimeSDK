#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSETDYNAMICATTACHACTION_METHOD_3_04B76EDE182844F0_OFFSET UNITYSDK_OFFSET(0x17209720)
#define RPG_GAMECORE_FIVEDIMSETDYNAMICATTACHACTION_METHOD_3_C51C20E0A026D7FF_OFFSET UNITYSDK_OFFSET(0x172096B0)
#define RPG_GAMECORE_FIVEDIMSETDYNAMICATTACHACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x17209700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetDynamicAttachAction_TypeDefinitionIndex = 17221;

	class FiveDimSetDynamicAttachAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean Enable; // 0x10
		::System::UInt32 TargetEntityID; // 0x14
		::System::String* TargetAttachPoint; // 0x18
		::System::String* SourceAttachPoint; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETDYNAMICATTACHACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C51C20E0A026D7FF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetDynamicAttachAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetDynamicAttachAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETDYNAMICATTACHACTION_METHOD_3_C51C20E0A026D7FF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_04B76EDE182844F0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetDynamicAttachAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetDynamicAttachAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETDYNAMICATTACHACTION_METHOD_3_04B76EDE182844F0_OFFSET))(a1, a2);
		}
	};
}
