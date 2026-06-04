#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CONVINCEHPCHANGE_METHOD_3_41403969C121FA1C_OFFSET UNITYSDK_OFFSET(0x1967CFE0)
#define RPG_GAMECORE_CONVINCEHPCHANGE_METHOD_3_E67577D54C177CBD_OFFSET UNITYSDK_OFFSET(0x1967D060)
#define RPG_GAMECORE_CONVINCEHPCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1967D030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConvinceHpChange_TypeDefinitionIndex = 20614;

	class ConvinceHpChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 ChangeNum; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEHPCHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_41403969C121FA1C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConvinceHpChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConvinceHpChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEHPCHANGE_METHOD_3_41403969C121FA1C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E67577D54C177CBD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConvinceHpChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConvinceHpChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEHPCHANGE_METHOD_3_E67577D54C177CBD_OFFSET))(a1, a2);
		}
	};
}
