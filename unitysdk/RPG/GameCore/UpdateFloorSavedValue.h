#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_UPDATEFLOORSAVEDVALUE_METHOD_3_1A787CBD54186202_OFFSET UNITYSDK_OFFSET(0x1D624550)
#define RPG_GAMECORE_UPDATEFLOORSAVEDVALUE_METHOD_3_9879CAAF2AD566E6_OFFSET UNITYSDK_OFFSET(0x1D624500)
#define RPG_GAMECORE_UPDATEFLOORSAVEDVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D624540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UpdateFloorSavedValue_TypeDefinitionIndex = 20466;

	class UpdateFloorSavedValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UPDATEFLOORSAVEDVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9879CAAF2AD566E6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UpdateFloorSavedValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UpdateFloorSavedValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UPDATEFLOORSAVEDVALUE_METHOD_3_9879CAAF2AD566E6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1A787CBD54186202(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UpdateFloorSavedValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UpdateFloorSavedValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UPDATEFLOORSAVEDVALUE_METHOD_3_1A787CBD54186202_OFFSET))(a1, a2);
		}
	};
}
