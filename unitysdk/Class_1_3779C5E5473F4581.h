#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A92BC063ED2379EB;
class Class_2_B66C1067C0468FBB;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace RPG::GameCore { class ChimeraDuelOrderedEntitiesSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3779C5E5473F4581_METHOD_1_874488800259567D_OFFSET UNITYSDK_OFFSET(0x144F3BC0)
#define CLASS_1_3779C5E5473F4581_METHOD_1_CD09CDEFA3220423_OFFSET UNITYSDK_OFFSET(0x144F3C80)
#define CLASS_1_3779C5E5473F4581__CTOR_OFFSET UNITYSDK_OFFSET(0x144F3DD0)

inline static constexpr unsigned int Class_1_3779C5E5473F4581_TypeDefinitionIndex = 72054;

class Class_1_3779C5E5473F4581 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3779C5E5473F4581__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_2_B66C1067C0468FBB*>* Method_1_874488800259567D(::Class_1_A92BC063ED2379EB* a1, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_2_B66C1067C0468FBB*>*(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_3779C5E5473F4581_METHOD_1_874488800259567D_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* Method_1_CD09CDEFA3220423(::Class_1_A92BC063ED2379EB* a1, ::RPG::GameCore::ChimeraDuelOrderedEntitiesSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::RPG::GameCore::ChimeraDuelOrderedEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_3779C5E5473F4581_METHOD_1_CD09CDEFA3220423_OFFSET))(this, a1, a2);
	}
};
