#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITSERVERFLOORSAVEDVALUECHANGE_METHOD_3_A08E825C521A5BA3_OFFSET UNITYSDK_OFFSET(0x19E60D70)
#define RPG_GAMECORE_WAITSERVERFLOORSAVEDVALUECHANGE_METHOD_3_D505A0CBD9755EBC_OFFSET UNITYSDK_OFFSET(0x19E60D00)
#define RPG_GAMECORE_WAITSERVERFLOORSAVEDVALUECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x19E60D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitServerFloorSavedValueChange_TypeDefinitionIndex = 21024;

	class WaitServerFloorSavedValueChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSERVERFLOORSAVEDVALUECHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D505A0CBD9755EBC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitServerFloorSavedValueChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitServerFloorSavedValueChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSERVERFLOORSAVEDVALUECHANGE_METHOD_3_D505A0CBD9755EBC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A08E825C521A5BA3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitServerFloorSavedValueChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitServerFloorSavedValueChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSERVERFLOORSAVEDVALUECHANGE_METHOD_3_A08E825C521A5BA3_OFFSET))(a1, a2);
		}
	};
}
