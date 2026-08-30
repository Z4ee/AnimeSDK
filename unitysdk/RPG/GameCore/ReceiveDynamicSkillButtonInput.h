#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/SkillInputType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RECEIVEDYNAMICSKILLBUTTONINPUT_METHOD_3_422D987F46A819D9_OFFSET UNITYSDK_OFFSET(0x1D38A390)
#define RPG_GAMECORE_RECEIVEDYNAMICSKILLBUTTONINPUT_METHOD_3_C75F873EF6EB9684_OFFSET UNITYSDK_OFFSET(0x1D38A3E0)
#define RPG_GAMECORE_RECEIVEDYNAMICSKILLBUTTONINPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D38A3D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ReceiveDynamicSkillButtonInput_TypeDefinitionIndex = 22588;

	class ReceiveDynamicSkillButtonInput : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ControlSkillType>* Slots; // 0x18
		::RPG::GameCore::SkillInputType InputType; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnReceive; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEmpty; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECEIVEDYNAMICSKILLBUTTONINPUT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_422D987F46A819D9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ReceiveDynamicSkillButtonInput*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ReceiveDynamicSkillButtonInput*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECEIVEDYNAMICSKILLBUTTONINPUT_METHOD_3_422D987F46A819D9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C75F873EF6EB9684(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ReceiveDynamicSkillButtonInput* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ReceiveDynamicSkillButtonInput*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECEIVEDYNAMICSKILLBUTTONINPUT_METHOD_3_C75F873EF6EB9684_OFFSET))(a1, a2);
		}
	};
}
