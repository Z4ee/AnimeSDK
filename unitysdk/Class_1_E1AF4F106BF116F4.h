#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LevelTriggerInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_E1AF4F106BF116F4__CTOR_OFFSET UNITYSDK_OFFSET(0x18E4F800)

inline static constexpr unsigned int Class_1_E1AF4F106BF116F4_TypeDefinitionIndex = 39898;

class Class_1_E1AF4F106BF116F4 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::LevelTriggerInfo*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1AF4F106BF116F4__CTOR_OFFSET))(this);
	}
};
