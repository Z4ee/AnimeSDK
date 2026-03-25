#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETFLOORSAVEDVALUE_METHOD_3_5438514AFF0ED806_OFFSET UNITYSDK_OFFSET(0x176CF440)
#define RPG_GAMECORE_SETFLOORSAVEDVALUE_METHOD_3_CC49FB8F677CDD21_OFFSET UNITYSDK_OFFSET(0x176CF4B0)
#define RPG_GAMECORE_SETFLOORSAVEDVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x176CF480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetFloorSavedValue_TypeDefinitionIndex = 19022;

	class SetFloorSavedValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFLOORSAVEDVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5438514AFF0ED806(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetFloorSavedValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetFloorSavedValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFLOORSAVEDVALUE_METHOD_3_5438514AFF0ED806_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CC49FB8F677CDD21(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetFloorSavedValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetFloorSavedValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFLOORSAVEDVALUE_METHOD_3_CC49FB8F677CDD21_OFFSET))(a1, a2);
		}
	};
}
