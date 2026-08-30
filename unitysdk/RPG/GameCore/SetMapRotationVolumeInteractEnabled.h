#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETMAPROTATIONVOLUMEINTERACTENABLED_METHOD_3_030856F7C864F304_OFFSET UNITYSDK_OFFSET(0x1E084F40)
#define RPG_GAMECORE_SETMAPROTATIONVOLUMEINTERACTENABLED_METHOD_3_CCC5BD0DEBC4879F_OFFSET UNITYSDK_OFFSET(0x1E084F80)
#define RPG_GAMECORE_SETMAPROTATIONVOLUMEINTERACTENABLED__CTOR_OFFSET UNITYSDK_OFFSET(0x1E084F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetMapRotationVolumeInteractEnabled_TypeDefinitionIndex = 20679;

	class SetMapRotationVolumeInteractEnabled : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMAPROTATIONVOLUMEINTERACTENABLED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_030856F7C864F304(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMapRotationVolumeInteractEnabled*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMapRotationVolumeInteractEnabled*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMAPROTATIONVOLUMEINTERACTENABLED_METHOD_3_030856F7C864F304_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CCC5BD0DEBC4879F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMapRotationVolumeInteractEnabled* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMapRotationVolumeInteractEnabled*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMAPROTATIONVOLUMEINTERACTENABLED_METHOD_3_CCC5BD0DEBC4879F_OFFSET))(a1, a2);
		}
	};
}
