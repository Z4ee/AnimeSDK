#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

class Class_1_929E979D9ED7139E;
namespace RPG::Client { class StageLiteInstanceItemRendererBehavior; }
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define RPG_CLIENT_STAGELITEINSTANCEITEMRENDERERMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0x1A4F4DD0)
#define RPG_CLIENT_STAGELITEINSTANCEITEMRENDERERMONOPLUGIN_REGISTERITEMINSTANCE_OFFSET UNITYSDK_OFFSET(0x1A4F4C90)
#define RPG_CLIENT_STAGELITEINSTANCEITEMRENDERERMONOPLUGIN_UNREGISTERITEMINSTANCE_OFFSET UNITYSDK_OFFSET(0x1A4F4D40)
#define RPG_CLIENT_STAGELITEINSTANCEITEMRENDERERMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4F4E20)

namespace RPG::Client
{
	inline static constexpr unsigned int StageLiteInstanceItemRendererMonoPlugin_TypeDefinitionIndex = 70987;

	class StageLiteInstanceItemRendererMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::StageLiteInstanceItemRendererBehavior*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGELITEINSTANCEITEMRENDERERMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::Class_1_929E979D9ED7139E* RegisterItemInstance(::UnityEngine::Mesh* a1, ::System::Int32 a2, ::UnityEngine::Material* a3)
		{
			return ((::Class_1_929E979D9ED7139E*(*)(::PVOID, ::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGELITEINSTANCEITEMRENDERERMONOPLUGIN_REGISTERITEMINSTANCE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UnregisterItemInstance(::Class_1_929E979D9ED7139E* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_929E979D9ED7139E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGELITEINSTANCEITEMRENDERERMONOPLUGIN_UNREGISTERITEMINSTANCE_OFFSET))(this, a1);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGELITEINSTANCEITEMRENDERERMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}
