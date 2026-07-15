#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class VCameraOverrideShakeV2; }
namespace RPG::GameCore { class VCameraShakeV2; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMCAMERASHAKEACTION_METHOD_3_621D56C7974A4B5F_OFFSET UNITYSDK_OFFSET(0x1BA8C350)
#define RPG_GAMECORE_FIVEDIMCAMERASHAKEACTION_METHOD_3_F6D779D3138FCF30_OFFSET UNITYSDK_OFFSET(0x1BA8C310)
#define RPG_GAMECORE_FIVEDIMCAMERASHAKEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA8C340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimCameraShakeAction_TypeDefinitionIndex = 17983;

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

		static ::System::Void Method_3_F6D779D3138FCF30(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimCameraShakeAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimCameraShakeAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCAMERASHAKEACTION_METHOD_3_F6D779D3138FCF30_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_621D56C7974A4B5F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimCameraShakeAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimCameraShakeAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCAMERASHAKEACTION_METHOD_3_621D56C7974A4B5F_OFFSET))(a1, a2);
		}
	};
}
