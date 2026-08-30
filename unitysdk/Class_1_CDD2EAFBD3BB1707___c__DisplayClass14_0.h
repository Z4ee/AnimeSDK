#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicValue; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }

#define CLASS_1_CDD2EAFBD3BB1707___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCFB06A0)
#define CLASS_1_CDD2EAFBD3BB1707___C__DISPLAYCLASS14_0__GETACTIONSTATBONUSLEVELMAP_B__0_OFFSET UNITYSDK_OFFSET(0xCFB1B90)

inline static constexpr unsigned int Class_1_CDD2EAFBD3BB1707___c__DisplayClass14_0_TypeDefinitionIndex = 80411;

class Class_1_CDD2EAFBD3BB1707___c__DisplayClass14_0 : public ::System::Object
{
public:
	::System::Collections::Generic::SortedDictionary_2<::System::UInt32, ::System::UInt32>* res; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CDD2EAFBD3BB1707___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetActionStatBonusLevelMap_b__0(::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>))((::PBYTE)hIl2Cpp + CLASS_1_CDD2EAFBD3BB1707___C__DISPLAYCLASS14_0__GETACTIONSTATBONUSLEVELMAP_B__0_OFFSET))(this, a1);
	}
};
