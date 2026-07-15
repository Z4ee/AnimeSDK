#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A92BC063ED2379EB;
class Class_2_B66C1067C0468FBB;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace RPG::GameCore { class ChimeraDuelEntitiesExclusionSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_49098B96F489DE82_METHOD_1_2EE8C4E44E03E00C_OFFSET UNITYSDK_OFFSET(0x169C30C0)
#define CLASS_1_49098B96F489DE82_METHOD_1_67398FF719A8D4C5_OFFSET UNITYSDK_OFFSET(0x169C3180)
#define CLASS_1_49098B96F489DE82__CTOR_OFFSET UNITYSDK_OFFSET(0x169C3410)

inline static constexpr unsigned int Class_1_49098B96F489DE82_TypeDefinitionIndex = 73565;

class Class_1_49098B96F489DE82 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49098B96F489DE82__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_2_B66C1067C0468FBB*>* Method_1_2EE8C4E44E03E00C(::Class_1_A92BC063ED2379EB* a1, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_2_B66C1067C0468FBB*>*(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_49098B96F489DE82_METHOD_1_2EE8C4E44E03E00C_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_2_B66C1067C0468FBB*>* Method_1_67398FF719A8D4C5(::Class_1_A92BC063ED2379EB* a1, ::RPG::GameCore::ChimeraDuelEntitiesExclusionSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_2_B66C1067C0468FBB*>*(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::RPG::GameCore::ChimeraDuelEntitiesExclusionSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_49098B96F489DE82_METHOD_1_67398FF719A8D4C5_OFFSET))(this, a1, a2);
	}
};
