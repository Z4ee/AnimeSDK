#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A92BC063ED2379EB;
class Class_2_B66C1067C0468FBB;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace RPG::GameCore { class ChimeraDuelEntitiesFilterSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_C998E2E811568760_METHOD_1_96E0E7214D4FE6B6_OFFSET UNITYSDK_OFFSET(0x14B5BD90)
#define CLASS_1_C998E2E811568760_METHOD_1_E055E573D7FAD587_OFFSET UNITYSDK_OFFSET(0x14B5BCD0)
#define CLASS_1_C998E2E811568760__CTOR_OFFSET UNITYSDK_OFFSET(0x14B5BF00)

inline static constexpr unsigned int Class_1_C998E2E811568760_TypeDefinitionIndex = 73567;

class Class_1_C998E2E811568760 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C998E2E811568760__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_2_B66C1067C0468FBB*>* Method_1_E055E573D7FAD587(::Class_1_A92BC063ED2379EB* a1, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_2_B66C1067C0468FBB*>*(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_C998E2E811568760_METHOD_1_E055E573D7FAD587_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_2_B66C1067C0468FBB*>* Method_1_96E0E7214D4FE6B6(::Class_1_A92BC063ED2379EB* a1, ::RPG::GameCore::ChimeraDuelEntitiesFilterSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_2_B66C1067C0468FBB*>*(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::RPG::GameCore::ChimeraDuelEntitiesFilterSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_C998E2E811568760_METHOD_1_96E0E7214D4FE6B6_OFFSET))(this, a1, a2);
	}
};
