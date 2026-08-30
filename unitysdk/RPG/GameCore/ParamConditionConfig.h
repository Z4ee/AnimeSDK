#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MiConditionConfigBase; }

#define RPG_GAMECORE_PARAMCONDITIONCONFIG_METHOD_4_77F5B6C6BD27B5A5_OFFSET UNITYSDK_OFFSET(0x1D30A820)
#define RPG_GAMECORE_PARAMCONDITIONCONFIG_METHOD_4_89B0F4725D3BD5BD_OFFSET UNITYSDK_OFFSET(0x1D30A7C0)
#define RPG_GAMECORE_PARAMCONDITIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D30A810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParamConditionConfig_TypeDefinitionIndex = 16897;

	class ParamConditionConfig : public ::RPG::GameCore::MiParameterConfigBase
	{
	public:
		::RPG::GameCore::MiConditionConfigBase* Condition; // 0x10
		::RPG::GameCore::MiParameterConfigBase* SuccValue; // 0x18
		::RPG::GameCore::MiParameterConfigBase* FailValue; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMCONDITIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_89B0F4725D3BD5BD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParamConditionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParamConditionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMCONDITIONCONFIG_METHOD_4_89B0F4725D3BD5BD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_77F5B6C6BD27B5A5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParamConditionConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParamConditionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMCONDITIONCONFIG_METHOD_4_77F5B6C6BD27B5A5_OFFSET))(a1, a2);
		}
	};
}
