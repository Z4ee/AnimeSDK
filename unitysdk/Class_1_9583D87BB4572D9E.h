#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A92BC063ED2379EB;
class Class_2_B66C1067C0468FBB;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace RPG::GameCore { class ChimeraDuelEventTargetsSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_9583D87BB4572D9E_METHOD_1_9C2CB01280005E3A_OFFSET UNITYSDK_OFFSET(0xB4CB990)
#define CLASS_1_9583D87BB4572D9E_METHOD_1_AF321D7E662AFF4C_OFFSET UNITYSDK_OFFSET(0xB4CB8D0)
#define CLASS_1_9583D87BB4572D9E__CTOR_OFFSET UNITYSDK_OFFSET(0xB4CBE10)

inline static constexpr unsigned int Class_1_9583D87BB4572D9E_TypeDefinitionIndex = 77057;

class Class_1_9583D87BB4572D9E : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9583D87BB4572D9E__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_2_B66C1067C0468FBB*>* Method_1_AF321D7E662AFF4C(::Class_1_A92BC063ED2379EB* a1, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_2_B66C1067C0468FBB*>*(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_9583D87BB4572D9E_METHOD_1_AF321D7E662AFF4C_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_2_B66C1067C0468FBB*>* Method_1_9C2CB01280005E3A(::Class_1_A92BC063ED2379EB* a1, ::RPG::GameCore::ChimeraDuelEventTargetsSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_2_B66C1067C0468FBB*>*(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::RPG::GameCore::ChimeraDuelEventTargetsSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_9583D87BB4572D9E_METHOD_1_9C2CB01280005E3A_OFFSET))(this, a1, a2);
	}
};
