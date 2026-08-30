#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraTalk; }

#define RPG_GAMECORE_CHIMERATALKCONFIG_METHOD_2_4337A68CA6352481_OFFSET UNITYSDK_OFFSET(0x1CFBE890)
#define RPG_GAMECORE_CHIMERATALKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFD3490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraTalkConfig_TypeDefinitionIndex = 15676;

	class ChimeraTalkConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ChimeraTalk*>* TalkConfigs; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATALKCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_4337A68CA6352481(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraTalkConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraTalkConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATALKCONFIG_METHOD_2_4337A68CA6352481_OFFSET))(a1, a2);
		}
	};
}
