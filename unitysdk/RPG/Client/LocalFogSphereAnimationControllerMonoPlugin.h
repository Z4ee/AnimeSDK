#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

class LocalFogSphereInstance;
namespace RPG::Client { class LocalFogSphereAnimationControllerBehavior; }
namespace System { class String; }

#define RPG_CLIENT_LOCALFOGSPHEREANIMATIONCONTROLLERMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0x19ACDD20)
#define RPG_CLIENT_LOCALFOGSPHEREANIMATIONCONTROLLERMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x19ACDD70)

namespace RPG::Client
{
	inline static constexpr unsigned int LocalFogSphereAnimationControllerMonoPlugin_TypeDefinitionIndex = 67488;

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
	};
}
