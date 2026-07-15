#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicStringList; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_WAITMAPPOSESWITCHERREMOVE_METHOD_4_181ECC86248BEF6A_OFFSET UNITYSDK_OFFSET(0x1B8A7C50)
#define RPG_GAMECORE_WAITMAPPOSESWITCHERREMOVE_METHOD_4_26B6D3C242A20877_OFFSET UNITYSDK_OFFSET(0x1B8A7CA0)
#define RPG_GAMECORE_WAITMAPPOSESWITCHERREMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8A7C90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitMapPoseSwitcherRemove_TypeDefinitionIndex = 20466;

	class WaitMapPoseSwitcherRemove : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::RPG::GameCore::DynamicStringList* VolumeInstanceIDs; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnChange; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMAPPOSESWITCHERREMOVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_181ECC86248BEF6A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitMapPoseSwitcherRemove*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitMapPoseSwitcherRemove*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMAPPOSESWITCHERREMOVE_METHOD_4_181ECC86248BEF6A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_26B6D3C242A20877(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitMapPoseSwitcherRemove* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitMapPoseSwitcherRemove*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMAPPOSESWITCHERREMOVE_METHOD_4_26B6D3C242A20877_OFFSET))(a1, a2);
		}
	};
}
