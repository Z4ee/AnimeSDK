#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERCUSTOMPHOTOGRAPHCONDITION_METHOD_3_2091F1A9B473AE55_OFFSET UNITYSDK_OFFSET(0x1B047C10)
#define RPG_GAMECORE_TRIGGERCUSTOMPHOTOGRAPHCONDITION_METHOD_3_75232C7FF086FA78_OFFSET UNITYSDK_OFFSET(0x1B047C50)
#define RPG_GAMECORE_TRIGGERCUSTOMPHOTOGRAPHCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B047C40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerCustomPhotoGraphCondition_TypeDefinitionIndex = 20831;

	class TriggerCustomPhotoGraphCondition : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* PhotoGraphName; // 0x18
		::System::String* CustomEvent; // 0x20
		::System::Boolean Enable; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERCUSTOMPHOTOGRAPHCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2091F1A9B473AE55(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerCustomPhotoGraphCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerCustomPhotoGraphCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERCUSTOMPHOTOGRAPHCONDITION_METHOD_3_2091F1A9B473AE55_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_75232C7FF086FA78(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerCustomPhotoGraphCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerCustomPhotoGraphCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERCUSTOMPHOTOGRAPHCONDITION_METHOD_3_75232C7FF086FA78_OFFSET))(a1, a2);
		}
	};
}
