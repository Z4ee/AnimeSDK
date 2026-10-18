#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class VCameraOverrideShakeV2; }
namespace RPG::GameCore { class VCameraShakeV2; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMCAMERASHAKEACTION_METHOD_4_7D249A3C110311F6_OFFSET UNITYSDK_OFFSET(0x1D686680)
#define RPG_GAMECORE_FIVEDIMCAMERASHAKEACTION_METHOD_4_B28557A8C1A32859_OFFSET UNITYSDK_OFFSET(0x1D686640)
#define RPG_GAMECORE_FIVEDIMCAMERASHAKEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D686670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimCameraShakeAction_TypeDefinitionIndex = 18716;

	class FiveDimCameraShakeAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::String* ShakeTemplateName; // 0x10
		::RPG::GameCore::VCameraOverrideShakeV2* OverrideShakeConfigV2; // 0x18
		::RPG::GameCore::VCameraShakeV2* ShakeConfigV2; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCAMERASHAKEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B28557A8C1A32859(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimCameraShakeAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimCameraShakeAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCAMERASHAKEACTION_METHOD_4_B28557A8C1A32859_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7D249A3C110311F6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimCameraShakeAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimCameraShakeAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCAMERASHAKEACTION_METHOD_4_7D249A3C110311F6_OFFSET))(a1, a2);
		}
	};
}
