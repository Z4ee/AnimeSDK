#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TutorialLevelEvent.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_WAITTUTORIAL_METHOD_3_13F7640F0FE4C664_OFFSET UNITYSDK_OFFSET(0x1910B550)
#define RPG_GAMECORE_WAITTUTORIAL_METHOD_3_FEDAF34D6D9F2615_OFFSET UNITYSDK_OFFSET(0x1910B5D0)
#define RPG_GAMECORE_WAITTUTORIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1910B5A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitTutorial_TypeDefinitionIndex = 23330;

	class WaitTutorial : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TutorialLevelEvent Event; // 0x18
		::System::String* Param; // 0x20
		::System::Boolean GoNextImmediately; // 0x28
		::System::Boolean BlockOnWaiting; // 0x29
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSuccessImmediate; // 0x30
		::System::UInt32 MaxWaitTime; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTUTORIAL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_13F7640F0FE4C664(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitTutorial*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitTutorial*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTUTORIAL_METHOD_3_13F7640F0FE4C664_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FEDAF34D6D9F2615(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitTutorial* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitTutorial*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTUTORIAL_METHOD_3_FEDAF34D6D9F2615_OFFSET))(a1, a2);
		}
	};
}
