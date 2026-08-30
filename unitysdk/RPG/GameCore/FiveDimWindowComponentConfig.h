#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMWINDOWCOMPONENTCONFIG_METHOD_3_6338C56FAF08C284_OFFSET UNITYSDK_OFFSET(0x1D109560)
#define RPG_GAMECORE_FIVEDIMWINDOWCOMPONENTCONFIG_METHOD_3_B26074C86B26F650_OFFSET UNITYSDK_OFFSET(0x1D109640)
#define RPG_GAMECORE_FIVEDIMWINDOWCOMPONENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D109630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimWindowComponentConfig_TypeDefinitionIndex = 18619;

	class FiveDimWindowComponentConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::String* BgPath; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMWINDOWCOMPONENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6338C56FAF08C284(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimWindowComponentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimWindowComponentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMWINDOWCOMPONENTCONFIG_METHOD_3_6338C56FAF08C284_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B26074C86B26F650(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimWindowComponentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimWindowComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMWINDOWCOMPONENTCONFIG_METHOD_3_B26074C86B26F650_OFFSET))(a1, a2);
		}
	};
}
