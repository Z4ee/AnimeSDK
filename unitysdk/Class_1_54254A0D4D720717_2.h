#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChimeraDuelComparerBase; }

#define CLASS_1_54254A0D4D720717_2_GET__ISASCEND_OFFSET UNITYSDK_OFFSET(0x11035940)
#define CLASS_1_54254A0D4D720717_2_SET__ISASCEND_OFFSET UNITYSDK_OFFSET(0x11035950)
#define CLASS_1_54254A0D4D720717_2__CTOR_OFFSET UNITYSDK_OFFSET(0x11035960)

inline static constexpr unsigned int Class_1_54254A0D4D720717_2_TypeDefinitionIndex = 62981;

class Class_1_54254A0D4D720717_2 : public ::System::Object
{
public:
	::System::Boolean __IsAscend_k__BackingField; // 0x10

	::System::Void _ctor(::RPG::GameCore::ChimeraDuelComparerBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraDuelComparerBase*))((::PBYTE)hIl2Cpp + CLASS_1_54254A0D4D720717_2__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean get__IsAscend()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54254A0D4D720717_2_GET__ISASCEND_OFFSET))(this);
	}

	::System::Void set__IsAscend(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_54254A0D4D720717_2_SET__ISASCEND_OFFSET))(this, value);
	}
};
