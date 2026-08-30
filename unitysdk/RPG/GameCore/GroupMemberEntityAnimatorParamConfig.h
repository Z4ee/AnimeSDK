#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimatorParameterType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define RPG_GAMECORE_GROUPMEMBERENTITYANIMATORPARAMCONFIG_METHOD_2_10FA7D19B6D28272_OFFSET UNITYSDK_OFFSET(0x1D3C2F10)
#define RPG_GAMECORE_GROUPMEMBERENTITYANIMATORPARAMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3C3120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GroupMemberEntityAnimatorParamConfig_TypeDefinitionIndex = 20499;

	class GroupMemberEntityAnimatorParamConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* ParameterName; // 0x10
		::RPG::GameCore::AnimatorParameterType ParameterType; // 0x18
		::RPG::GameCore::DynamicFloat* Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPMEMBERENTITYANIMATORPARAMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_10FA7D19B6D28272(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GroupMemberEntityAnimatorParamConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GroupMemberEntityAnimatorParamConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPMEMBERENTITYANIMATORPARAMCONFIG_METHOD_2_10FA7D19B6D28272_OFFSET))(a1, a2);
		}
	};
}
