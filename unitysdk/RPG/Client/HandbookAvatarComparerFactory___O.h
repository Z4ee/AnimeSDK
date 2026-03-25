#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookAvatarComparerFactory___O_TypeDefinitionIndex = 53276;

	class HandbookAvatarComparerFactory___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::IAvatarInfoProvider*, ::System::Boolean>** StaticGet__1___CheckIsGrowthTarget()
		{
			return (::System::Func_2<::RPG::Client::IAvatarInfoProvider*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(HandbookAvatarComparerFactory___O_TypeDefinitionIndex)->GetStaticField(0x1E2E0);
		}
		static ::System::Func_2<::RPG::Client::IAvatarInfoProvider*, ::System::Boolean>** StaticGet__0___CheckIsTrial()
		{
			return (::System::Func_2<::RPG::Client::IAvatarInfoProvider*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(HandbookAvatarComparerFactory___O_TypeDefinitionIndex)->GetStaticField(0x1E2E8);
		}
		static ::System::Func_2<::RPG::Client::IAvatarInfoProvider*, ::System::Boolean>** StaticGet__2___CheckIsMarked()
		{
			return (::System::Func_2<::RPG::Client::IAvatarInfoProvider*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(HandbookAvatarComparerFactory___O_TypeDefinitionIndex)->GetStaticField(0x1E2F0);
		}
	};
}
