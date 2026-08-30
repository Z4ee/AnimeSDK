#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TUTORIALREMOVEHIDENODES_METHOD_3_BC57F99E325F3EBE_OFFSET UNITYSDK_OFFSET(0x1D618FF0)
#define RPG_GAMECORE_TUTORIALREMOVEHIDENODES_METHOD_3_E68BCE07A9652B3D_OFFSET UNITYSDK_OFFSET(0x1D619030)
#define RPG_GAMECORE_TUTORIALREMOVEHIDENODES__CTOR_OFFSET UNITYSDK_OFFSET(0x1D619020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialRemoveHideNodes_TypeDefinitionIndex = 24099;

	class TutorialRemoveHideNodes : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::String*>* NodeIDList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALREMOVEHIDENODES__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BC57F99E325F3EBE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialRemoveHideNodes*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialRemoveHideNodes*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALREMOVEHIDENODES_METHOD_3_BC57F99E325F3EBE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E68BCE07A9652B3D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialRemoveHideNodes* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialRemoveHideNodes*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALREMOVEHIDENODES_METHOD_3_E68BCE07A9652B3D_OFFSET))(a1, a2);
		}
	};
}
