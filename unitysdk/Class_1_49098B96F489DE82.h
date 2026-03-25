#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C4FD36003027AC99;
class Class_2_49CAB3DE74280C58;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace RPG::GameCore { class ChimeraDuelEventTargetsSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_49098B96F489DE82_METHOD_1_2EE8C4E44E03E00C_OFFSET UNITYSDK_OFFSET(0x9EF1320)
#define CLASS_1_49098B96F489DE82_METHOD_1_B3AF366C54A7582C_OFFSET UNITYSDK_OFFSET(0x9EF13D0)
#define CLASS_1_49098B96F489DE82__CTOR_OFFSET UNITYSDK_OFFSET(0x9EF1810)

inline static constexpr unsigned int Class_1_49098B96F489DE82_TypeDefinitionIndex = 63069;

class Class_1_49098B96F489DE82 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49098B96F489DE82__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_2_49CAB3DE74280C58*>* Method_1_2EE8C4E44E03E00C(::Class_1_C4FD36003027AC99* a1, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_2_49CAB3DE74280C58*>*(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_49098B96F489DE82_METHOD_1_2EE8C4E44E03E00C_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_2_49CAB3DE74280C58*>* Method_1_B3AF366C54A7582C(::Class_1_C4FD36003027AC99* a1, ::RPG::GameCore::ChimeraDuelEventTargetsSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_2_49CAB3DE74280C58*>*(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::RPG::GameCore::ChimeraDuelEventTargetsSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_49098B96F489DE82_METHOD_1_B3AF366C54A7582C_OFFSET))(this, a1, a2);
	}
};
