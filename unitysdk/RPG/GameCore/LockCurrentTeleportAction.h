#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_LOCKCURRENTTELEPORTACTION_METHOD_3_1B997A84F0FF4996_OFFSET UNITYSDK_OFFSET(0x1BCCED20)
#define RPG_GAMECORE_LOCKCURRENTTELEPORTACTION_METHOD_3_EDE4EE10DAAD0DCB_OFFSET UNITYSDK_OFFSET(0x1BCCECE0)
#define RPG_GAMECORE_LOCKCURRENTTELEPORTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCCED10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LockCurrentTeleportAction_TypeDefinitionIndex = 20861;

	class LockCurrentTeleportAction : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 PlaneID; // 0x18
		::System::UInt32 FloorID; // 0x1C
		::System::Boolean Enable; // 0x20
		::System::String* ToastTextString; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKCURRENTTELEPORTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EDE4EE10DAAD0DCB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LockCurrentTeleportAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LockCurrentTeleportAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKCURRENTTELEPORTACTION_METHOD_3_EDE4EE10DAAD0DCB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1B997A84F0FF4996(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LockCurrentTeleportAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LockCurrentTeleportAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKCURRENTTELEPORTACTION_METHOD_3_1B997A84F0FF4996_OFFSET))(a1, a2);
		}
	};
}
