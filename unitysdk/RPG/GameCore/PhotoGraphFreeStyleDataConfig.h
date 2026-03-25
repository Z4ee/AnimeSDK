#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PHOTOGRAPHFREESTYLEDATACONFIG_METHOD_2_1974A498E241626C_OFFSET UNITYSDK_OFFSET(0x174AA940)
#define RPG_GAMECORE_PHOTOGRAPHFREESTYLEDATACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x174AAAF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphFreeStyleDataConfig_TypeDefinitionIndex = 17463;

	class PhotoGraphFreeStyleDataConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::Client::TextID Name; // 0x10
		::System::String* SpritePath; // 0x20
		::System::String* Key; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHFREESTYLEDATACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1974A498E241626C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhotoGraphFreeStyleDataConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoGraphFreeStyleDataConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHFREESTYLEDATACONFIG_METHOD_2_1974A498E241626C_OFFSET))(a1, a2);
		}
	};
}
