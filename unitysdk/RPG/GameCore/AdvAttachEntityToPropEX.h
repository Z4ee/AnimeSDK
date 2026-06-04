#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_ADVATTACHENTITYTOPROPEX_METHOD_3_67C7EEE2696906E2_OFFSET UNITYSDK_OFFSET(0x19415320)
#define RPG_GAMECORE_ADVATTACHENTITYTOPROPEX_METHOD_3_CBD840F6FDA264F7_OFFSET UNITYSDK_OFFSET(0x194153A0)
#define RPG_GAMECORE_ADVATTACHENTITYTOPROPEX__CTOR_OFFSET UNITYSDK_OFFSET(0x19415370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvAttachEntityToPropEX_TypeDefinitionIndex = 20745;

	class AdvAttachEntityToPropEX : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* AttachedTarget; // 0x18
		::RPG::GameCore::DynamicString* AttachPointName; // 0x20
		::RPG::GameCore::DynamicString* AttachedPointName; // 0x28
		::RPG::MVector3 PositionOffset; // 0x30
		::RPG::MVector3 RotationOffset; // 0x3C
		::System::Boolean IsStop; // 0x48
		::System::Boolean SyncOnce; // 0x49

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVATTACHENTITYTOPROPEX__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_67C7EEE2696906E2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvAttachEntityToPropEX*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvAttachEntityToPropEX*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVATTACHENTITYTOPROPEX_METHOD_3_67C7EEE2696906E2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CBD840F6FDA264F7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvAttachEntityToPropEX* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvAttachEntityToPropEX*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVATTACHENTITYTOPROPEX_METHOD_3_CBD840F6FDA264F7_OFFSET))(a1, a2);
		}
	};
}
