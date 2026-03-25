#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MUNICIPALCHATNODETRANSITIONINFO_METHOD_2_24742874CD621015_OFFSET UNITYSDK_OFFSET(0x1745C540)
#define RPG_GAMECORE_MUNICIPALCHATNODETRANSITIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1745C5F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MunicipalChatNodeTransitionInfo_TypeDefinitionIndex = 15499;

	class MunicipalChatNodeTransitionInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* MunicipalNodeName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATNODETRANSITIONINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_24742874CD621015(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MunicipalChatNodeTransitionInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MunicipalChatNodeTransitionInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATNODETRANSITIONINFO_METHOD_2_24742874CD621015_OFFSET))(a1, a2);
		}
	};
}
