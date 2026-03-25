#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SHOWSPEICALAVATARHUDCONTAINERPANEL_METHOD_3_2AC11EB9775459B2_OFFSET UNITYSDK_OFFSET(0x17704520)
#define RPG_GAMECORE_SHOWSPEICALAVATARHUDCONTAINERPANEL_METHOD_3_5EF0B357727ECBBC_OFFSET UNITYSDK_OFFSET(0x177045F0)
#define RPG_GAMECORE_SHOWSPEICALAVATARHUDCONTAINERPANEL__CTOR_OFFSET UNITYSDK_OFFSET(0x177045A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowSpeicalAvatarHUDContainerPanel_TypeDefinitionIndex = 21389;

	class ShowSpeicalAvatarHUDContainerPanel : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsShow; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSPEICALAVATARHUDCONTAINERPANEL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2AC11EB9775459B2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowSpeicalAvatarHUDContainerPanel*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowSpeicalAvatarHUDContainerPanel*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSPEICALAVATARHUDCONTAINERPANEL_METHOD_3_2AC11EB9775459B2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5EF0B357727ECBBC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowSpeicalAvatarHUDContainerPanel* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowSpeicalAvatarHUDContainerPanel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSPEICALAVATARHUDCONTAINERPANEL_METHOD_3_5EF0B357727ECBBC_OFFSET))(a1, a2);
		}
	};
}
