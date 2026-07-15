#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChimeraDuelValueGetter; }

#define RPG_GAMECORE_CHIMERADUELBUFFDISPLAYCONFIG_METHOD_2_E00313D7CA8F819A_OFFSET UNITYSDK_OFFSET(0x1C391890)
#define RPG_GAMECORE_CHIMERADUELBUFFDISPLAYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C391AC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelBuffDisplayConfig_TypeDefinitionIndex = 15395;

	class ChimeraDuelBuffDisplayConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::Client::TextID Name; // 0x10
		::RPG::Client::TextID Desc; // 0x20
		::Il2CppArray<::RPG::GameCore::BaseChimeraDuelValueGetter*>* DescParams; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELBUFFDISPLAYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E00313D7CA8F819A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelBuffDisplayConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelBuffDisplayConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELBUFFDISPLAYCONFIG_METHOD_2_E00313D7CA8F819A_OFFSET))(a1, a2);
		}
	};
}
