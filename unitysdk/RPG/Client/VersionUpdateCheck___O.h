#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class IPromise; }
namespace System { class Action; }
namespace System { template <typename T> class Func_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int VersionUpdateCheck___O_TypeDefinitionIndex = 61352;

	class VersionUpdateCheck___O : public ::System::Object
	{
	public:
		static ::System::Func_1<::RPG::Client::Promises::IPromise*>** StaticGet__0___StartAsyncLoadAllConfig()
		{
			return (::System::Func_1<::RPG::Client::Promises::IPromise*>**)Il2CppClass::FromTypeDefinitionIndex(VersionUpdateCheck___O_TypeDefinitionIndex)->GetStaticField(0x64A40);
		}
		static ::System::Func_1<::RPG::Client::Promises::IPromise*>** StaticGet__1___StartAfterLoadAllConfig()
		{
			return (::System::Func_1<::RPG::Client::Promises::IPromise*>**)Il2CppClass::FromTypeDefinitionIndex(VersionUpdateCheck___O_TypeDefinitionIndex)->GetStaticField(0x64A48);
		}
		static ::System::Action** StaticGet__2___OnLocalPakUpdateEnd()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(VersionUpdateCheck___O_TypeDefinitionIndex)->GetStaticField(0x64A50);
		}
	};
}
