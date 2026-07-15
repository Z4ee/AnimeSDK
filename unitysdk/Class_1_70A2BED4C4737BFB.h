#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_70A2BED4C4737BFB__CTOR_OFFSET UNITYSDK_OFFSET(0x17CC6830)

inline static constexpr unsigned int Class_1_70A2BED4C4737BFB_TypeDefinitionIndex = 45369;

class Class_1_70A2BED4C4737BFB : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::RuntimeGroupInfo*>* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70A2BED4C4737BFB__CTOR_OFFSET))(this);
	}
};
