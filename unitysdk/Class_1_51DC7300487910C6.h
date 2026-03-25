#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C4FD36003027AC99;
class Class_2_49CAB3DE74280C58;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace RPG::GameCore { class ChimeraDuelGroupEntitiesSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_51DC7300487910C6_METHOD_1_D56383B8731DF442_OFFSET UNITYSDK_OFFSET(0x8935190)
#define CLASS_1_51DC7300487910C6_METHOD_1_FF1DA38A114A098E_OFFSET UNITYSDK_OFFSET(0x8935050)
#define CLASS_1_51DC7300487910C6__CTOR_OFFSET UNITYSDK_OFFSET(0x8935250)

inline static constexpr unsigned int Class_1_51DC7300487910C6_TypeDefinitionIndex = 63047;

class Class_1_51DC7300487910C6 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51DC7300487910C6__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_2_49CAB3DE74280C58*>* Method_1_FF1DA38A114A098E(::Class_1_C4FD36003027AC99* a1, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_2_49CAB3DE74280C58*>*(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_51DC7300487910C6_METHOD_1_FF1DA38A114A098E_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_2_49CAB3DE74280C58*>* Method_1_D56383B8731DF442(::Class_1_C4FD36003027AC99* a1, ::RPG::GameCore::ChimeraDuelGroupEntitiesSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_2_49CAB3DE74280C58*>*(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::RPG::GameCore::ChimeraDuelGroupEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_51DC7300487910C6_METHOD_1_D56383B8731DF442_OFFSET))(this, a1, a2);
	}
};
