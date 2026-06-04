#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterSomatoType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SOMATOCOMMONCAMERACONFIG_METHOD_2_8EF0423777EA30A5_OFFSET UNITYSDK_OFFSET(0x19C8FCA0)
#define RPG_GAMECORE_SOMATOCOMMONCAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19C8FE10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SomatoCommonCameraConfig_TypeDefinitionIndex = 15608;

	class SomatoCommonCameraConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::CharacterSomatoType SomatoType; // 0x10
		::System::String* KeyName; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnStart; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SOMATOCOMMONCAMERACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_8EF0423777EA30A5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SomatoCommonCameraConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SomatoCommonCameraConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SOMATOCOMMONCAMERACONFIG_METHOD_2_8EF0423777EA30A5_OFFSET))(a1, a2);
		}
	};
}
