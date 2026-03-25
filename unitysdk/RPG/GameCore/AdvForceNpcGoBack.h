#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVFORCENPCGOBACK_METHOD_3_DB4844A03491DE0F_OFFSET UNITYSDK_OFFSET(0x16F2F8D0)
#define RPG_GAMECORE_ADVFORCENPCGOBACK_METHOD_3_E027A13F72D7EBD0_OFFSET UNITYSDK_OFFSET(0x16F2F950)
#define RPG_GAMECORE_ADVFORCENPCGOBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x16F2F920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvForceNpcGoBack_TypeDefinitionIndex = 20132;

	class AdvForceNpcGoBack : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GroupID; // 0x18
		::System::UInt32 InstanceID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVFORCENPCGOBACK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DB4844A03491DE0F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvForceNpcGoBack*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvForceNpcGoBack*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVFORCENPCGOBACK_METHOD_3_DB4844A03491DE0F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E027A13F72D7EBD0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvForceNpcGoBack* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvForceNpcGoBack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVFORCENPCGOBACK_METHOD_3_E027A13F72D7EBD0_OFFSET))(a1, a2);
		}
	};
}
