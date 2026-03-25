#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C4FD36003027AC99;
class Class_2_49CAB3DE74280C58;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace RPG::GameCore { class ChimeraDuelOrderedEntitiesSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6DFF88CA7A41970B_METHOD_1_CD09CDEFA3220423_OFFSET UNITYSDK_OFFSET(0xA1DB840)
#define CLASS_1_6DFF88CA7A41970B_METHOD_1_D4B4820C342CFFE2_OFFSET UNITYSDK_OFFSET(0xA1DB790)
#define CLASS_1_6DFF88CA7A41970B__CTOR_OFFSET UNITYSDK_OFFSET(0xA1DB990)

inline static constexpr unsigned int Class_1_6DFF88CA7A41970B_TypeDefinitionIndex = 63076;

class Class_1_6DFF88CA7A41970B : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DFF88CA7A41970B__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_2_49CAB3DE74280C58*>* Method_1_D4B4820C342CFFE2(::Class_1_C4FD36003027AC99* a1, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_2_49CAB3DE74280C58*>*(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_6DFF88CA7A41970B_METHOD_1_D4B4820C342CFFE2_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>* Method_1_CD09CDEFA3220423(::Class_1_C4FD36003027AC99* a1, ::RPG::GameCore::ChimeraDuelOrderedEntitiesSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>*(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::RPG::GameCore::ChimeraDuelOrderedEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_6DFF88CA7A41970B_METHOD_1_CD09CDEFA3220423_OFFSET))(this, a1, a2);
	}
};
