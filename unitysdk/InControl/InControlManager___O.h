#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/LogMessage.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

namespace InControl
{
	inline static constexpr unsigned int InControlManager___O_TypeDefinitionIndex = 31400;

	class InControlManager___O : public ::System::Object
	{
	public:
		static ::System::Action_1<::InControl::LogMessage>** StaticGet__0___LogMessage()
		{
			return (::System::Action_1<::InControl::LogMessage>**)Il2CppClass::FromTypeDefinitionIndex(InControlManager___O_TypeDefinitionIndex)->GetStaticField(0x35D90);
		}
	};
}
