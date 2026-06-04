#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SHOWBONUSUIEFFECT_METHOD_3_E2A6EB791A728A96_OFFSET UNITYSDK_OFFSET(0x19C76F60)
#define RPG_GAMECORE_SHOWBONUSUIEFFECT_METHOD_3_FC44263FF04FC997_OFFSET UNITYSDK_OFFSET(0x19C76EE0)
#define RPG_GAMECORE_SHOWBONUSUIEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x19C76F30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowBonusUIEffect_TypeDefinitionIndex = 22024;

	class ShowBonusUIEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* UIPrefabPath; // 0x18
		::RPG::Client::TextID TitleTextID; // 0x20
		::System::String* ImagePath; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBONUSUIEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FC44263FF04FC997(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowBonusUIEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowBonusUIEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBONUSUIEFFECT_METHOD_3_FC44263FF04FC997_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E2A6EB791A728A96(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowBonusUIEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowBonusUIEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBONUSUIEFFECT_METHOD_3_E2A6EB791A728A96_OFFSET))(a1, a2);
		}
	};
}
