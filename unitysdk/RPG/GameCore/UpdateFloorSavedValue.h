#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_UPDATEFLOORSAVEDVALUE_METHOD_3_1A787CBD54186202_OFFSET UNITYSDK_OFFSET(0x19E38780)
#define RPG_GAMECORE_UPDATEFLOORSAVEDVALUE_METHOD_3_76BE4E8005202442_OFFSET UNITYSDK_OFFSET(0x19E386F0)
#define RPG_GAMECORE_UPDATEFLOORSAVEDVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x19E38750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UpdateFloorSavedValue_TypeDefinitionIndex = 19561;

	class UpdateFloorSavedValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UPDATEFLOORSAVEDVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_76BE4E8005202442(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UpdateFloorSavedValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UpdateFloorSavedValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UPDATEFLOORSAVEDVALUE_METHOD_3_76BE4E8005202442_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1A787CBD54186202(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UpdateFloorSavedValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UpdateFloorSavedValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UPDATEFLOORSAVEDVALUE_METHOD_3_1A787CBD54186202_OFFSET))(a1, a2);
		}
	};
}
