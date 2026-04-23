#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client { class MeshRendererOverrideBoundBehavior; }
namespace System { class String; }

#define RPG_CLIENT_MESHRENDEREROVERRIDEBOUNDMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xA886E10)
#define RPG_CLIENT_MESHRENDEREROVERRIDEBOUNDMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xA886E60)
#define RPG_CLIENT_MESHRENDEREROVERRIDEBOUNDMONOPLUGIN___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xA886E70)

namespace RPG::Client
{
	inline static constexpr unsigned int MeshRendererOverrideBoundMonoPlugin_TypeDefinitionIndex = 65167;

	class MeshRendererOverrideBoundMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::MeshRendererOverrideBoundBehavior*>
	{
	public:
		::System::Single BoundExpand; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESHRENDEREROVERRIDEBOUNDMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESHRENDEREROVERRIDEBOUNDMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESHRENDEREROVERRIDEBOUNDMONOPLUGIN___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}
