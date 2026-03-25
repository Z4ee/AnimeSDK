#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_VISIONSETCONFIG_METHOD_2_28E7DD0C78DE6692_OFFSET UNITYSDK_OFFSET(0x178F15C0)
#define RPG_GAMECORE_VISIONSETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x178F1690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VisionSetConfig_TypeDefinitionIndex = 16008;

	class VisionSetConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* VisionNames; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VISIONSETCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_28E7DD0C78DE6692(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VisionSetConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VisionSetConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VISIONSETCONFIG_METHOD_2_28E7DD0C78DE6692_OFFSET))(a1, a2);
		}
	};
}
