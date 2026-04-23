#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C4FD36003027AC99;
class Class_2_49CAB3DE74280C58;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace RPG::GameCore { class ChimeraDuelEntitiesFilterSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_645E852412BDAAD6_METHOD_1_415AF314710D08C0_OFFSET UNITYSDK_OFFSET(0x11762000)
#define CLASS_1_645E852412BDAAD6_METHOD_1_AF2651D30162E58B_OFFSET UNITYSDK_OFFSET(0x117620B0)
#define CLASS_1_645E852412BDAAD6__CTOR_OFFSET UNITYSDK_OFFSET(0x11762210)

inline static constexpr unsigned int Class_1_645E852412BDAAD6_TypeDefinitionIndex = 71104;

class Class_1_645E852412BDAAD6 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_645E852412BDAAD6__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_2_49CAB3DE74280C58*>* Method_1_415AF314710D08C0(::Class_1_C4FD36003027AC99* a1, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_2_49CAB3DE74280C58*>*(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_645E852412BDAAD6_METHOD_1_415AF314710D08C0_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_2_49CAB3DE74280C58*>* Method_1_AF2651D30162E58B(::Class_1_C4FD36003027AC99* a1, ::RPG::GameCore::ChimeraDuelEntitiesFilterSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_2_49CAB3DE74280C58*>*(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::RPG::GameCore::ChimeraDuelEntitiesFilterSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_645E852412BDAAD6_METHOD_1_AF2651D30162E58B_OFFSET))(this, a1, a2);
	}
};
