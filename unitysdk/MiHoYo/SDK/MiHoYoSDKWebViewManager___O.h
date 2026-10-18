#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKWebViewManager___O_TypeDefinitionIndex = 46622;

	class MiHoYoSDKWebViewManager___O : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet__0___OnShutDown()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKWebViewManager___O_TypeDefinitionIndex)->GetStaticField(0x2DAB0);
		}
		static ::System::Action_1<::System::Int32>** StaticGet__1___OnSyncInitRecoveredGlobal()
		{
			return (::System::Action_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKWebViewManager___O_TypeDefinitionIndex)->GetStaticField(0x2DAB8);
		}
	};
}
