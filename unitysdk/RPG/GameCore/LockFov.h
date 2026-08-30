#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOCKFOV_METHOD_3_186D5EFE9AECEE30_OFFSET UNITYSDK_OFFSET(0x1D2101F0)
#define RPG_GAMECORE_LOCKFOV_METHOD_3_FD388F4EB8966695_OFFSET UNITYSDK_OFFSET(0x1D210240)
#define RPG_GAMECORE_LOCKFOV__CTOR_OFFSET UNITYSDK_OFFSET(0x1D210230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LockFov_TypeDefinitionIndex = 20600;

	class LockFov : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Lock; // 0x18
		::System::Boolean RetainLockedValue; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKFOV__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_186D5EFE9AECEE30(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LockFov*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LockFov*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKFOV_METHOD_3_186D5EFE9AECEE30_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FD388F4EB8966695(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LockFov* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LockFov*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKFOV_METHOD_3_FD388F4EB8966695_OFFSET))(a1, a2);
		}
	};
}
