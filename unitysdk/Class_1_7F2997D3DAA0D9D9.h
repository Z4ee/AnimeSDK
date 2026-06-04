#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A92BC063ED2379EB;
class Class_2_B66C1067C0468FBB;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace RPG::GameCore { class ChimeraDuelEntitiesIntersectionSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7F2997D3DAA0D9D9_METHOD_1_0617A05058439626_OFFSET UNITYSDK_OFFSET(0xCBD8B70)
#define CLASS_1_7F2997D3DAA0D9D9_METHOD_1_A775B4F596994B24_OFFSET UNITYSDK_OFFSET(0xCBD8AB0)
#define CLASS_1_7F2997D3DAA0D9D9__CTOR_OFFSET UNITYSDK_OFFSET(0xCBD9290)

inline static constexpr unsigned int Class_1_7F2997D3DAA0D9D9_TypeDefinitionIndex = 72044;

class Class_1_7F2997D3DAA0D9D9 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F2997D3DAA0D9D9__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_2_B66C1067C0468FBB*>* Method_1_A775B4F596994B24(::Class_1_A92BC063ED2379EB* a1, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_2_B66C1067C0468FBB*>*(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_7F2997D3DAA0D9D9_METHOD_1_A775B4F596994B24_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* Method_1_0617A05058439626(::Class_1_A92BC063ED2379EB* a1, ::RPG::GameCore::ChimeraDuelEntitiesIntersectionSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::RPG::GameCore::ChimeraDuelEntitiesIntersectionSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_7F2997D3DAA0D9D9_METHOD_1_0617A05058439626_OFFSET))(this, a1, a2);
	}
};
