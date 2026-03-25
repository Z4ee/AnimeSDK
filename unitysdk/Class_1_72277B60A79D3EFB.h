#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C4FD36003027AC99;
class Class_2_49CAB3DE74280C58;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace RPG::GameCore { class ChimeraDuelSavedEntitiesSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_72277B60A79D3EFB_METHOD_1_40C8E7FDC80F4540_OFFSET UNITYSDK_OFFSET(0x10598730)
#define CLASS_1_72277B60A79D3EFB_METHOD_1_4FE65EA684BCFB41_OFFSET UNITYSDK_OFFSET(0x105985D0)
#define CLASS_1_72277B60A79D3EFB__CTOR_OFFSET UNITYSDK_OFFSET(0x105987E0)

inline static constexpr unsigned int Class_1_72277B60A79D3EFB_TypeDefinitionIndex = 63080;

class Class_1_72277B60A79D3EFB : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72277B60A79D3EFB__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_2_49CAB3DE74280C58*>* Method_1_4FE65EA684BCFB41(::Class_1_C4FD36003027AC99* a1, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_2_49CAB3DE74280C58*>*(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_72277B60A79D3EFB_METHOD_1_4FE65EA684BCFB41_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_2_49CAB3DE74280C58*>* Method_1_40C8E7FDC80F4540(::Class_1_C4FD36003027AC99* a1, ::RPG::GameCore::ChimeraDuelSavedEntitiesSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_2_49CAB3DE74280C58*>*(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::RPG::GameCore::ChimeraDuelSavedEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_72277B60A79D3EFB_METHOD_1_40C8E7FDC80F4540_OFFSET))(this, a1, a2);
	}
};
