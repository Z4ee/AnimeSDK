#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PropSpecialVisionConfig; }

#define RPG_GAMECORE_SETPROPSPECIALVISIONCONFIG_METHOD_3_47AA6EF33BC51B84_OFFSET UNITYSDK_OFFSET(0x18E3F940)
#define RPG_GAMECORE_SETPROPSPECIALVISIONCONFIG_METHOD_3_6AAB7D00CBA6A51D_OFFSET UNITYSDK_OFFSET(0x18E3F9C0)
#define RPG_GAMECORE_SETPROPSPECIALVISIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18E3F990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetPropSpecialVisionConfig_TypeDefinitionIndex = 19467;

	class SetPropSpecialVisionConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PropSpecialVisionConfig*>* SpecialVisionConfigs; // 0x18
		::System::Boolean IsTriggerScanEffect; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPROPSPECIALVISIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_47AA6EF33BC51B84(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetPropSpecialVisionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetPropSpecialVisionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPROPSPECIALVISIONCONFIG_METHOD_3_47AA6EF33BC51B84_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6AAB7D00CBA6A51D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetPropSpecialVisionConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetPropSpecialVisionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPROPSPECIALVISIONCONFIG_METHOD_3_6AAB7D00CBA6A51D_OFFSET))(a1, a2);
		}
	};
}
