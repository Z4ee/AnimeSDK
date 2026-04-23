#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOCKORTHOGRAPHICRESET_METHOD_3_3C6365E725D03223_OFFSET UNITYSDK_OFFSET(0x18A79200)
#define RPG_GAMECORE_LOCKORTHOGRAPHICRESET_METHOD_3_D682325F179F371A_OFFSET UNITYSDK_OFFSET(0x18A79280)
#define RPG_GAMECORE_LOCKORTHOGRAPHICRESET__CTOR_OFFSET UNITYSDK_OFFSET(0x18A79250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LockOrthographicReset_TypeDefinitionIndex = 19820;

	class LockOrthographicReset : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Lock; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKORTHOGRAPHICRESET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3C6365E725D03223(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LockOrthographicReset*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LockOrthographicReset*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKORTHOGRAPHICRESET_METHOD_3_3C6365E725D03223_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D682325F179F371A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LockOrthographicReset* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LockOrthographicReset*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKORTHOGRAPHICRESET_METHOD_3_D682325F179F371A_OFFSET))(a1, a2);
		}
	};
}
