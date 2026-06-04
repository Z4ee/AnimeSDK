#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class Item; }
namespace RPG::Client { class ItemDisplayData; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropComponent___O_TypeDefinitionIndex = 53585;

	class PropComponent___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::Proto::Item*, ::RPG::Client::ItemDisplayData*>** StaticGet__0___CreateDisplayItemData()
		{
			return (::System::Func_2<::Proto::Item*, ::RPG::Client::ItemDisplayData*>**)Il2CppClass::FromTypeDefinitionIndex(PropComponent___O_TypeDefinitionIndex)->GetStaticField(0x688E0);
		}
	};
}
