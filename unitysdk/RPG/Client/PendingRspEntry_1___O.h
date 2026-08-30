#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int PendingRspEntry_1___O_TypeDefinitionIndex = 69372;

	template <typename TRsp>
	class PendingRspEntry_1___O : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Object*>** StaticGet__0____OnAwaitCtCanceled()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(PendingRspEntry_1___O_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
