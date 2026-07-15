#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_VISIONSETCONFIG_METHOD_2_B050646BA7D6A10F_OFFSET UNITYSDK_OFFSET(0x1B89D2D0)
#define RPG_GAMECORE_VISIONSETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B89D390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VisionSetConfig_TypeDefinitionIndex = 16730;

	class VisionSetConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* VisionNames; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VISIONSETCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B050646BA7D6A10F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VisionSetConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VisionSetConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VISIONSETCONFIG_METHOD_2_B050646BA7D6A10F_OFFSET))(a1, a2);
		}
	};
}
