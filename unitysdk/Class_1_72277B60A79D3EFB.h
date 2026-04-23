#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C4FD36003027AC99;
class Class_2_49CAB3DE74280C58;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace RPG::GameCore { class ChimeraDuelSavedEntitiesSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_72277B60A79D3EFB_METHOD_1_40C8E7FDC80F4540_OFFSET UNITYSDK_OFFSET(0xE631B90)
#define CLASS_1_72277B60A79D3EFB_METHOD_1_CCB1CC9551D1F384_OFFSET UNITYSDK_OFFSET(0xE02BF30)
#define CLASS_1_72277B60A79D3EFB__CTOR_OFFSET UNITYSDK_OFFSET(0xE631C40)

inline static constexpr unsigned int Class_1_72277B60A79D3EFB_TypeDefinitionIndex = 71120;

class Class_1_72277B60A79D3EFB : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72277B60A79D3EFB__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_2_49CAB3DE74280C58*>* Method_1_CCB1CC9551D1F384(::Class_1_C4FD36003027AC99* a1, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_2_49CAB3DE74280C58*>*(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_72277B60A79D3EFB_METHOD_1_CCB1CC9551D1F384_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_2_49CAB3DE74280C58*>* Method_1_40C8E7FDC80F4540(::Class_1_C4FD36003027AC99* a1, ::RPG::GameCore::ChimeraDuelSavedEntitiesSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_2_49CAB3DE74280C58*>*(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::RPG::GameCore::ChimeraDuelSavedEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_72277B60A79D3EFB_METHOD_1_40C8E7FDC80F4540_OFFSET))(this, a1, a2);
	}
};
