#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C4FD36003027AC99;
class Class_2_49CAB3DE74280C58;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace RPG::GameCore { class ChimeraDuelAbusolutePositionSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_03D8587FCEF1FD53_METHOD_1_87BFEC33CCBBD06D_OFFSET UNITYSDK_OFFSET(0x978B690)
#define CLASS_1_03D8587FCEF1FD53_METHOD_1_FF1DA38A114A098E_OFFSET UNITYSDK_OFFSET(0x978B550)
#define CLASS_1_03D8587FCEF1FD53__CTOR_OFFSET UNITYSDK_OFFSET(0x978B750)

inline static constexpr unsigned int Class_1_03D8587FCEF1FD53_TypeDefinitionIndex = 71098;

class Class_1_03D8587FCEF1FD53 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03D8587FCEF1FD53__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_2_49CAB3DE74280C58*>* Method_1_FF1DA38A114A098E(::Class_1_C4FD36003027AC99* a1, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_2_49CAB3DE74280C58*>*(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_03D8587FCEF1FD53_METHOD_1_FF1DA38A114A098E_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_2_49CAB3DE74280C58*>* Method_1_87BFEC33CCBBD06D(::Class_1_C4FD36003027AC99* a1, ::RPG::GameCore::ChimeraDuelAbusolutePositionSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_2_49CAB3DE74280C58*>*(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::RPG::GameCore::ChimeraDuelAbusolutePositionSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_03D8587FCEF1FD53_METHOD_1_87BFEC33CCBBD06D_OFFSET))(this, a1, a2);
	}
};
