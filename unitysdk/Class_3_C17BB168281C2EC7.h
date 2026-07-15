#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceCoreBaseSelector_1.h"

class Class_2_21AD365C113DC484;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceOtherTargetSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_3_C17BB168281C2EC7_METHOD_3_66F581080C964704_OFFSET UNITYSDK_OFFSET(0x13EC2F40)
#define CLASS_3_C17BB168281C2EC7_METHOD_3_9E70215A4243E117_OFFSET UNITYSDK_OFFSET(0x13EC2E70)
#define CLASS_3_C17BB168281C2EC7__CTOR_OFFSET UNITYSDK_OFFSET(0x13EC2F10)

inline static constexpr unsigned int Class_3_C17BB168281C2EC7_TypeDefinitionIndex = 35878;

class Class_3_C17BB168281C2EC7 : public ::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceCoreBaseSelector_1<::RPG::GameCore::CakeRaceOtherTargetSelectorConfig*>
{
public:
	::System::Void _ctor(::System::Int32 a1, ::RPG::GameCore::CakeRaceOtherTargetSelectorConfig* a2, ::Class_2_F3C45F1FC7349B6E* a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::CakeRaceOtherTargetSelectorConfig*, ::Class_2_F3C45F1FC7349B6E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_C17BB168281C2EC7__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::Class_3_C17BB168281C2EC7* Method_3_9E70215A4243E117(::System::Int32 a1, ::RPG::GameCore::CakeRaceOtherTargetSelectorConfig* a2, ::Class_2_F3C45F1FC7349B6E* a3, ::System::Int32 a4)
	{
		return ((::Class_3_C17BB168281C2EC7*(*)(::System::Int32, ::RPG::GameCore::CakeRaceOtherTargetSelectorConfig*, ::Class_2_F3C45F1FC7349B6E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_C17BB168281C2EC7_METHOD_3_9E70215A4243E117_OFFSET))(a1, a2, a3, a4);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_2_21AD365C113DC484*>* Method_3_66F581080C964704()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_2_21AD365C113DC484*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C17BB168281C2EC7_METHOD_3_66F581080C964704_OFFSET))(this);
	}
};
