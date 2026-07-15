#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A92BC063ED2379EB;
class Class_2_B66C1067C0468FBB;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace RPG::GameCore { class ChimeraDuelEntitiesIntersectionSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_FD3301F2B6619EE2_METHOD_1_13BEB83A68081897_OFFSET UNITYSDK_OFFSET(0x1760C830)
#define CLASS_1_FD3301F2B6619EE2_METHOD_1_DAD938B5B99908AA_OFFSET UNITYSDK_OFFSET(0x1760C8F0)
#define CLASS_1_FD3301F2B6619EE2__CTOR_OFFSET UNITYSDK_OFFSET(0x1760D1B0)

inline static constexpr unsigned int Class_1_FD3301F2B6619EE2_TypeDefinitionIndex = 73569;

class Class_1_FD3301F2B6619EE2 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD3301F2B6619EE2__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_2_B66C1067C0468FBB*>* Method_1_13BEB83A68081897(::Class_1_A92BC063ED2379EB* a1, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_2_B66C1067C0468FBB*>*(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_FD3301F2B6619EE2_METHOD_1_13BEB83A68081897_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* Method_1_DAD938B5B99908AA(::Class_1_A92BC063ED2379EB* a1, ::RPG::GameCore::ChimeraDuelEntitiesIntersectionSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::RPG::GameCore::ChimeraDuelEntitiesIntersectionSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_FD3301F2B6619EE2_METHOD_1_DAD938B5B99908AA_OFFSET))(this, a1, a2);
	}
};
