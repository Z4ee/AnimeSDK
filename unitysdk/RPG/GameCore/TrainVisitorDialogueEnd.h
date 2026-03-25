#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINVISITORDIALOGUEEND_METHOD_3_C27005E61FB51500_OFFSET UNITYSDK_OFFSET(0x178B3290)
#define RPG_GAMECORE_TRAINVISITORDIALOGUEEND_METHOD_3_EA3498B933C26EB4_OFFSET UNITYSDK_OFFSET(0x178B3180)
#define RPG_GAMECORE_TRAINVISITORDIALOGUEEND__CTOR_OFFSET UNITYSDK_OFFSET(0x178B3260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainVisitorDialogueEnd_TypeDefinitionIndex = 19755;

	class TrainVisitorDialogueEnd : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINVISITORDIALOGUEEND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EA3498B933C26EB4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainVisitorDialogueEnd*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainVisitorDialogueEnd*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINVISITORDIALOGUEEND_METHOD_3_EA3498B933C26EB4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C27005E61FB51500(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainVisitorDialogueEnd* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainVisitorDialogueEnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINVISITORDIALOGUEEND_METHOD_3_C27005E61FB51500_OFFSET))(a1, a2);
		}
	};
}
