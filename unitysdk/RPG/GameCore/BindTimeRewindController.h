#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_BINDTIMEREWINDCONTROLLER_METHOD_3_689E39394DAE4803_OFFSET UNITYSDK_OFFSET(0x194DDFC0)
#define RPG_GAMECORE_BINDTIMEREWINDCONTROLLER_METHOD_3_AC36615E3A04220F_OFFSET UNITYSDK_OFFSET(0x194DDF40)
#define RPG_GAMECORE_BINDTIMEREWINDCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x194DDF90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BindTimeRewindController_TypeDefinitionIndex = 19505;

	class BindTimeRewindController : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DynamicFloat*>* ControlProps; // 0x18
		::RPG::GameCore::DynamicFloat* OpenDistrictGroupID; // 0x20
		::RPG::GameCore::DynamicFloat* OpenDistrictID; // 0x28
		::RPG::GameCore::DynamicFloat* EffectDistrictGroupID; // 0x30
		::RPG::GameCore::DynamicFloat* EffectDistrictID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BINDTIMEREWINDCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AC36615E3A04220F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BindTimeRewindController*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BindTimeRewindController*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BINDTIMEREWINDCONTROLLER_METHOD_3_AC36615E3A04220F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_689E39394DAE4803(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BindTimeRewindController* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BindTimeRewindController*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BINDTIMEREWINDCONTROLLER_METHOD_3_689E39394DAE4803_OFFSET))(a1, a2);
		}
	};
}
