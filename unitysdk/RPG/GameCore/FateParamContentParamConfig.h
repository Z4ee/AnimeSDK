#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateContentParamType.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEPARAMCONTENTPARAMCONFIG_METHOD_6_39D8CA798F283436_OFFSET UNITYSDK_OFFSET(0x171C9D90)
#define RPG_GAMECORE_FATEPARAMCONTENTPARAMCONFIG_METHOD_6_8DBA3347423EB976_OFFSET UNITYSDK_OFFSET(0x171C9BA0)
#define RPG_GAMECORE_FATEPARAMCONTENTPARAMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171C9CD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamContentParamConfig_TypeDefinitionIndex = 15243;

	class FateParamContentParamConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::RPG::GameCore::FateContentParamType ParamType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMCONTENTPARAMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_8DBA3347423EB976(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamContentParamConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamContentParamConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMCONTENTPARAMCONFIG_METHOD_6_8DBA3347423EB976_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_39D8CA798F283436(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamContentParamConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamContentParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMCONTENTPARAMCONFIG_METHOD_6_39D8CA798F283436_OFFSET))(a1, a2);
		}
	};
}
