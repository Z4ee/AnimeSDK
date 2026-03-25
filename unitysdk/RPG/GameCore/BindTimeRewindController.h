#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_BINDTIMEREWINDCONTROLLER_METHOD_3_396CCE7507433FB4_OFFSET UNITYSDK_OFFSET(0x16FE7190)
#define RPG_GAMECORE_BINDTIMEREWINDCONTROLLER_METHOD_3_9E969411FB557A31_OFFSET UNITYSDK_OFFSET(0x16FE7210)
#define RPG_GAMECORE_BINDTIMEREWINDCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16FE71E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BindTimeRewindController_TypeDefinitionIndex = 18960;

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

		static ::System::Void Method_3_396CCE7507433FB4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BindTimeRewindController*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BindTimeRewindController*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BINDTIMEREWINDCONTROLLER_METHOD_3_396CCE7507433FB4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9E969411FB557A31(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BindTimeRewindController* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BindTimeRewindController*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BINDTIMEREWINDCONTROLLER_METHOD_3_9E969411FB557A31_OFFSET))(a1, a2);
		}
	};
}
