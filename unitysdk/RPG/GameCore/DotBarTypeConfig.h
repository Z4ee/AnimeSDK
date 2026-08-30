#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DOTBARTYPECONFIG_METHOD_2_2FCB8D1BAC757D28_OFFSET UNITYSDK_OFFSET(0x1DB0C5F0)
#define RPG_GAMECORE_DOTBARTYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB0C720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DotBarTypeConfig_TypeDefinitionIndex = 22479;

	class DotBarTypeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* DotImagePath; // 0x10
		::System::String* EnergyDotPrefabPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DOTBARTYPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2FCB8D1BAC757D28(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DotBarTypeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DotBarTypeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DOTBARTYPECONFIG_METHOD_2_2FCB8D1BAC757D28_OFFSET))(a1, a2);
		}
	};
}
