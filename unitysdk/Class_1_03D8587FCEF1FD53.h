#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A92BC063ED2379EB;
class Class_2_B66C1067C0468FBB;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace RPG::GameCore { class ChimeraDuelAbusolutePositionSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_03D8587FCEF1FD53_METHOD_1_87BFEC33CCBBD06D_OFFSET UNITYSDK_OFFSET(0x18BC6690)
#define CLASS_1_03D8587FCEF1FD53_METHOD_1_9904EA85C275F5A4_OFFSET UNITYSDK_OFFSET(0x18BC6550)
#define CLASS_1_03D8587FCEF1FD53__CTOR_OFFSET UNITYSDK_OFFSET(0x18BC6750)

inline static constexpr unsigned int Class_1_03D8587FCEF1FD53_TypeDefinitionIndex = 77045;

class Class_1_03D8587FCEF1FD53 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03D8587FCEF1FD53__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_2_B66C1067C0468FBB*>* Method_1_9904EA85C275F5A4(::Class_1_A92BC063ED2379EB* a1, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_2_B66C1067C0468FBB*>*(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_03D8587FCEF1FD53_METHOD_1_9904EA85C275F5A4_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_2_B66C1067C0468FBB*>* Method_1_87BFEC33CCBBD06D(::Class_1_A92BC063ED2379EB* a1, ::RPG::GameCore::ChimeraDuelAbusolutePositionSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_2_B66C1067C0468FBB*>*(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::RPG::GameCore::ChimeraDuelAbusolutePositionSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_03D8587FCEF1FD53_METHOD_1_87BFEC33CCBBD06D_OFFSET))(this, a1, a2);
	}
};
