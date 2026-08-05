#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"
#include "unitysdk/Struct_2_3C474BE56D20C7E0.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_SIMPLEGAMEPLAYTAGSPACE__CTOR_OFFSET UNITYSDK_OFFSET(0x129DA290)

namespace MoleMole
{
	inline static constexpr unsigned int SimpleGameplayTagSpace_TypeDefinitionIndex = 71217;

	class SimpleGameplayTagSpace : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_3C474BE56D20C7E0>* SimpleGameplayTagRowRefMap; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMPLEGAMEPLAYTAGSPACE__CTOR_OFFSET))(this);
		}
	};
}
