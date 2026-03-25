#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GRAPHICSSETTINGREQUIREMENTS_METHOD_2_89B47EC7B70C3302_OFFSET UNITYSDK_OFFSET(0x1724C3F0)
#define RPG_GAMECORE_GRAPHICSSETTINGREQUIREMENTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1724C510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GraphicsSettingRequirements_TypeDefinitionIndex = 16763;

	class GraphicsSettingRequirements : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Info; // 0x10
		::Il2CppArray<::System::String*>* Values; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRAPHICSSETTINGREQUIREMENTS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_89B47EC7B70C3302(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GraphicsSettingRequirements*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GraphicsSettingRequirements*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRAPHICSSETTINGREQUIREMENTS_METHOD_2_89B47EC7B70C3302_OFFSET))(a1, a2);
		}
	};
}
