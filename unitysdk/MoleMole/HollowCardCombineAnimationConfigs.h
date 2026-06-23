#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class HollowCardCombineAnimationConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_HOLLOWCARDCOMBINEANIMATIONCONFIGS__CTOR_OFFSET UNITYSDK_OFFSET(0x19130CE0)

namespace MoleMole
{
	inline static constexpr unsigned int HollowCardCombineAnimationConfigs_TypeDefinitionIndex = 60414;

	class HollowCardCombineAnimationConfigs : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::HollowCardCombineAnimationConfig*>* configs; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCARDCOMBINEANIMATIONCONFIGS__CTOR_OFFSET))(this);
		}
	};
}
