#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FieldHideMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_HIDEFIELDEFFECT_METHOD_3_73287E50E02900D9_OFFSET UNITYSDK_OFFSET(0x19830DD0)
#define RPG_GAMECORE_HIDEFIELDEFFECT_METHOD_3_F41DFC966CDF4850_OFFSET UNITYSDK_OFFSET(0x19830E70)
#define RPG_GAMECORE_HIDEFIELDEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x19830E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HideFieldEffect_TypeDefinitionIndex = 21470;

	class HideFieldEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsHide; // 0x18
		::RPG::GameCore::FieldHideMode FieldHideMode; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEFIELDEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_73287E50E02900D9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HideFieldEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HideFieldEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEFIELDEFFECT_METHOD_3_73287E50E02900D9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F41DFC966CDF4850(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HideFieldEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HideFieldEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEFIELDEFFECT_METHOD_3_F41DFC966CDF4850_OFFSET))(a1, a2);
		}
	};
}
