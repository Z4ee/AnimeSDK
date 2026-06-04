#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

class LocalFogSphereInstance;
namespace RPG::Client { class LocalFogSphereAnimationControllerBehavior; }
namespace System { class String; }

#define RPG_CLIENT_LOCALFOGSPHEREANIMATIONCONTROLLERMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xBE51C50)
#define RPG_CLIENT_LOCALFOGSPHEREANIMATIONCONTROLLERMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xBE51CA0)
#define RPG_CLIENT_LOCALFOGSPHEREANIMATIONCONTROLLERMONOPLUGIN___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xBE51CB0)

namespace RPG::Client
{
	inline static constexpr unsigned int LocalFogSphereAnimationControllerMonoPlugin_TypeDefinitionIndex = 66063;

	class LocalFogSphereAnimationControllerMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::LocalFogSphereAnimationControllerBehavior*>
	{
	public:
		::LocalFogSphereInstance* TargetFog; // 0x30
		::System::Boolean AlwaysUpdateMaterialBlock; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALFOGSPHEREANIMATIONCONTROLLERMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALFOGSPHEREANIMATIONCONTROLLERMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALFOGSPHEREANIMATIONCONTROLLERMONOPLUGIN___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}
