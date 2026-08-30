#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMETRANSFORMCOMPONENTCONFIG_METHOD_3_B30215058B13169B_OFFSET UNITYSDK_OFFSET(0x1D206970)
#define RPG_GAMECORE_LITTLEGAMETRANSFORMCOMPONENTCONFIG_METHOD_3_F8738315250329FC_OFFSET UNITYSDK_OFFSET(0x1D2069D0)
#define RPG_GAMECORE_LITTLEGAMETRANSFORMCOMPONENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2069B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameTransformComponentConfig_TypeDefinitionIndex = 18635;

	class LittleGameTransformComponentConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::RPG::MVector3 Position; // 0x10
		::RPG::MVector3 Rotation; // 0x1C
		::RPG::MVector3 Scale; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMETRANSFORMCOMPONENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B30215058B13169B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameTransformComponentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameTransformComponentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMETRANSFORMCOMPONENTCONFIG_METHOD_3_B30215058B13169B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F8738315250329FC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameTransformComponentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameTransformComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMETRANSFORMCOMPONENTCONFIG_METHOD_3_F8738315250329FC_OFFSET))(a1, a2);
		}
	};
}
