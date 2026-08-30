#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseGachaPoolData; }
namespace System { template <typename T> class Comparison_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int CollaborationGachaMergeGroupData___O_TypeDefinitionIndex = 64376;

	class CollaborationGachaMergeGroupData___O : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::BaseGachaPoolData*>** StaticGet__0___BaseGachaPoolDataComparison()
		{
			return (::System::Comparison_1<::RPG::Client::BaseGachaPoolData*>**)Il2CppClass::FromTypeDefinitionIndex(CollaborationGachaMergeGroupData___O_TypeDefinitionIndex)->GetStaticField(0x57370);
		}
	};
}
