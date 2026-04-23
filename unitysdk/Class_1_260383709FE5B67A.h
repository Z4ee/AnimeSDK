#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C4FD36003027AC99;
class Class_2_49CAB3DE74280C58;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace RPG::GameCore { class ChimeraDuelEntitiesExclusionSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_260383709FE5B67A_METHOD_1_4C272737A3654756_OFFSET UNITYSDK_OFFSET(0xA2DC040)
#define CLASS_1_260383709FE5B67A_METHOD_1_4F5F426383CC91C3_OFFSET UNITYSDK_OFFSET(0xA2DBF90)
#define CLASS_1_260383709FE5B67A__CTOR_OFFSET UNITYSDK_OFFSET(0xA2DC2B0)

inline static constexpr unsigned int Class_1_260383709FE5B67A_TypeDefinitionIndex = 71102;

class Class_1_260383709FE5B67A : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_260383709FE5B67A__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_2_49CAB3DE74280C58*>* Method_1_4F5F426383CC91C3(::Class_1_C4FD36003027AC99* a1, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_2_49CAB3DE74280C58*>*(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_260383709FE5B67A_METHOD_1_4F5F426383CC91C3_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_2_49CAB3DE74280C58*>* Method_1_4C272737A3654756(::Class_1_C4FD36003027AC99* a1, ::RPG::GameCore::ChimeraDuelEntitiesExclusionSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_2_49CAB3DE74280C58*>*(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::RPG::GameCore::ChimeraDuelEntitiesExclusionSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_260383709FE5B67A_METHOD_1_4C272737A3654756_OFFSET))(this, a1, a2);
	}
};
