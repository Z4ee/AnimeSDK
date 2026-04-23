#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOCKFOV_METHOD_3_708738909936C110_OFFSET UNITYSDK_OFFSET(0x18A78B20)
#define RPG_GAMECORE_LOCKFOV_METHOD_3_77C4B3EB03F0C0C9_OFFSET UNITYSDK_OFFSET(0x18A78AA0)
#define RPG_GAMECORE_LOCKFOV__CTOR_OFFSET UNITYSDK_OFFSET(0x18A78AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LockFov_TypeDefinitionIndex = 19821;

	class LockFov : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Lock; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKFOV__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_77C4B3EB03F0C0C9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LockFov*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LockFov*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKFOV_METHOD_3_77C4B3EB03F0C0C9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_708738909936C110(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LockFov* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LockFov*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKFOV_METHOD_3_708738909936C110_OFFSET))(a1, a2);
		}
	};
}
