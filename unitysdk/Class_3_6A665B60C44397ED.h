#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceCoreBaseSelector_1.h"

class Class_2_3ABA989E5AECB261;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceCircleTargetSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_3_6A665B60C44397ED_METHOD_3_683E052542D637D5_OFFSET UNITYSDK_OFFSET(0x17C67340)
#define CLASS_3_6A665B60C44397ED_METHOD_3_6A9D030F966B3EEF_OFFSET UNITYSDK_OFFSET(0x17C67410)
#define CLASS_3_6A665B60C44397ED__CTOR_OFFSET UNITYSDK_OFFSET(0x17C673E0)

inline static constexpr unsigned int Class_3_6A665B60C44397ED_TypeDefinitionIndex = 34810;

class Class_3_6A665B60C44397ED : public ::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceCoreBaseSelector_1<::RPG::GameCore::CakeRaceCircleTargetSelectorConfig*>
{
public:
	::System::Void _ctor(::System::Int32 a1, ::RPG::GameCore::CakeRaceCircleTargetSelectorConfig* a2, ::Class_2_F3C45F1FC7349B6E* a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::CakeRaceCircleTargetSelectorConfig*, ::Class_2_F3C45F1FC7349B6E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_6A665B60C44397ED__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::Class_3_6A665B60C44397ED* Method_3_683E052542D637D5(::System::Int32 a1, ::RPG::GameCore::CakeRaceCircleTargetSelectorConfig* a2, ::Class_2_F3C45F1FC7349B6E* a3, ::System::Int32 a4)
	{
		return ((::Class_3_6A665B60C44397ED*(*)(::System::Int32, ::RPG::GameCore::CakeRaceCircleTargetSelectorConfig*, ::Class_2_F3C45F1FC7349B6E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_6A665B60C44397ED_METHOD_3_683E052542D637D5_OFFSET))(a1, a2, a3, a4);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_2_3ABA989E5AECB261*>* Method_3_6A9D030F966B3EEF()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_2_3ABA989E5AECB261*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6A665B60C44397ED_METHOD_3_6A9D030F966B3EEF_OFFSET))(this);
	}
};
