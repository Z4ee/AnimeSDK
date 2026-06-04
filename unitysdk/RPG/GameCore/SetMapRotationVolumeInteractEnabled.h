#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETMAPROTATIONVOLUMEINTERACTENABLED_METHOD_3_7E51248E0FFADF6E_OFFSET UNITYSDK_OFFSET(0x19C54D90)
#define RPG_GAMECORE_SETMAPROTATIONVOLUMEINTERACTENABLED_METHOD_3_CCC5BD0DEBC4879F_OFFSET UNITYSDK_OFFSET(0x19C54E10)
#define RPG_GAMECORE_SETMAPROTATIONVOLUMEINTERACTENABLED__CTOR_OFFSET UNITYSDK_OFFSET(0x19C54DE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetMapRotationVolumeInteractEnabled_TypeDefinitionIndex = 19772;

	class SetMapRotationVolumeInteractEnabled : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMAPROTATIONVOLUMEINTERACTENABLED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7E51248E0FFADF6E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMapRotationVolumeInteractEnabled*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMapRotationVolumeInteractEnabled*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMAPROTATIONVOLUMEINTERACTENABLED_METHOD_3_7E51248E0FFADF6E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CCC5BD0DEBC4879F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMapRotationVolumeInteractEnabled* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMapRotationVolumeInteractEnabled*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMAPROTATIONVOLUMEINTERACTENABLED_METHOD_3_CCC5BD0DEBC4879F_OFFSET))(a1, a2);
		}
	};
}
