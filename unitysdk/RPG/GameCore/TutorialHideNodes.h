#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TUTORIALHIDENODES_METHOD_3_46DA45E098894395_OFFSET UNITYSDK_OFFSET(0x1D6184E0)
#define RPG_GAMECORE_TUTORIALHIDENODES_METHOD_3_EB7CE512AA12E756_OFFSET UNITYSDK_OFFSET(0x1D6184A0)
#define RPG_GAMECORE_TUTORIALHIDENODES__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6184D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialHideNodes_TypeDefinitionIndex = 24098;

	class TutorialHideNodes : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::String*>* NodeIDList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALHIDENODES__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EB7CE512AA12E756(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialHideNodes*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialHideNodes*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALHIDENODES_METHOD_3_EB7CE512AA12E756_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_46DA45E098894395(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialHideNodes* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialHideNodes*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALHIDENODES_METHOD_3_46DA45E098894395_OFFSET))(a1, a2);
		}
	};
}
