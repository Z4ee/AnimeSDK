#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityTagData; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client
{
	inline static constexpr unsigned int RogueResidentActivityPanelData___O_TypeDefinitionIndex = 61871;

	class RogueResidentActivityPanelData___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::ActivityTagData*>** StaticGet__0___GetTag()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::ActivityTagData*>**)Il2CppClass::FromTypeDefinitionIndex(RogueResidentActivityPanelData___O_TypeDefinitionIndex)->GetStaticField(0xD660);
		}
	};
}
