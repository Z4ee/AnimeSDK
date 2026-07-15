#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_VISIONBASECONFIG_METHOD_2_BA507DEA0274B1FE_OFFSET UNITYSDK_OFFSET(0x1B89CBD0)
#define RPG_GAMECORE_VISIONBASECONFIG_METHOD_2_D349B65F483C2B0F_OFFSET UNITYSDK_OFFSET(0x1B89CE60)
#define RPG_GAMECORE_VISIONBASECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B89CE50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VisionBaseConfig_TypeDefinitionIndex = 19222;

	class VisionBaseConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* VisionID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VISIONBASECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_BA507DEA0274B1FE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VisionBaseConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VisionBaseConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VISIONBASECONFIG_METHOD_2_BA507DEA0274B1FE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_D349B65F483C2B0F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VisionBaseConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VisionBaseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VISIONBASECONFIG_METHOD_2_D349B65F483C2B0F_OFFSET))(a1, a2);
		}
	};
}
