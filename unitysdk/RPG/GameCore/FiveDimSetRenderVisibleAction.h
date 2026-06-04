#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSETRENDERVISIBLEACTION_METHOD_3_5F10C2776F3FE1F6_OFFSET UNITYSDK_OFFSET(0x19755BB0)
#define RPG_GAMECORE_FIVEDIMSETRENDERVISIBLEACTION_METHOD_3_DD778882DCA42652_OFFSET UNITYSDK_OFFSET(0x19755C20)
#define RPG_GAMECORE_FIVEDIMSETRENDERVISIBLEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19755C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetRenderVisibleAction_TypeDefinitionIndex = 17774;

	class FiveDimSetRenderVisibleAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean Visible; // 0x10
		::System::Boolean WithDither; // 0x11
		::System::Boolean OverrideDitherDuration; // 0x12
		::System::Single DitherDuration; // 0x14
		::Il2CppArray<::System::String*>* RelativePaths; // 0x18
		::System::Boolean SetCollider; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETRENDERVISIBLEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5F10C2776F3FE1F6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetRenderVisibleAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetRenderVisibleAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETRENDERVISIBLEACTION_METHOD_3_5F10C2776F3FE1F6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DD778882DCA42652(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetRenderVisibleAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetRenderVisibleAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETRENDERVISIBLEACTION_METHOD_3_DD778882DCA42652_OFFSET))(a1, a2);
		}
	};
}
