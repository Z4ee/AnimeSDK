#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RspHandler; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Application_LogCallback; }

namespace RPG::QA
{
	inline static constexpr unsigned int QAManager___O_TypeDefinitionIndex = 52111;

	class QAManager___O : public ::System::Object
	{
	public:
		static ::UnityEngine::Application_LogCallback** StaticGet__1____OnLogMessageReceivedThreaded()
		{
			return (::UnityEngine::Application_LogCallback**)Il2CppClass::FromTypeDefinitionIndex(QAManager___O_TypeDefinitionIndex)->GetStaticField(0x2ABB0);
		}
		static ::System::Action_1<::System::Boolean>** StaticGet__2____IsSendLastErrorMessageSuccess()
		{
			return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(QAManager___O_TypeDefinitionIndex)->GetStaticField(0x2ABB8);
		}
		static ::RPG::Client::RspHandler** StaticGet__3____OnCmdGmTalkScNotify()
		{
			return (::RPG::Client::RspHandler**)Il2CppClass::FromTypeDefinitionIndex(QAManager___O_TypeDefinitionIndex)->GetStaticField(0x2ABC0);
		}
		static ::System::Action_3<::System::String*, ::System::String*, ::System::String*>** StaticGet__0___SendMessage()
		{
			return (::System::Action_3<::System::String*, ::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(QAManager___O_TypeDefinitionIndex)->GetStaticField(0x2ABC8);
		}
	};
}
