#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class UIPrefabLoader; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int UIPrefabLoader___c__DisplayClass20_0_1_TypeDefinitionIndex = 68257;

	template <typename T>
	class UIPrefabLoader___c__DisplayClass20_0_1 : public ::System::Object
	{
	public:
		::RPG::Client::UIPrefabLoader* __4__this; // 0x0
		::System::String* path; // 0x0
		::System::Action_1<T>* callback; // 0x0
	};
}
