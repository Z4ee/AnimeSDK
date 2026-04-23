#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class TAComponetStablelizerContorlBehavior; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_TACOMPONETSTABLELIZERCONTORLMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xB26D7C0)
#define RPG_CLIENT_TACOMPONETSTABLELIZERCONTORLMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xB26D810)
#define RPG_CLIENT_TACOMPONETSTABLELIZERCONTORLMONOPLUGIN___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xB26D820)

namespace RPG::Client
{
	inline static constexpr unsigned int TAComponetStablelizerContorlMonoPlugin_TypeDefinitionIndex = 65254;

	class TAComponetStablelizerContorlMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::TAComponetStablelizerContorlBehavior*>
	{
	public:
		::UnityEngine::Transform* rootNode; // 0x30
		::UnityEngine::Transform* referenceNode; // 0x38
		::UnityEngine::Transform* parentNode; // 0x40
		::UnityEngine::Vector3 relativePosition; // 0x48
		::System::Boolean positionSychronize; // 0x54
		::System::Boolean HorizontalOnly; // 0x55
		::System::Boolean sychronizeToPlayerPos; // 0x56

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TACOMPONETSTABLELIZERCONTORLMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TACOMPONETSTABLELIZERCONTORLMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TACOMPONETSTABLELIZERCONTORLMONOPLUGIN___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}
