#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PropSpecialVisionConfig; }

#define RPG_GAMECORE_SETPROPSPECIALVISIONCONFIG_METHOD_3_0240071B9C7AC37F_OFFSET UNITYSDK_OFFSET(0x1E08BBB0)
#define RPG_GAMECORE_SETPROPSPECIALVISIONCONFIG_METHOD_3_E142C5397B5070CA_OFFSET UNITYSDK_OFFSET(0x1E08BB60)
#define RPG_GAMECORE_SETPROPSPECIALVISIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E08BBA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetPropSpecialVisionConfig_TypeDefinitionIndex = 20273;

	class SetPropSpecialVisionConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PropSpecialVisionConfig*>* SpecialVisionConfigs; // 0x18
		::System::Boolean IsTriggerScanEffect; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPROPSPECIALVISIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E142C5397B5070CA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetPropSpecialVisionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetPropSpecialVisionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPROPSPECIALVISIONCONFIG_METHOD_3_E142C5397B5070CA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0240071B9C7AC37F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetPropSpecialVisionConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetPropSpecialVisionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPROPSPECIALVISIONCONFIG_METHOD_3_0240071B9C7AC37F_OFFSET))(a1, a2);
		}
	};
}
