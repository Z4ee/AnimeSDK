#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C4FD36003027AC99;
class Class_2_49CAB3DE74280C58;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace RPG::GameCore { class ChimeraDuelEntitiesIntersectionSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7F2997D3DAA0D9D9_METHOD_1_0617A05058439626_OFFSET UNITYSDK_OFFSET(0x91693F0)
#define CLASS_1_7F2997D3DAA0D9D9_METHOD_1_52D4E86E4184ABAD_OFFSET UNITYSDK_OFFSET(0x9169340)
#define CLASS_1_7F2997D3DAA0D9D9__CTOR_OFFSET UNITYSDK_OFFSET(0x9169B30)

inline static constexpr unsigned int Class_1_7F2997D3DAA0D9D9_TypeDefinitionIndex = 71106;

class Class_1_7F2997D3DAA0D9D9 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F2997D3DAA0D9D9__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_2_49CAB3DE74280C58*>* Method_1_52D4E86E4184ABAD(::Class_1_C4FD36003027AC99* a1, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_2_49CAB3DE74280C58*>*(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_7F2997D3DAA0D9D9_METHOD_1_52D4E86E4184ABAD_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>* Method_1_0617A05058439626(::Class_1_C4FD36003027AC99* a1, ::RPG::GameCore::ChimeraDuelEntitiesIntersectionSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>*(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::RPG::GameCore::ChimeraDuelEntitiesIntersectionSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_7F2997D3DAA0D9D9_METHOD_1_0617A05058439626_OFFSET))(this, a1, a2);
	}
};
