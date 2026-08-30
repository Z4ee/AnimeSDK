#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MissionUtils_SubMissionSortItem; }
namespace System { template <typename T> class Comparison_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int MissionUtils___O_TypeDefinitionIndex = 66232;

	class MissionUtils___O : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::MissionUtils_SubMissionSortItem*>** StaticGet__0____SameParentSubMissionSort()
		{
			return (::System::Comparison_1<::RPG::Client::MissionUtils_SubMissionSortItem*>**)Il2CppClass::FromTypeDefinitionIndex(MissionUtils___O_TypeDefinitionIndex)->GetStaticField(0x3670);
		}
	};
}
