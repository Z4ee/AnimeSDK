#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETRANDOMCOUNTROGUEBUFFCONFIG_METHOD_6_25E4DABE7E60FCE1_OFFSET UNITYSDK_OFFSET(0x1D02DF10)
#define RPG_GAMECORE_ROGUEACTGETRANDOMCOUNTROGUEBUFFCONFIG_METHOD_6_25ECE5F9E78A79BD_OFFSET UNITYSDK_OFFSET(0x1D02DEC0)
#define RPG_GAMECORE_ROGUEACTGETRANDOMCOUNTROGUEBUFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D02DF00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetRandomCountRogueBuffConfig_TypeDefinitionIndex = 18833;

	class RogueActGetRandomCountRogueBuffConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETRANDOMCOUNTROGUEBUFFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_25ECE5F9E78A79BD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRandomCountRogueBuffConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRandomCountRogueBuffConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETRANDOMCOUNTROGUEBUFFCONFIG_METHOD_6_25ECE5F9E78A79BD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_25E4DABE7E60FCE1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRandomCountRogueBuffConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRandomCountRogueBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETRANDOMCOUNTROGUEBUFFCONFIG_METHOD_6_25E4DABE7E60FCE1_OFFSET))(a1, a2);
		}
	};
}
