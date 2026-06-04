#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimatorParameterType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SETCOMPONENTASSETANIMPARAMETERCONFIG_METHOD_2_14E5E99F3751DBD5_OFFSET UNITYSDK_OFFSET(0x19C31980)
#define RPG_GAMECORE_SETCOMPONENTASSETANIMPARAMETERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19C31AE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetComponentAssetAnimParameterConfig_TypeDefinitionIndex = 21567;

	class SetComponentAssetAnimParameterConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::AnimatorParameterType Type; // 0x10
		::System::String* Name; // 0x18
		::System::Single Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCOMPONENTASSETANIMPARAMETERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_14E5E99F3751DBD5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetComponentAssetAnimParameterConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetComponentAssetAnimParameterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCOMPONENTASSETANIMPARAMETERCONFIG_METHOD_2_14E5E99F3751DBD5_OFFSET))(a1, a2);
		}
	};
}
