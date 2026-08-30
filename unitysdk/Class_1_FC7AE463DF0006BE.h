#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChimeraDuelComparerBase; }

#define CLASS_1_FC7AE463DF0006BE_GET__ISASCEND_OFFSET UNITYSDK_OFFSET(0x17D6C7F0)
#define CLASS_1_FC7AE463DF0006BE_SET__ISASCEND_OFFSET UNITYSDK_OFFSET(0x17D6C800)
#define CLASS_1_FC7AE463DF0006BE__CTOR_OFFSET UNITYSDK_OFFSET(0x17D6C810)

inline static constexpr unsigned int Class_1_FC7AE463DF0006BE_TypeDefinitionIndex = 76968;

class Class_1_FC7AE463DF0006BE : public ::System::Object
{
public:
	::System::Boolean __IsAscend_k__BackingField; // 0x10

	::System::Void _ctor(::RPG::GameCore::ChimeraDuelComparerBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraDuelComparerBase*))((::PBYTE)hIl2Cpp + CLASS_1_FC7AE463DF0006BE__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean get__IsAscend()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FC7AE463DF0006BE_GET__ISASCEND_OFFSET))(this);
	}

	::System::Void set__IsAscend(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FC7AE463DF0006BE_SET__ISASCEND_OFFSET))(this, a1);
	}
};
