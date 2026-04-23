#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C4FD36003027AC99;
class Class_1_F964FCD89F35B351;
class Class_2_49CAB3DE74280C58;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_EED2328245139935_METHOD_1_9EC05CD8054C8C05_OFFSET UNITYSDK_OFFSET(0x11E0FAD0)
#define CLASS_1_EED2328245139935__CTOR_OFFSET UNITYSDK_OFFSET(0x11E0FB90)

inline static constexpr unsigned int Class_1_EED2328245139935_TypeDefinitionIndex = 71107;

class Class_1_EED2328245139935 : public ::System::Object
{
public:
	::Class_1_F964FCD89F35B351* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EED2328245139935__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_2_49CAB3DE74280C58*>* Method_1_9EC05CD8054C8C05(::Class_1_C4FD36003027AC99* a1, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_2_49CAB3DE74280C58*>*(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_EED2328245139935_METHOD_1_9EC05CD8054C8C05_OFFSET))(this, a1, a2);
	}
};
