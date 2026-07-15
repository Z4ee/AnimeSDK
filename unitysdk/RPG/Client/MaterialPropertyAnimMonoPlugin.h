#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client { class MaterialPropertyAnimBehavior; }
namespace RPG::Client { class MaterialPropertyAnimBehavior_MaterialPropertyContent; }
namespace System { class String; }

#define RPG_CLIENT_MATERIALPROPERTYANIMMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0x1A9FD550)
#define RPG_CLIENT_MATERIALPROPERTYANIMMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9FD5A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialPropertyAnimMonoPlugin_TypeDefinitionIndex = 67563;

	class MaterialPropertyAnimMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::MaterialPropertyAnimBehavior*>
	{
	public:
		::RPG::Client::MaterialPropertyAnimBehavior_MaterialPropertyContent* PropertyContent0; // 0x30
		::System::Single Value0; // 0x38
		::RPG::Client::MaterialPropertyAnimBehavior_MaterialPropertyContent* PropertyContent1; // 0x40
		::System::Single Value1; // 0x48
		::RPG::Client::MaterialPropertyAnimBehavior_MaterialPropertyContent* PropertyContent2; // 0x50
		::System::Single Value2; // 0x58
		::RPG::Client::MaterialPropertyAnimBehavior_MaterialPropertyContent* PropertyContent3; // 0x60
		::System::Single Value3; // 0x68
		::RPG::Client::MaterialPropertyAnimBehavior_MaterialPropertyContent* PropertyContent4; // 0x70
		::System::Single Value4; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYANIMMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYANIMMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}
