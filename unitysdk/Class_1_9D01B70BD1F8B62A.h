#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace RPG::GameCore { class ServantSkillRowData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_9D01B70BD1F8B62A_METHOD_1_6F0EEAFC1D990F83_OFFSET UNITYSDK_OFFSET(0x18F925E0)
#define CLASS_1_9D01B70BD1F8B62A__CTOR_OFFSET UNITYSDK_OFFSET(0x18F927F0)

inline static constexpr unsigned int Class_1_9D01B70BD1F8B62A_TypeDefinitionIndex = 59873;

class Class_1_9D01B70BD1F8B62A : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::GameCore::ServantSkillRowData*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D01B70BD1F8B62A__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::ICharacterSkillRowData* Method_1_6F0EEAFC1D990F83(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9D01B70BD1F8B62A_METHOD_1_6F0EEAFC1D990F83_OFFSET))(this, a1, a2);
	}
};
