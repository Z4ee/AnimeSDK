#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicStringList; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_WAITMAPPOSESWITCHERREMOVE_METHOD_4_26B6D3C242A20877_OFFSET UNITYSDK_OFFSET(0x191012B0)
#define RPG_GAMECORE_WAITMAPPOSESWITCHERREMOVE_METHOD_4_682C968F0C19F1B5_OFFSET UNITYSDK_OFFSET(0x191011D0)
#define RPG_GAMECORE_WAITMAPPOSESWITCHERREMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x19101250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitMapPoseSwitcherRemove_TypeDefinitionIndex = 20237;

	class WaitMapPoseSwitcherRemove : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::RPG::GameCore::DynamicStringList* VolumeInstanceIDs; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnChange; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMAPPOSESWITCHERREMOVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_682C968F0C19F1B5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitMapPoseSwitcherRemove*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitMapPoseSwitcherRemove*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMAPPOSESWITCHERREMOVE_METHOD_4_682C968F0C19F1B5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_26B6D3C242A20877(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitMapPoseSwitcherRemove* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitMapPoseSwitcherRemove*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMAPPOSESWITCHERREMOVE_METHOD_4_26B6D3C242A20877_OFFSET))(a1, a2);
		}
	};
}
