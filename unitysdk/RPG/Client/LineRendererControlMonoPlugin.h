#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client { class LineRendererControlBehavior; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class LineRenderer; }

#define RPG_CLIENT_LINERENDERERCONTROLMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xBDBCE30)
#define RPG_CLIENT_LINERENDERERCONTROLMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xBDBCE80)
#define RPG_CLIENT_LINERENDERERCONTROLMONOPLUGIN___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xBDBCE90)

namespace RPG::Client
{
	inline static constexpr unsigned int LineRendererControlMonoPlugin_TypeDefinitionIndex = 66061;

	class LineRendererControlMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::LineRendererControlBehavior*>
	{
	public:
		::UnityEngine::LineRenderer* Line; // 0x30
		::UnityEngine::GameObject* SourceObj; // 0x38
		::UnityEngine::GameObject* TargetObj; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LINERENDERERCONTROLMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LINERENDERERCONTROLMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LINERENDERERCONTROLMONOPLUGIN___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}
