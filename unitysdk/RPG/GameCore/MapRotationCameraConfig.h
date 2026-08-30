#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MAPROTATIONCAMERACONFIG_METHOD_2_FE2972EEAE53C97D_OFFSET UNITYSDK_OFFSET(0x1D225D30)
#define RPG_GAMECORE_MAPROTATIONCAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D225E80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapRotationCameraConfig_TypeDefinitionIndex = 16839;

	class MapRotationCameraConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* ConfigPath; // 0x10
		::System::Single InBlendTime; // 0x18
		::System::Single OutBlendTime; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONCAMERACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_FE2972EEAE53C97D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MapRotationCameraConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MapRotationCameraConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONCAMERACONFIG_METHOD_2_FE2972EEAE53C97D_OFFSET))(a1, a2);
		}
	};
}
