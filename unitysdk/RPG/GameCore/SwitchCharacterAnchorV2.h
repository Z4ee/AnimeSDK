#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SwitchCharacterAnchor; }

#define RPG_GAMECORE_SWITCHCHARACTERANCHORV2_METHOD_3_D215A8891292D573_OFFSET UNITYSDK_OFFSET(0x1D58A410)
#define RPG_GAMECORE_SWITCHCHARACTERANCHORV2_METHOD_3_D709BDF68C1F2F30_OFFSET UNITYSDK_OFFSET(0x1D58A450)
#define RPG_GAMECORE_SWITCHCHARACTERANCHORV2__CTOR_OFFSET UNITYSDK_OFFSET(0x1D58A440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchCharacterAnchorV2_TypeDefinitionIndex = 20333;

	class SwitchCharacterAnchorV2 : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::SwitchCharacterAnchor* SwitchCharacterAnchorConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCHARACTERANCHORV2__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D215A8891292D573(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchCharacterAnchorV2*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchCharacterAnchorV2*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCHARACTERANCHORV2_METHOD_3_D215A8891292D573_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D709BDF68C1F2F30(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchCharacterAnchorV2* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchCharacterAnchorV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCHARACTERANCHORV2_METHOD_3_D709BDF68C1F2F30_OFFSET))(a1, a2);
		}
	};
}
