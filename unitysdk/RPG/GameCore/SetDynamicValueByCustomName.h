#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETDYNAMICVALUEBYCUSTOMNAME_METHOD_3_69ACC753346F8C64_OFFSET UNITYSDK_OFFSET(0x18E1F6F0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYCUSTOMNAME_METHOD_3_E0CFEF4D4D40A1DB_OFFSET UNITYSDK_OFFSET(0x18E1F680)
#define RPG_GAMECORE_SETDYNAMICVALUEBYCUSTOMNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x18E1F6C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByCustomName_TypeDefinitionIndex = 20650;

	class SetDynamicValueByCustomName : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYCUSTOMNAME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E0CFEF4D4D40A1DB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByCustomName*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByCustomName*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYCUSTOMNAME_METHOD_3_E0CFEF4D4D40A1DB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_69ACC753346F8C64(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByCustomName* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByCustomName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYCUSTOMNAME_METHOD_3_69ACC753346F8C64_OFFSET))(a1, a2);
		}
	};
}
