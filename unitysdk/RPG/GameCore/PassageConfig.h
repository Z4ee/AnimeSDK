#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PASSAGECONFIG_METHOD_2_5CD18212CF80577F_OFFSET UNITYSDK_OFFSET(0x1748C100)
#define RPG_GAMECORE_PASSAGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1748C280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PassageConfig_TypeDefinitionIndex = 17566;

	class PassageConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Start; // 0x10
		::System::String* End; // 0x18
		::System::Single Distance; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PASSAGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5CD18212CF80577F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PassageConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PassageConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PASSAGECONFIG_METHOD_2_5CD18212CF80577F_OFFSET))(a1, a2);
		}
	};
}
