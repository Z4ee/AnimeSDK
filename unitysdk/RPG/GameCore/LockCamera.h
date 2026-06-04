#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOCKCAMERA_METHOD_3_B91E38D54A5EBE4A_OFFSET UNITYSDK_OFFSET(0x198AB370)
#define RPG_GAMECORE_LOCKCAMERA_METHOD_3_FD212F36C492D00B_OFFSET UNITYSDK_OFFSET(0x198AB400)
#define RPG_GAMECORE_LOCKCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x198AB3D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LockCamera_TypeDefinitionIndex = 19026;

	class LockCamera : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean LockAxisY; // 0x18
		::System::Boolean LockAxisX; // 0x19
		::System::Boolean LockZoom; // 0x1A
		::System::Boolean LockRecenterY; // 0x1B

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKCAMERA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B91E38D54A5EBE4A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LockCamera*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LockCamera*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKCAMERA_METHOD_3_B91E38D54A5EBE4A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FD212F36C492D00B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LockCamera* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LockCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKCAMERA_METHOD_3_FD212F36C492D00B_OFFSET))(a1, a2);
		}
	};
}
