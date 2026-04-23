#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PHOTOGRAPHTOASTTEMPLATE_METHOD_2_07918AC68D547F2B_OFFSET UNITYSDK_OFFSET(0x18BF93F0)
#define RPG_GAMECORE_PHOTOGRAPHTOASTTEMPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18BF95A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotographToastTemplate_TypeDefinitionIndex = 18087;

	class PhotographToastTemplate : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::Client::TextID SuccessToastText; // 0x10
		::RPG::Client::TextID FailToastText; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHTOASTTEMPLATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_07918AC68D547F2B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhotographToastTemplate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotographToastTemplate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHTOASTTEMPLATE_METHOD_2_07918AC68D547F2B_OFFSET))(a1, a2);
		}
	};
}
