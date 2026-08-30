#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINVISITORDIALOGUEEND_METHOD_3_69DB0EBC903AEBBD_OFFSET UNITYSDK_OFFSET(0x1D53C920)
#define RPG_GAMECORE_TRAINVISITORDIALOGUEEND_METHOD_3_C27005E61FB51500_OFFSET UNITYSDK_OFFSET(0x1D53C9F0)
#define RPG_GAMECORE_TRAINVISITORDIALOGUEEND__CTOR_OFFSET UNITYSDK_OFFSET(0x1D53C9E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainVisitorDialogueEnd_TypeDefinitionIndex = 21349;

	class TrainVisitorDialogueEnd : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINVISITORDIALOGUEEND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_69DB0EBC903AEBBD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainVisitorDialogueEnd*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainVisitorDialogueEnd*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINVISITORDIALOGUEEND_METHOD_3_69DB0EBC903AEBBD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C27005E61FB51500(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainVisitorDialogueEnd* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainVisitorDialogueEnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINVISITORDIALOGUEEND_METHOD_3_C27005E61FB51500_OFFSET))(a1, a2);
		}
	};
}
