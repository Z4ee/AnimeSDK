#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int CloudUtils___O_TypeDefinitionIndex = 57205;

	class CloudUtils___O : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::String*>** StaticGet__0___OnGetClipBoardData()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CloudUtils___O_TypeDefinitionIndex)->GetStaticField(0x68AE0);
		}
	};
}
